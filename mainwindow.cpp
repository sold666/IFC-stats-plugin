#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QTableWidget>
#include <QToolButton>
#include <QWidget>
#include <QFileDialog>
#include <QLineEdit>
#include <QTreeWidget>

#include <ifcpp/IFC4/include/IfcBuildingStorey.h>
#include <ifcpp/IFC4/include/IfcGloballyUniqueId.h>
#include <ifcpp/IFC4/include/IfcLabel.h>
#include <ifcpp/IFC4/include/IfcObjectDefinition.h>
#include <ifcpp/IFC4/include/IfcProject.h>
#include <ifcpp/IFC4/include/IfcRelAggregates.h>
#include <ifcpp/IFC4/include/IfcRelContainedInSpatialStructure.h>
#include <ifcpp/IFC4/include/IfcText.h>
#include <ifcpp/model/BuildingModel.h>
#include <ifcpp/reader/AbstractReader.h>
#include <ifcpp/reader/ReaderSTEP.h>
#include <ifcpp/IFC4/include/IfcBuildingElement.h>
#include <ifcpp/model/AttributeObject.h>

#include <ExcelExportHelper.h>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //TODO: color headers
    //TODO: when tab was added table should appear

    /*ui->tableWidget->horizontalHeader()->setStyleSheet("background-color:#666666;");
    ui->tableWidget->verticalHeader()->setStyleSheet("background-color:#666666;");
    ui->tableWidget->insertRow(ui->tableWidget->rowCount());*/
    QToolButton *tb = new QToolButton();
    tb->setText("+");
    tb->setAutoRaise(true);
    tb->setFixedSize(46, 20);
    connect(tb, SIGNAL(clicked()), this, SLOT(addTab()));
    ui->tabWidget->addTab(new QWidget(), QString());
    ui->tabWidget->setTabEnabled(1, false);
    ui->tabWidget->tabBar()->setTabButton(1, QTabBar::RightSide, tb);

    connect(ui->tabWidget, SIGNAL(tabCloseRequested(int)), this, SLOT(closeTab(int)));

    connect(ui->pushButton, SIGNAL(clicked()), SLOT(browse()));
    connect(ui->pushButton_2, SIGNAL(clicked()), SLOT(exportToExcel()));
    ui->tableWidget->setRowCount(0);
    ui->tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);

    //TODO: remove 2 and 3 tabs on init
    tabTable.push_back(std::make_pair(ui->tab_1, ui->tableWidget));


}

MainWindow::~MainWindow() {
    delete ui;
}

void MainWindow::addTab() {
    static int number = 1;
    QWidget *tab = new QWidget(this);
    QTableWidget *table = new QTableWidget(0, 2, tab);
//    QGridLayout *layout = new QGridLayout(tab);
//    table.set
//    layout->addWidget(ui->tableWidget,0,0);
    //table->setRowCount(0);
    //table->setColumnCount(2);
    QString tabName = QString("Tab %4").arg(++number);
    ui->tabWidget->insertTab( ui->tabWidget->count() - 1, tab, tabName);
//    QVBoxLayout *vbLyt = new QVBoxLayout();
//    vbLyt->addWidget(table);
//    tab->setLayout(vbLyt);
    tabTable.push_back(std::make_pair(tab, table));
}

void MainWindow::closeTab(int index) {
   ui->tabWidget->removeTab(index);
}

void MainWindow::browse() {
    QString fileName = QFileDialog::getOpenFileName(this, tr("Open File"), "C:/", tr("IFC Files (*.ifc)"));
    if (!fileName.contains(".ifc")) {
        return;
    }
    ui->tableWidget->setRowCount(0);

    shared_ptr<BuildingModel> ifc_model(new BuildingModel());
    shared_ptr<ReaderSTEP> step_reader(new ReaderSTEP());

    std::string path(fileName.toStdString());
    std::wstring widestr = std::wstring(path.begin(), path.end());
    step_reader->loadModelFromFile(widestr, ifc_model);

    const std::map<int, shared_ptr<BuildingEntity> >& map_entities = ifc_model->getMapIfcEntities();
    counter.clear();
    std::string classNames;

    //IfcBuildingElement
    for (const auto &it : map_entities) {
        shared_ptr<BuildingEntity> entity = it.second;
        if (dynamic_cast<IfcProduct*>(entity.get())) {
            std::string entityСlassName = entity->className();
            classNames += entityСlassName + " ";
        }
    }
    std::istringstream ist(classNames);
    for (std::string s; ist >> s; ++counter[s]);
    for (const auto &[name, quantity] : counter) {
        addRow(name, quantity);
    }
}

void MainWindow::exportToExcel() {

    //TODO: make quantity cells in excel of type "numerical"

    QString fileName = QFileDialog::getSaveFileName(this, tr("Save File"), "C:\\", tr("Excel Files (*.xlsx)"));
    if (!fileName.contains(".xlsx")) {
        return;
    }
    std::string s = fileName.toStdString();
    std::replace( s.begin(), s.end(), '/', '\\');
    fileName = QString::fromStdString(s);

    ExcelExportHelper helper;

    helper.SetCellValue(1,1,"Model name");
    helper.SetCellValue(1,2,"Quantity");
    int i = 2;
    for (const auto &[name, quantity] : counter) {
        const QString qstr = QString::fromStdString(name);
        const QString qcnt = QString::number(quantity);

        helper.SetCellValue(i,1,qstr);
        helper.SetCellValue(i,2,qcnt);
        i++;
    }

    helper.SaveAs(fileName);
}

void MainWindow::addRow(const std::string& name, int quantity)
{
    const QString qstr = QString::fromStdString(name);
    const QString qcnt = QString::number(quantity);

    ui->tableWidget->insertRow( ui->tableWidget->rowCount() );
    ui->tableWidget->setItem( ui->tableWidget->rowCount() - 1,
                             0,
                             new QTableWidgetItem(qstr));
    ui->tableWidget->setItem( ui->tableWidget->rowCount() - 1,
                             1,
                             new QTableWidgetItem(qcnt));
}
