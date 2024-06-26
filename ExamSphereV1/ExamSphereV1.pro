QT       += core gui
QT       += sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets
INCLUDEPATH += "C:\Program Files\MySQL\MySQL Connector C 6.1\include\mysql"
LIBS += -L"C:\Program Files\MySQL\MySQL Connector C 6.1\lib\vs14" -lmysqlclient
CONFIG += c++17


# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    addstudents.cpp \
    examinerlogin.cpp \
    main.cpp \
    student.cpp \
    studentlogin.cpp \
    welcome.cpp

HEADERS += \
    addstudents.h \
    examinerlogin.h \
    student.h \
    studentlogin.h \
    welcome.h

FORMS += \
    addstudents.ui \
    examinerlogin.ui \
    student.ui \
    studentlogin.ui \
    welcome.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    assests.qrc
