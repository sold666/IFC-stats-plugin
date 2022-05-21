#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <string>
#include <QMainWindow>
#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow {
    Q_OBJECT

public:
    MainWindow(QWidget* parent = nullptr);
    ~MainWindow();

public slots:

    void browse();

    void exportToExcel();

private:
    void addRow(const std::string& , int);

    Ui::MainWindow *m_ui;
    std::map<std::string, int> m_counter;
};

#endif
