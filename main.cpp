#include "mainwindow.h"

#include <QApplication>
#include <QLocale>
#include <QTranslator>
#include <QTableWidget>
#include <QMessageBox>

#include <unordered_set>
#include <memory>
#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <sstream>
#include <typeinfo>

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

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QTranslator translator;
    const QStringList uiLanguages = QLocale::system().uiLanguages();
    for (const QString &locale : uiLanguages) {
        const QString baseName = "IFCPlugin_" + QLocale(locale).name();
        if (translator.load(":/i18n/" + baseName)) {
            a.installTranslator(&translator);
            break;
        }
    }
    MainWindow w;
    w.setFixedSize(800, 500);
    w.setWindowTitle("IFC Plugin");
    a.setWindowIcon(QIcon("./icon.ico"));

    w.show();

    return a.exec();
}
