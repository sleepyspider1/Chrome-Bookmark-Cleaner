#-------------------------------------------------
#
# Project created by QtCreator 2017-10-09T14:06:27
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = ChromeBookmarkCleaner
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    optionsdialog.cpp \
    qjsonmodel.cpp

HEADERS  += mainwindow.h \
    optionsdialog.h \
    qjsonmodel.h

FORMS    += mainwindow.ui \
    optionsdialog.ui
