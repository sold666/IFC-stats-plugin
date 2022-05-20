#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QDir>
#include <QTableWidget>
#include <QWidget>
#include <QGridLayout>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

public slots:
    void addTab();
    void browse();
    void exportToExcel();
    void closeTab(int index);
    //void slotCloseTab();

    void addRow(const std::string& , int);

private:
    Ui::MainWindow *ui;
    std::vector<std::pair<QWidget*, QTableWidget*>> tabTable;
    QGridLayout *layout;
};
#endif // MAINWINDOW_H
