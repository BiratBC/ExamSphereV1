/********************************************************************************
** Form generated from reading UI file 'examinerlogin.ui'
**
** Created by: Qt User Interface Compiler version 6.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EXAMINERLOGIN_H
#define UI_EXAMINERLOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ExaminerLogin
{
public:
    QGridLayout *gridLayout_2;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *logo2;
    QLabel *label_3;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QSpacerItem *horizontalSpacer_4;
    QLineEdit *lineID;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer_3;
    QLineEdit *linePassword;
    QSpacerItem *verticalSpacer_3;
    QPushButton *pushButton;
    QSpacerItem *verticalSpacer_6;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QSpacerItem *horizontalSpacer_7;
    QPushButton *register_2;
    QSpacerItem *verticalSpacer_7;
    QPushButton *pushButton_2;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer_5;
    QSpacerItem *verticalSpacer;
    QSpacerItem *verticalSpacer_4;

    void setupUi(QDialog *ExaminerLogin)
    {
        if (ExaminerLogin->objectName().isEmpty())
            ExaminerLogin->setObjectName("ExaminerLogin");
        ExaminerLogin->resize(1113, 758);
        ExaminerLogin->setStyleSheet(QString::fromUtf8("*{\n"
"	background-color: rgb(0, 0, 173);\n"
"font-family:AcPlus IBM CGA;\n"
"color:#fff;\n"
"}\n"
"QLineEdit\n"
"{	\n"
"color:#0000ad;\n"
"	background-color: rgb(255, 255, 255);\n"
"}\n"
"QComboBox\n"
"{\n"
"color:#0000ad;\n"
"	background-color: rgb(255, 255, 255);\n"
"}\n"
"QPushButton\n"
"{	\n"
"	background-color: rgb(167, 171, 170);\n"
"	color:#0000ad;\n"
"}"));
        gridLayout_2 = new QGridLayout(ExaminerLogin);
        gridLayout_2->setObjectName("gridLayout_2");
        groupBox = new QGroupBox(ExaminerLogin);
        groupBox->setObjectName("groupBox");
        verticalLayout_3 = new QVBoxLayout(groupBox);
        verticalLayout_3->setObjectName("verticalLayout_3");
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        logo2 = new QLabel(groupBox);
        logo2->setObjectName("logo2");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(logo2->sizePolicy().hasHeightForWidth());
        logo2->setSizePolicy(sizePolicy);

        horizontalLayout_3->addWidget(logo2);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName("label_3");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy1);
        QFont font;
        font.setFamilies({QString::fromUtf8("AcPlus IBM CGA")});
        font.setPointSize(30);
        label_3->setFont(font);
        label_3->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(label_3);


        verticalLayout_3->addLayout(horizontalLayout_3);

        groupBox_2 = new QGroupBox(groupBox);
        groupBox_2->setObjectName("groupBox_2");
        QFont font1;
        font1.setFamilies({QString::fromUtf8("AcPlus IBM CGA")});
        font1.setPointSize(24);
        groupBox_2->setFont(font1);
        groupBox_2->setStyleSheet(QString::fromUtf8("*{\n"
"	background-color: rgb(0, 0, 173);\n"
"font-family:AcPlus IBM CGA;\n"
"color:#fff;\n"
"}\n"
"QLineEdit\n"
"{	\n"
"color:#0000ad;\n"
"	background-color: rgb(255, 255, 255);\n"
"}\n"
"QComboBox\n"
"{\n"
"color:#0000ad;\n"
"	background-color: rgb(255, 255, 255);\n"
"}\n"
"QPushButton\n"
"{	\n"
"	background-color: rgb(167, 171, 170);\n"
"	color:#0000ad;\n"
"}"));
        gridLayout = new QGridLayout(groupBox_2);
        gridLayout->setObjectName("gridLayout");
        horizontalSpacer = new QSpacerItem(80, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer, 2, 0, 1, 1);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label = new QLabel(groupBox_2);
        label->setObjectName("label");
        QFont font2;
        font2.setFamilies({QString::fromUtf8("AcPlus IBM CGA")});
        font2.setPointSize(20);
        label->setFont(font2);

        horizontalLayout->addWidget(label);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_4);

        lineID = new QLineEdit(groupBox_2);
        lineID->setObjectName("lineID");
        QFont font3;
        font3.setFamilies({QString::fromUtf8("AcPlus IBM CGA")});
        font3.setPointSize(18);
        lineID->setFont(font3);
        lineID->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout->addWidget(lineID);


        verticalLayout_2->addLayout(horizontalLayout);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Preferred);

        verticalLayout_2->addItem(verticalSpacer_2);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_2 = new QLabel(groupBox_2);
        label_2->setObjectName("label_2");
        label_2->setFont(font2);

        horizontalLayout_2->addWidget(label_2);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        linePassword = new QLineEdit(groupBox_2);
        linePassword->setObjectName("linePassword");
        linePassword->setFont(font3);
        linePassword->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout_2->addWidget(linePassword);


        verticalLayout_2->addLayout(horizontalLayout_2);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Preferred);

        verticalLayout_2->addItem(verticalSpacer_3);

        pushButton = new QPushButton(groupBox_2);
        pushButton->setObjectName("pushButton");
        QFont font4;
        font4.setFamilies({QString::fromUtf8("AcPlus IBM CGA")});
        font4.setPointSize(23);
        pushButton->setFont(font4);
        pushButton->setStyleSheet(QString::fromUtf8(""));

        verticalLayout_2->addWidget(pushButton);

        verticalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Preferred);

        verticalLayout_2->addItem(verticalSpacer_6);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        label_4 = new QLabel(groupBox_2);
        label_4->setObjectName("label_4");
        QFont font5;
        font5.setFamilies({QString::fromUtf8("AcPlus IBM CGA")});
        font5.setPointSize(14);
        label_4->setFont(font5);

        horizontalLayout_4->addWidget(label_4);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_7);

        register_2 = new QPushButton(groupBox_2);
        register_2->setObjectName("register_2");
        register_2->setFont(font4);

        horizontalLayout_4->addWidget(register_2);


        verticalLayout_2->addLayout(horizontalLayout_4);

        verticalSpacer_7 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Preferred);

        verticalLayout_2->addItem(verticalSpacer_7);

        pushButton_2 = new QPushButton(groupBox_2);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setFont(font4);
        pushButton_2->setStyleSheet(QString::fromUtf8(""));

        verticalLayout_2->addWidget(pushButton_2);


        gridLayout->addLayout(verticalLayout_2, 2, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(80, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 2, 2, 1, 1);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Maximum);

        gridLayout->addItem(verticalSpacer_5, 1, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout->addItem(verticalSpacer, 0, 1, 1, 1);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout->addItem(verticalSpacer_4, 3, 1, 1, 1);


        verticalLayout_3->addWidget(groupBox_2);


        gridLayout_2->addWidget(groupBox, 0, 0, 1, 1);

#if QT_CONFIG(shortcut)
        label->setBuddy(lineID);
        label_2->setBuddy(linePassword);
#endif // QT_CONFIG(shortcut)

        retranslateUi(ExaminerLogin);

        QMetaObject::connectSlotsByName(ExaminerLogin);
    } // setupUi

    void retranslateUi(QDialog *ExaminerLogin)
    {
        ExaminerLogin->setWindowTitle(QCoreApplication::translate("ExaminerLogin", "Dialog", nullptr));
        groupBox->setTitle(QString());
        logo2->setText(QCoreApplication::translate("ExaminerLogin", "TextLabel", nullptr));
        label_3->setText(QCoreApplication::translate("ExaminerLogin", "Examiner Login Page", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("ExaminerLogin", "Login", nullptr));
        label->setText(QCoreApplication::translate("ExaminerLogin", "Id", nullptr));
        label_2->setText(QCoreApplication::translate("ExaminerLogin", "Password\n"
"", nullptr));
        pushButton->setText(QCoreApplication::translate("ExaminerLogin", "Login", nullptr));
        label_4->setText(QCoreApplication::translate("ExaminerLogin", "Haven't Registered Yet?", nullptr));
        register_2->setText(QCoreApplication::translate("ExaminerLogin", "Register", nullptr));
        pushButton_2->setText(QCoreApplication::translate("ExaminerLogin", "Go Back", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ExaminerLogin: public Ui_ExaminerLogin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EXAMINERLOGIN_H
