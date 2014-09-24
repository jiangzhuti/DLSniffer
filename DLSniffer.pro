#-------------------------------------------------
#
# Project created by QtCreator 2014-09-13T10:50:52
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = DLSniffer
TEMPLATE = app
LIBS += -ltins
CONFIG += c++11

HEADERS += \
    sniffer/pkt_capture.h \
    sniffer/pkt_processor.h \
    sniffer/sniffer_manager.h \
    ui/mainwindow.h \
    utils/queue.h \
    utils/queue_internal.h \
    ui/pkt_list_view.h \
    ui/select_nif_dlg.h

SOURCES += \
    sniffer/pkt_capture.cpp \
    sniffer/pkt_processor.cpp \
    sniffer/sniffer_manager.cpp \
    ui/mainwindow.cpp \
    utils/queue.c \
    utils/queue_internal.c \
    main.cpp \
    ui/pkt_list_view.cpp \
    ui/select_nif_dlg.cpp

