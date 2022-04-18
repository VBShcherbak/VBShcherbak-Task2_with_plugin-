TEMPLATE = lib
TARGET = Fifteen
QT += qml quick
CONFIG += plugin c++11

TARGET = $$qtLibraryTarget($$TARGET)
uri = task.two.qml.cpp

# Input
SOURCES += \
        fifteen_plugin.cpp \
        fifteen.cpp

HEADERS += \
        fifteen_plugin.h \
        fifteen.h

DISTFILES = qmldir

DESTDIR = task/two/qml/cpp

QMAKE_POST_LINK += $$quote(cp $$PWD/qmldir $$DESTDIR/qmldir)
