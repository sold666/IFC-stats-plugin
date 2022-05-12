#include "mainwindow.h"

#include <QApplication>
#include <QLocale>
#include <QTranslator>
#include <QTableWidget>
#include <unordered_set>
#include <memory>
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

    // 1: create an IFC model and a reader for IFC files in STEP format:
    shared_ptr<BuildingModel> ifc_model(new BuildingModel());
    shared_ptr<ReaderSTEP> step_reader(new ReaderSTEP());

    // 2: load the model:
    step_reader->loadModelFromFile( L"example.ifc", ifc_model);

    // 3: get a flat map of all loaded IFC entities:
    const std::map<int, shared_ptr<BuildingEntity> >& map_entities = ifc_model->getMapIfcEntities();

    for (auto it : map_entities)
    {
        shared_ptr<BuildingEntity> entity = it.second;

        // check for certain type of the entity:
        shared_ptr<IfcBuildingStorey> ifc_storey = dynamic_pointer_cast<IfcBuildingStorey>(entity);
        if (ifc_storey)
        {
            // access attributes:
            if (ifc_storey->m_GlobalId)
            {
                std::wcout << L"found IfcBuildingStorey entity with GUID: " << ifc_storey->m_GlobalId->m_value << std::endl;
            }
        }
    }

    // 4: traverse tree structure of model, starting at root object (IfcProject)
    shared_ptr<IfcProject> ifc_project = ifc_model->getIfcProject();
    std::unordered_set<int> set_visited;
    shared_ptr<MyIfcTreeItem> root_item = resolveTreeItems(ifc_project, set_visited);

    // you can access the model as a flat map (step 3), or a tree (step 4), depending on your requirements

    return a.exec();
}
