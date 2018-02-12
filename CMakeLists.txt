cmake_minimum_required(VERSION 3.6)
project(PCLDemo)

set(CMAKE_CXX_STANDARD 11)
# set source files
set(SOURCE_FILES Sources/main.cpp Sources/CustomSignal.cpp Sources/mainwindow.cpp Headers/CustomSignal.h Headers/mainwindow.h Headers/newpaper.h Headers/reader.h Headers/pclviewer.h Sources/pclviewer.cpp)
set(HEADER_FILES ${CMAKE_CURRENT_SOURCE_DIR}/Headers)
# cmake config <package>_DIR
#set(PCL_DIR "/usr/local/Cellar/pcl/1.8.1_2/share/pcl-1.8")

#PCL config
find_package(PCL 1.8 REQUIRED)
include_directories(${HEADER_FILES} ${PCL_INCLUDE_DIRS})
link_directories(${PCL_LIBRARY_DIRS})
add_definitions(${PCL_DEFINITIONS})

#VTK config
find_package(VTK REQUIRED)

#Qt config
#对应的Qt的安装目录
set(QT_HOME "/usr/local/Cellar/qt/5.10.0_1")
set(CMAKE_PREFIX_PATH ${QT_HOME})
SET(PROJECT_ROOT ${CMAKE_CURRENT_SOURCE_DIR})
set(CMAKE_INCLUDE_CURRENT_DIR on)
set(CMAKE_AUTOMOC on)
#set(CMAKE_AUTOUIC on)
set(CMAKE_AUTORCC on)
###这里根据Project的实际情况来添加需要的模块


find_package(Qt5 COMPONENTS Core Widgets UiTools Xml Network Qml Quick REQUIRED)

# Load VTK Settings
include( ${VTK_USE_FILE} )

#Add Executable
add_executable(PCLDemo ${SOURCE_FILES})

target_link_libraries(PCLDemo Qt5::Core Qt5::Widgets Qt5::Gui Qt5::UiTools Qt5::Xml Qt5::Network Qt5::Qml Qt5::Quick ${PCL_LIBRARIES} ${VTK_LIBRARIES})