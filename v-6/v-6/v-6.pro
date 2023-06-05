QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    database.cpp \
    diaporama.cpp \
    diaporama1.cpp \
    image.cpp \
    lecteur.cpp \
    main.cpp \
    lecteurvue.cpp

HEADERS += \
    database.h \
    diaporama.h \
    diaporama1.h \
    image.h \
    lecteur.h \
    lecteurvue.h

FORMS += \
    diaporama1.ui \
    lecteurvue.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    imagesDiapo.qrc