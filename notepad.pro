include(rasterwindow/rasterwindow.pri)

TEMPLATE = app
TARGET = notepad

QT += widgets

qtHaveModule(printsupport): QT += printsupport
requires(qtConfig(fontdialog))

SOURCES += \
    analogclockwindow.cpp \
    main.cpp\
    notepad.cpp

HEADERS += notepad.h \
    analogclockwindow.h

FORMS += notepad.ui

RESOURCES += \
    notepad.qrc

# install
target.path = $$[QT_INSTALL_EXAMPLES]/widgets/tutorials/notepad
INSTALLS += target

