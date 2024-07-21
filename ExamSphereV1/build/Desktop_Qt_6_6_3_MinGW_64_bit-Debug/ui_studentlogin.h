/********************************************************************************
** Form generated from reading UI file 'studentlogin.ui'
**
** Created by: Qt User Interface Compiler version 6.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STUDENTLOGIN_H
#define UI_STUDENTLOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ExamSphere
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer_6;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *logo3;
    QLabel *label;
    QSpacerItem *horizontalSpacer_7;
    QGroupBox *Login;
    QGridLayout *gridLayout_3;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *idimg;
    QLabel *id;
    QSpacerItem *horizontalSpacer_3;
    QLineEdit *idLine;
    QSpacerItem *verticalSpacer_3;
    QHBoxLayout *horizontalLayout_2;
    QLabel *psdimg;
    QLabel *password;
    QSpacerItem *horizontalSpacer_4;
    QLineEdit *passwordLine;
    QSpacerItem *verticalSpacer_4;
    QPushButton *pushButton;
    QSpacerItem *verticalSpacer_6;
    QPushButton *pushButton_2;
    QSpacerItem *verticalSpacer_7;
    QLabel *label_2;
    QSpacerItem *verticalSpacer_8;
    QPushButton *pushButton_3;
    QSpacerItem *verticalSpacer_5;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *verticalSpacer;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *horizontalSpacer_5;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *ExamSphere)
    {
        if (ExamSphere->objectName().isEmpty())
            ExamSphere->setObjectName("ExamSphere");
        ExamSphere->resize(1255, 786);
        ExamSphere->setStyleSheet(QString::fromUtf8("background-color: rgba(0,0,174,255)\n"
"\n"
""));
        centralwidget = new QWidget(ExamSphere);
        centralwidget->setObjectName("centralwidget");
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName("gridLayout");
        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer_6, 0, 3, 1, 1);

        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName("groupBox");
        groupBox->setStyleSheet(QString::fromUtf8("background-color: rgba(0,0,174,255);"));
        verticalLayout_2 = new QVBoxLayout(groupBox);
        verticalLayout_2->setObjectName("verticalLayout_2");
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        logo3 = new QLabel(groupBox);
        logo3->setObjectName("logo3");

        horizontalLayout_3->addWidget(logo3);

        label = new QLabel(groupBox);
        label->setObjectName("label");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        QFont font;
        font.setFamilies({QString::fromUtf8("Ac437 IBM EGA 8x8")});
        font.setPointSize(50);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(label);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_7);


        verticalLayout_2->addLayout(horizontalLayout_3);

        Login = new QGroupBox(groupBox);
        Login->setObjectName("Login");
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Ac437 IBM EGA 8x8")});
        font1.setPointSize(30);
        Login->setFont(font1);
        Login->setStyleSheet(QString::fromUtf8("color:#fff;"));
        gridLayout_3 = new QGridLayout(Login);
        gridLayout_3->setObjectName("gridLayout_3");
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        idimg = new QLabel(Login);
        idimg->setObjectName("idimg");
        idimg->setStyleSheet(QString::fromUtf8("color:#fff;"));

        horizontalLayout->addWidget(idimg);

        id = new QLabel(Login);
        id->setObjectName("id");
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Ac437 IBM EGA 8x8")});
        font2.setPointSize(18);
        id->setFont(font2);

        horizontalLayout->addWidget(id);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        idLine = new QLineEdit(Login);
        idLine->setObjectName("idLine");
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Ac437 IBM CGA")});
        font3.setPointSize(16);
        idLine->setFont(font3);
        idLine->setStyleSheet(QString::fromUtf8("border: 1px solid;\n"
"border-color: rgb(255, 111, 42);\n"
"border-radius:5px;\n"
"height:45px;\n"
"background-color: rgb(255, 255, 255);\n"
"color:#0000ad;"));

        horizontalLayout->addWidget(idLine);


        verticalLayout->addLayout(horizontalLayout);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Preferred);

        verticalLayout->addItem(verticalSpacer_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        psdimg = new QLabel(Login);
        psdimg->setObjectName("psdimg");

        horizontalLayout_2->addWidget(psdimg);

        password = new QLabel(Login);
        password->setObjectName("password");
        password->setFont(font2);

        horizontalLayout_2->addWidget(password);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);

        passwordLine = new QLineEdit(Login);
        passwordLine->setObjectName("passwordLine");
        passwordLine->setFont(font3);
        passwordLine->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"border: 1px solid;\n"
"border-color: rgb(255, 111, 42);\n"
"border-radius:5px;\n"
"height:45px;\n"
"color:#0000ad;"));
        passwordLine->setEchoMode(QLineEdit::Password);

        horizontalLayout_2->addWidget(passwordLine);


        verticalLayout->addLayout(horizontalLayout_2);


        verticalLayout_3->addLayout(verticalLayout);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Preferred);

        verticalLayout_3->addItem(verticalSpacer_4);

        pushButton = new QPushButton(Login);
        pushButton->setObjectName("pushButton");
        QFont font4;
        font4.setFamilies({QString::fromUtf8("Ac437 IBM EGA 8x8")});
        font4.setPointSize(16);
        pushButton->setFont(font4);
        pushButton->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton->setStyleSheet(QString::fromUtf8("background-color: #a7abaa;\n"
"color: rgba(0,0,173,255);\n"
"border-radius: 12px; \n"
"border: 1px solid;\n"
"border-color: #0000ad;\n"
"height:50px;\n"
"width:100px;"));

        verticalLayout_3->addWidget(pushButton);

        verticalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Preferred);

        verticalLayout_3->addItem(verticalSpacer_6);

        pushButton_2 = new QPushButton(Login);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setFont(font4);
        pushButton_2->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_2->setStyleSheet(QString::fromUtf8("background-color: #a7abaa;\n"
"color:rgba(0,0,173,255);\n"
"border-radius: 12px; \n"
"border: 1px solid;\n"
"border-color: #0000ad;\n"
"height:50px;"));

        verticalLayout_3->addWidget(pushButton_2);

        verticalSpacer_7 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Preferred);

        verticalLayout_3->addItem(verticalSpacer_7);

        label_2 = new QLabel(Login);
        label_2->setObjectName("label_2");
        QFont font5;
        font5.setFamilies({QString::fromUtf8("Ac437 IBM EGA 8x8")});
        font5.setPointSize(14);
        label_2->setFont(font5);
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_2->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(label_2);

        verticalSpacer_8 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Preferred);

        verticalLayout_3->addItem(verticalSpacer_8);

        pushButton_3 = new QPushButton(Login);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setFont(font4);
        pushButton_3->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_3->setStyleSheet(QString::fromUtf8("background-color:rgba(167,171,170,255);\n"
"border-radius: 12px; \n"
"border: 1px solid;\n"
"\n"
"color:rgba(0,0,173,255);\n"
"height:50px;"));

        verticalLayout_3->addWidget(pushButton_3);


        gridLayout_3->addLayout(verticalLayout_3, 2, 1, 1, 1);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout_3->addItem(verticalSpacer_5, 0, 1, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Maximum);

        gridLayout_3->addItem(verticalSpacer_2, 1, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout_3->addItem(verticalSpacer, 3, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_3->addItem(horizontalSpacer, 2, 0, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_2, 2, 2, 1, 1);


        verticalLayout_2->addWidget(Login);


        gridLayout->addWidget(groupBox, 0, 1, 1, 1);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer_5, 0, 0, 1, 1);

        ExamSphere->setCentralWidget(centralwidget);
        menubar = new QMenuBar(ExamSphere);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1255, 26));
        ExamSphere->setMenuBar(menubar);
        statusbar = new QStatusBar(ExamSphere);
        statusbar->setObjectName("statusbar");
        ExamSphere->setStatusBar(statusbar);

        retranslateUi(ExamSphere);

        QMetaObject::connectSlotsByName(ExamSphere);
    } // setupUi

    void retranslateUi(QMainWindow *ExamSphere)
    {
        ExamSphere->setWindowTitle(QCoreApplication::translate("ExamSphere", "ExamSphere", nullptr));
        groupBox->setTitle(QString());
        logo3->setText(QCoreApplication::translate("ExamSphere", "TextLabel", nullptr));
        label->setText(QCoreApplication::translate("ExamSphere", "<font color = #fff>Student Login Page", nullptr));
        Login->setTitle(QCoreApplication::translate("ExamSphere", "Login", nullptr));
        idimg->setText(QCoreApplication::translate("ExamSphere", "TextLabel", nullptr));
        id->setText(QCoreApplication::translate("ExamSphere", "<font color = #fff>ID", nullptr));
        psdimg->setText(QCoreApplication::translate("ExamSphere", "TextLabel", nullptr));
        password->setText(QCoreApplication::translate("ExamSphere", "<font color = #fff>Password", nullptr));
        pushButton->setText(QCoreApplication::translate("ExamSphere", "Login", nullptr));
        pushButton_2->setText(QCoreApplication::translate("ExamSphere", "Go back", nullptr));
        label_2->setText(QCoreApplication::translate("ExamSphere", "<font color:#fffff>Haven't Registered yet?", nullptr));
        pushButton_3->setText(QCoreApplication::translate("ExamSphere", "Register Now", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ExamSphere: public Ui_ExamSphere {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STUDENTLOGIN_H
