#include "mainwindow.h"

#include <QApplication>
#include <QLocale>
#include <QTranslator>
#include <QTableWidget>

//#include <unordered_set>
//#include <memory>
//#include <ifcpp/IFC4/include/IfcBuildingStorey.h>
//#include <ifcpp/IFC4/include/IfcGloballyUniqueId.h>
//#include <ifcpp/IFC4/include/IfcLabel.h>
//#include <ifcpp/IFC4/include/IfcObjectDefinition.h>
//#include <ifcpp/IFC4/include/IfcProject.h>
//#include <ifcpp/IFC4/include/IfcRelAggregates.h>
//#include <ifcpp/IFC4/include/IfcRelContainedInSpatialStructure.h>
//#include <ifcpp/IFC4/include/IfcText.h>
//#include <ifcpp/model/BuildingModel.h>
//#include <ifcpp/reader/ReaderSTEP.h>

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

//    std::shared_ptr<BuildingModel> ifc_model(new BuildingModel());
//    std::shared_ptr<ReaderSTEP> step_reader(new ReaderSTEP());
//    step_reader->loadModelFromFile( L"example.ifc", ifc_model);

    w.show();
    return a.exec();
}
