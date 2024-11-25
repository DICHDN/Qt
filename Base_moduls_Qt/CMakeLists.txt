cmake_minimum_required(VERSION 3.16)

project(Base_moduls_Qt LANGUAGES CXX)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Core LinguistTools)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Core LinguistTools)
find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Core LinguistTools Network Sql)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Core LinguistTools Network Sql)
set(TS_FILES Base_moduls_Qt_ru_RU.ts)

add_executable(Base_moduls_Qt
  main.cpp
  ${TS_FILES}
)
target_link_libraries(Base_moduls_Qt Qt${QT_VERSION_MAJOR}::Core)
target_link_libraries(Base_moduls_Qt Qt${QT_VERSION_MAJOR}::Network)
target_link_libraries(Base_moduls_Qt Qt${QT_VERSION_MAJOR}::Sql)

if(COMMAND qt_create_translation)
    qt_create_translation(QM_FILES ${CMAKE_SOURCE_DIR} ${TS_FILES})
else()
    qt5_create_translation(QM_FILES ${CMAKE_SOURCE_DIR} ${TS_FILES})
endif()

include(GNUInstallDirs)
install(TARGETS Base_moduls_Qt
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
