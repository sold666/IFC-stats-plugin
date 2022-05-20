#include "mainwindow.h"

#include <QApplication>
#include <QLocale>
#include <QTranslator>
#include <QTableWidget>

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

    shared_ptr<BuildingModel> ifc_model(new BuildingModel());
    shared_ptr<ReaderSTEP> step_reader(new ReaderSTEP());

    // 2: load the model:
    //std::string path(QCoreApplication::arguments().at(1));
    std::string path(argv[1]);
    std::wstring widestr = std::wstring(path.begin(), path.end());
    step_reader->loadModelFromFile(widestr, ifc_model);

    const std::map<int, shared_ptr<BuildingEntity> >& map_entities = ifc_model->getMapIfcEntities();
    std::map<std::string, int> counter;
    std::string classNames;

    for (const auto &it : map_entities)
    {
        shared_ptr<BuildingEntity> entity = it.second;
        if (dynamic_cast<IfcProduct*>(entity.get())) {
            std::string entityСlassName = entity->className();
            classNames += entityСlassName + " ";
            //std::cout << entityСlassName << std::endl;
        }
    }
    std::istringstream ist(classNames);
    for (std::string s; ist >> s; ++counter[s]);
    for (const auto &[name, quantity] : counter)
    {
        w.addRow(name, quantity);
        //std::cout << name << " => " << quantity << std::endl;
    }
    return a.exec();
}
