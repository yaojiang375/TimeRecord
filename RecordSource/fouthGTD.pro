#-------------------------------------------------
#
# Project created by QtCreator 2013-06-04T16:24:29
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = fouthGTD
TEMPLATE = app


SOURCES += main.cpp\
        widget.cpp \
    dialog.cpp \
    setting.cpp \
    readsetting.cpp \
    wrong.cpp

HEADERS  += widget.h \
    dialog.h \
    setting.h \
    change.h \
    readsetting.h \
    gloable.h \
    wrong.h \
    midset.h

FORMS    += widget.ui \
    dialog.ui \
    setting.ui \
    wrong.ui
