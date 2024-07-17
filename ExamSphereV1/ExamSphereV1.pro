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
    class10.cpp \
    class8.cpp \
    class9.cpp \
    examiner.cpp \
    examinerlogin.cpp \
    main.cpp \
    score.cpp \
    student.cpp \
    studentlogin.cpp \
    studentregistration.cpp \
    teacherregistration.cpp \
    welcome.cpp

HEADERS += \
    addstudents.h \
    class10.h \
    class8.h \
    class9.h \
    examiner.h \
    examinerlogin.h \
    score.h \
    student.h \
    studentlogin.h \
    studentregistration.h \
    teacherregistration.h \
    welcome.h

FORMS += \
    addstudents.ui \
    class10.ui \
    class8.ui \
    class9.ui \
    examiner.ui \
    examinerlogin.ui \
    score.ui \
    student.ui \
    studentlogin.ui \
    studentregistration.ui \
    teacherregistration.ui \
    welcome.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    assests.qrc
