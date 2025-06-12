QT += core gui widgets opengl
QT += widgets openglwidgets


CONFIG += c++11

TARGET = maze
TEMPLATE = app

DEFINES += QT_DEPRECATED_WARNINGS

SOURCES += \
    form.cpp \
    main.cpp \
    mainwindow.cpp \
    unionfind.cpp \
    mazewidget.cpp \
    deepfirstsearch.cpp \
    adjacencylist.cpp \
    kruskal.cpp \
    prim.cpp \
    recursivedivision.cpp \
    solutionlist.cpp \
    util.cpp \
    visualizationdialog.cpp \
    visualizationwidget.cpp \
    wallfollower.cpp \
    astar.cpp

HEADERS += \
    form.h \
    mainwindow.h \
    unionfind.h \
    mazewidget.h \
    deepfirstsearch.h \
    adjacencylist.h \
    kruskal.h \
    prim.h \
    recursivedivision.h \
    solutionlist.h \
    util.h \
    visualizationdialog.h \
    visualizationwidget.h \
    wallfollower.h \
    astar.h \
    mutable_priority_queue.h

FORMS += \
    form.ui \
    mainwindow.ui \
    visualizationdialog.ui

DISTFILES += \
    1.jpg \
    README.md

RESOURCES += \
    resources.qrc
