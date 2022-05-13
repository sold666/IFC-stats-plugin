#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QTableWidget>
#include <QToolButton>
#include <QWidget>
#include <QFileDialog>
#include <QLineEdit>
#include <QTreeWidget>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //TODO: color headers
    //TODO: when tab was added table should appear
    //TODO: add new rows by button


    /*ui->tableWidget->horizontalHeader()->setStyleSheet("background-color:#666666;");
    ui->tableWidget->verticalHeader()->setStyleSheet("background-color:#666666;");
    ui->tableWidget->insertRow(ui->tableWidget->rowCount());*/
    QToolButton *tb = new QToolButton();
    tb->setText("+");
    tb->setAutoRaise(true);
    tb->setFixedSize(46, 20);
    connect(tb, SIGNAL(clicked()), this, SLOT(addTab()));
    ui->tabWidget->addTab(new QWidget(), QString());
    ui->tabWidget->setTabEnabled(3, false);
    ui->tabWidget->tabBar()->setTabButton(3, QTabBar::RightSide, tb);

    connect(ui->tabWidget, SIGNAL(tabCloseRequested(int)), this, SLOT(closeTab(int)));

    connect(ui->pushButton, SIGNAL(clicked()), SLOT(browse()));
}

MainWindow::~MainWindow() {
    delete ui;
}

void MainWindow::addTab() {
    static int number = 3;
    QWidget *tab = new QWidget(this);
    QString tabName = QString("Tab %4").arg(++number);
    ui->tabWidget->insertTab( ui->tabWidget->count() - 1, tab, tabName);
}

void MainWindow::closeTab(int index) {
   ui->tabWidget->removeTab(index);
}

void MainWindow::browse() {
    QString fileName = QFileDialog::getOpenFileName(this, tr("Open File"), "C:/", tr("IFC Files (*.ifc)"));
}

void MainWindow::load() {
    //TODO: add load file button which must parse ifc
}
