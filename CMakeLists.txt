cmake_minimum_required(VERSION 3.5)

project(IFCPlugin VERSION 0.1 LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Widgets AxContainer LinguistTools)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Widgets AxContainer LinguistTools)

set(CMAKE_AUTORCC ON)

include_directories(
    IfcPlusPlus/src
    IfcPlusPlus/src/ifcpp
    IfcPlusPlus/src/ifcpp/model
)

file(GLOB_RECURSE SRC IfcPlusPlus/src/ifcpp/*.cpp)

set(PROJECT_SOURCES
        main.cpp
        mainwindow.cpp
        mainwindow.h
        ExcelExportHelper.h
        ExcelExportHelper.cpp
        t.rc
        ${SRC}
)

if(${QT_VERSION_MAJOR} GREATER_EQUAL 6)
    qt_add_executable(IFCPlugin
        MANUAL_FINALIZATION
        ${PROJECT_SOURCES}
    )

    qt_create_translation(QM_FILES ${CMAKE_SOURCE_DIR} ${TS_FILES})
else()
    if(ANDROID)
        add_library(IFCPlugin SHARED
            ${PROJECT_SOURCES}
        )
    else()
        add_executable(IFCPlugin
            ${PROJECT_SOURCES}
        )
    endif()

    qt5_create_translation(QM_FILES ${CMAKE_SOURCE_DIR} ${TS_FILES})
endif()

target_link_libraries(IFCPlugin PRIVATE Qt${QT_VERSION_MAJOR}::Widgets)
target_link_libraries(IFCPlugin PRIVATE Qt${QT_VERSION_MAJOR}::AxContainer)

set_target_properties(IFCPlugin PROPERTIES
    MACOSX_BUNDLE_GUI_IDENTIFIER my.example.com
    MACOSX_BUNDLE_BUNDLE_VERSION ${PROJECT_VERSION}
    MACOSX_BUNDLE_SHORT_VERSION_STRING ${PROJECT_VERSION_MAJOR}.${PROJECT_VERSION_MINOR}
    MACOSX_BUNDLE TRUE
    WIN32_EXECUTABLE TRUE
)

if(QT_VERSION_MAJOR EQUAL 6)
    qt_finalize_executable(IFCPlugin)
endif()
