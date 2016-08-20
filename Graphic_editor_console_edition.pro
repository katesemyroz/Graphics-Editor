#-------------------------------------------------
#
# Project created by QtCreator 2016-08-12T14:47:09
#
#-------------------------------------------------

QT       += core

QT       -= gui

TARGET = Graphic_editor_console_edition
CONFIG   += console
CONFIG   -= app_bundle

TEMPLATE = app


SOURCES += main.cpp \
    point.cpp \
    color.cpp \
    figure.cpp \
    solidfigure.cpp \
    nonsolidfigure.cpp \
    zigzag.cpp \
    rectangle.cpp \
    oval.cpp

HEADERS += \
    point.h \
    color.h \
    figure.h \
    solidfigure.h \
    nonsolidfigure.h \
    zigzag.h \
    rectangle.h \
    oval.h
