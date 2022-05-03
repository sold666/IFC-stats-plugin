#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QTableWidget>
#include <QToolButton>
#include <QWidget>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //TODO: color headers
    //TODO: delete tabs
    //TODO: when tab was added table should appear
    //TODO: add new rows by button
    //TODO: add choose file button
    //TODO: add load file button which must parse ifc

    /*ui->tableWidget->horizontalHeader()->setStyleSheet("background-color:#666666;");
    ui->tableWidget->verticalHeader()->setStyleSheet("background-color:#666666;");
    ui->tableWidget->insertRow(ui->tableWidget->rowCount());*/
    QToolButton *tb = new QToolButton();
    tb->setText("+");
    tb->setAutoRaise(true);
    tb->setFixedSize(46, 20);

    connect(tb, SIGNAL(clicked()), this, SLOT(addTab()));
    ui->tabWidget->addTab(new QWidget(), QString());
    //ui->tabWidget->addTab(new QLabel(), QString());
    ui->tabWidget->setTabEnabled(3, false);
    ui->tabWidget->tabBar()->setTabButton(3, QTabBar::RightSide, tb);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::addTab()
{
    static int number = 3;
    QWidget *tab = new QWidget(this);

    QString tabName = QString("Tab %4").arg(++number);
    ui->tabWidget->insertTab( ui->tabWidget->count() - 1, tab, tabName);
}
