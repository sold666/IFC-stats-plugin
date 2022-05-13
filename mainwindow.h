#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QDir>

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
    void load();
    void closeTab(int index);
    //void slotCloseTab();
private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
