#-------------------------------------------------
#
# Project created by QtCreator 2017-03-28T23:37:42
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets network

TARGET = telematyka
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which as been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += main.cpp\
        mainwindow.cpp \
    dodajpacjenta.cpp \
    lozko.cpp \
    baza_pacjentow.cpp \
    dane_pacjenta.cpp \
    test.cpp

HEADERS  += mainwindow.h \
    dodajpacjenta.h \
    lozko.h \
    baza_pacjentow.h \
    dane_pacjenta.h \
    test.h

FORMS    += mainwindow.ui \
    dodajpacjenta.ui \
    lozko.ui \
    baza_pacjentow.ui \
    dane_pacjenta.ui
