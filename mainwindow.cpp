#include "mainwindow.h"

#include <algorithm>
#include <map>
#include <memory>
#include <string>
#include <sstream>

#include "./ui_mainwindow.h"
#include <QTableWidget>
#include <QToolButton>
#include <QWidget>
#include <QFileDialog>

#include <ifcpp/IFC4/include/IfcProduct.h>
#include <ifcpp/model/BuildingObject.h>
#include <ifcpp/model/BuildingModel.h>
#include <ifcpp/reader/ReaderSTEP.h>

#include "ExcelExportHelper.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , m_ui(new Ui::MainWindow)
{
    m_ui->setupUi(this);
    QToolButton *tb = new QToolButton();

    tb->setText("+");
    tb->setAutoRaise(true);
    tb->setFixedSize(46, 20);

    connect(m_ui->pushButton, SIGNAL(clicked()), SLOT(browse()));
    connect(m_ui->pushButton_2, SIGNAL(clicked()), SLOT(exportToExcel()));
    m_ui->tableWidget->setRowCount(0);
    m_ui->tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
}

MainWindow::~MainWindow() {
    delete m_ui;
}

void MainWindow::browse() {
    const QString fileName = QFileDialog::getOpenFileName(this, tr("Open File"), "C:/", tr("IFC Files (*.ifc)"));
    if (!fileName.contains(".ifc")) {
        return;
    }
    m_ui->tableWidget->setRowCount(0);
    m_counter.clear();
    shared_ptr<BuildingModel> ifc_model(new BuildingModel());
    const shared_ptr<ReaderSTEP> step_reader(new ReaderSTEP());

    std::string path(fileName.toStdString());
    std::wstring widestr = std::wstring(path.begin(), path.end());
    step_reader->loadModelFromFile(widestr, ifc_model);

    const std::map<int, shared_ptr<BuildingEntity> >& map_entities = ifc_model->getMapIfcEntities();
    std::string classNames;
    for (const auto &it : map_entities) {
        shared_ptr<BuildingEntity> entity = it.second;
        if (dynamic_cast<IfcProduct*>(entity.get())) {
            std::string entityСlassName = entity->className();
            classNames += entityСlassName + " ";
        }
    }

    std::istringstream ist(classNames);
    for (std::string s; ist >> s; ++m_counter[s]);
    for (const auto &[name, quantity] : m_counter) {
        addRow(name, quantity);
    }
}

void MainWindow::exportToExcel() {
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
    for (const auto &[name, quantity] : m_counter) {
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
    m_ui->tableWidget->insertRow(m_ui->tableWidget->rowCount());
    m_ui->tableWidget->setItem(m_ui->tableWidget->rowCount() - 1, 0, new QTableWidgetItem(QString::fromStdString(name)));
    m_ui->tableWidget->setItem(m_ui->tableWidget->rowCount() - 1, 1, new QTableWidgetItem(QString::number(quantity)));
}
