#include <QApplication>
#include <QLocale>
#include <QTranslator>
#include <QString>
#include <QStringList>

#include "mainwindow.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    QTranslator translator;
    const QStringList uiLanguages = QLocale::system().uiLanguages();
    for (const QString &locale : uiLanguages) {
        const QString baseName = "IFCPlugin_" + QLocale(locale).name();
        if (translator.load(":/i18n/" + baseName)) {
            app.installTranslator(&translator);
            break;
        }
    }
    MainWindow window;
    window.setFixedSize(800, 500);
    window.setWindowTitle("IFC Plugin");
    app.setWindowIcon(QIcon("./resources/icon.ico"));

    window.show();

    return app.exec();
}
