QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    createidform.cpp \
    faculty.cpp \
    facultycarddisplay.cpp \
    facultyform.cpp \
    globalstorage.cpp \
    main.cpp \
    mainwindow.cpp \
    person.cpp \
    student.cpp \
    studentcarddisplay.cpp \
    studentform.cpp \
    user.cpp \
    viewform.cpp

HEADERS += \
    createidform.h \
    faculty.h \
    facultycarddisplay.h \
    facultyform.h \
    globalstorage.h \
    mainwindow.h \
    person.h \
    student.h \
    studentcarddisplay.h \
    studentform.h \
    user.h \
    viewform.h

FORMS += \
    createidform.ui \
    facultycarddisplay.ui \
    facultyform.ui \
    mainwindow.ui \
    studentcarddisplay.ui \
    studentform.ui \
    viewform.ui

TRANSLATIONS += \
    IdCardGenerator_en_US.ts
CONFIG += lrelease
CONFIG += embed_translations

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
