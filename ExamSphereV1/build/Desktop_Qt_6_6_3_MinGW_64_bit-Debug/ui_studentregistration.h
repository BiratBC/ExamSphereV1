/********************************************************************************
** Form generated from reading UI file 'studentregistration.ui'
**
** Created by: Qt User Interface Compiler version 6.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STUDENTREGISTRATION_H
#define UI_STUDENTREGISTRATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
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

class Ui_studentRegistration
{
public:
    QGridLayout *gridLayout_2;
    QSpacerItem *horizontalSpacer_12;
    QSpacerItem *verticalSpacer;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_8;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLineEdit *lineEdit_fN;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;
    QLineEdit *lineEdit_mN;
    QSpacerItem *horizontalSpacer_2;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_3;
    QLineEdit *lineEdit_lN;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label_4;
    QSpacerItem *horizontalSpacer_3;
    QLineEdit *lineEdit_id;
    QSpacerItem *verticalSpacer_3;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_5;
    QSpacerItem *horizontalSpacer_6;
    QLineEdit *lineEdit_email;
    QSpacerItem *verticalSpacer_4;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_6;
    QSpacerItem *horizontalSpacer_7;
    QLineEdit *lineEdit_phn;
    QSpacerItem *verticalSpacer_10;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_14;
    QSpacerItem *horizontalSpacer_8;
    QLineEdit *lineEdit_batch;
    QSpacerItem *verticalSpacer_11;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label_15;
    QSpacerItem *horizontalSpacer_9;
    QLineEdit *lineEdit_class;
    QSpacerItem *verticalSpacer_5;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_7;
    QComboBox *comboBox;
    QSpacerItem *verticalSpacer_6;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_9;
    QDateEdit *dateEdit_dob;
    QVBoxLayout *verticalLayout_5;
    QSpacerItem *verticalSpacer_9;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_8;
    QSpacerItem *horizontalSpacer_10;
    QLineEdit *lineEdit_psd;
    QLabel *label_13;
    QSpacerItem *horizontalSpacer_11;
    QLineEdit *lineEdit_Cpsd;
    QSpacerItem *verticalSpacer_7;
    QPushButton *pushButton_2;
    QSpacerItem *verticalSpacer_8;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_10;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *horizontalSpacer_5;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_11;
    QLabel *label_12;
    QSpacerItem *horizontalSpacer_13;

    void setupUi(QDialog *studentRegistration)
    {
        if (studentRegistration->objectName().isEmpty())
            studentRegistration->setObjectName("studentRegistration");
        studentRegistration->resize(1113, 696);
        QFont font;
        font.setFamilies({QString::fromUtf8("AcPlus IBM CGA")});
        studentRegistration->setFont(font);
        studentRegistration->setStyleSheet(QString::fromUtf8("*{\n"
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
"{\n"
"	\n"
"	background-color: rgb(167, 171, 170);\n"
"	color:#0000ad;\n"
"}\n"
""));
        gridLayout_2 = new QGridLayout(studentRegistration);
        gridLayout_2->setObjectName("gridLayout_2");
        horizontalSpacer_12 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_12, 2, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Preferred);

        gridLayout_2->addItem(verticalSpacer, 1, 1, 1, 1);

        groupBox = new QGroupBox(studentRegistration);
        groupBox->setObjectName("groupBox");
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName("gridLayout");
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName("verticalLayout_4");
        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        label = new QLabel(groupBox);
        label->setObjectName("label");

        verticalLayout->addWidget(label);

        lineEdit_fN = new QLineEdit(groupBox);
        lineEdit_fN->setObjectName("lineEdit_fN");

        verticalLayout->addWidget(lineEdit_fN);


        horizontalLayout_8->addLayout(verticalLayout);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        label_2 = new QLabel(groupBox);
        label_2->setObjectName("label_2");

        verticalLayout_2->addWidget(label_2);

        lineEdit_mN = new QLineEdit(groupBox);
        lineEdit_mN->setObjectName("lineEdit_mN");

        verticalLayout_2->addWidget(lineEdit_mN);


        horizontalLayout_8->addLayout(verticalLayout_2);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        label_3 = new QLabel(groupBox);
        label_3->setObjectName("label_3");

        verticalLayout_3->addWidget(label_3);

        lineEdit_lN = new QLineEdit(groupBox);
        lineEdit_lN->setObjectName("lineEdit_lN");

        verticalLayout_3->addWidget(lineEdit_lN);


        horizontalLayout_8->addLayout(verticalLayout_3);


        verticalLayout_4->addLayout(horizontalLayout_8);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Preferred);

        verticalLayout_4->addItem(verticalSpacer_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label_4 = new QLabel(groupBox);
        label_4->setObjectName("label_4");

        horizontalLayout->addWidget(label_4);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        lineEdit_id = new QLineEdit(groupBox);
        lineEdit_id->setObjectName("lineEdit_id");

        horizontalLayout->addWidget(lineEdit_id);


        verticalLayout_4->addLayout(horizontalLayout);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Preferred);

        verticalLayout_4->addItem(verticalSpacer_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_5 = new QLabel(groupBox);
        label_5->setObjectName("label_5");

        horizontalLayout_2->addWidget(label_5);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_6);

        lineEdit_email = new QLineEdit(groupBox);
        lineEdit_email->setObjectName("lineEdit_email");

        horizontalLayout_2->addWidget(lineEdit_email);


        verticalLayout_4->addLayout(horizontalLayout_2);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Preferred);

        verticalLayout_4->addItem(verticalSpacer_4);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_6 = new QLabel(groupBox);
        label_6->setObjectName("label_6");

        horizontalLayout_3->addWidget(label_6);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_7);

        lineEdit_phn = new QLineEdit(groupBox);
        lineEdit_phn->setObjectName("lineEdit_phn");

        horizontalLayout_3->addWidget(lineEdit_phn);


        verticalLayout_4->addLayout(horizontalLayout_3);

        verticalSpacer_10 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Preferred);

        verticalLayout_4->addItem(verticalSpacer_10);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName("horizontalLayout_10");
        label_14 = new QLabel(groupBox);
        label_14->setObjectName("label_14");

        horizontalLayout_10->addWidget(label_14);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_8);

        lineEdit_batch = new QLineEdit(groupBox);
        lineEdit_batch->setObjectName("lineEdit_batch");

        horizontalLayout_10->addWidget(lineEdit_batch);


        verticalLayout_4->addLayout(horizontalLayout_10);

        verticalSpacer_11 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Preferred);

        verticalLayout_4->addItem(verticalSpacer_11);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName("horizontalLayout_11");
        label_15 = new QLabel(groupBox);
        label_15->setObjectName("label_15");

        horizontalLayout_11->addWidget(label_15);

        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Minimum);

        horizontalLayout_11->addItem(horizontalSpacer_9);

        lineEdit_class = new QLineEdit(groupBox);
        lineEdit_class->setObjectName("lineEdit_class");

        horizontalLayout_11->addWidget(lineEdit_class);


        verticalLayout_4->addLayout(horizontalLayout_11);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Preferred);

        verticalLayout_4->addItem(verticalSpacer_5);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        label_7 = new QLabel(groupBox);
        label_7->setObjectName("label_7");

        horizontalLayout_4->addWidget(label_7);

        comboBox = new QComboBox(groupBox);
        comboBox->setObjectName("comboBox");

        horizontalLayout_4->addWidget(comboBox);


        verticalLayout_4->addLayout(horizontalLayout_4);

        verticalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Preferred);

        verticalLayout_4->addItem(verticalSpacer_6);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        label_9 = new QLabel(groupBox);
        label_9->setObjectName("label_9");

        horizontalLayout_5->addWidget(label_9);

        dateEdit_dob = new QDateEdit(groupBox);
        dateEdit_dob->setObjectName("dateEdit_dob");

        horizontalLayout_5->addWidget(dateEdit_dob);


        verticalLayout_4->addLayout(horizontalLayout_5);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName("verticalLayout_5");

        verticalLayout_4->addLayout(verticalLayout_5);

        verticalSpacer_9 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Preferred);

        verticalLayout_4->addItem(verticalSpacer_9);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        label_8 = new QLabel(groupBox);
        label_8->setObjectName("label_8");

        horizontalLayout_6->addWidget(label_8);

        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_10);

        lineEdit_psd = new QLineEdit(groupBox);
        lineEdit_psd->setObjectName("lineEdit_psd");

        horizontalLayout_6->addWidget(lineEdit_psd);

        label_13 = new QLabel(groupBox);
        label_13->setObjectName("label_13");

        horizontalLayout_6->addWidget(label_13);

        horizontalSpacer_11 = new QSpacerItem(40, 20, QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_11);

        lineEdit_Cpsd = new QLineEdit(groupBox);
        lineEdit_Cpsd->setObjectName("lineEdit_Cpsd");

        horizontalLayout_6->addWidget(lineEdit_Cpsd);


        verticalLayout_4->addLayout(horizontalLayout_6);

        verticalSpacer_7 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Preferred);

        verticalLayout_4->addItem(verticalSpacer_7);

        pushButton_2 = new QPushButton(groupBox);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setStyleSheet(QString::fromUtf8("background-color: rgb(167, 171, 170);"));

        verticalLayout_4->addWidget(pushButton_2);

        verticalSpacer_8 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Preferred);

        verticalLayout_4->addItem(verticalSpacer_8);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        label_10 = new QLabel(groupBox);
        label_10->setObjectName("label_10");

        horizontalLayout_7->addWidget(label_10);

        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName("pushButton");

        horizontalLayout_7->addWidget(pushButton);


        verticalLayout_4->addLayout(horizontalLayout_7);


        gridLayout->addLayout(verticalLayout_4, 0, 1, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer_4, 0, 2, 1, 1);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer_5, 0, 0, 1, 1);


        gridLayout_2->addWidget(groupBox, 2, 1, 1, 1);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName("horizontalLayout_9");
        label_11 = new QLabel(studentRegistration);
        label_11->setObjectName("label_11");

        horizontalLayout_9->addWidget(label_11);

        label_12 = new QLabel(studentRegistration);
        label_12->setObjectName("label_12");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_12->sizePolicy().hasHeightForWidth());
        label_12->setSizePolicy(sizePolicy);
        QFont font1;
        font1.setFamilies({QString::fromUtf8("AcPlus IBM CGA")});
        font1.setPointSize(35);
        label_12->setFont(font1);
        label_12->setAlignment(Qt::AlignCenter);

        horizontalLayout_9->addWidget(label_12);


        gridLayout_2->addLayout(horizontalLayout_9, 0, 1, 1, 1);

        horizontalSpacer_13 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_13, 2, 2, 1, 1);


        retranslateUi(studentRegistration);

        QMetaObject::connectSlotsByName(studentRegistration);
    } // setupUi

    void retranslateUi(QDialog *studentRegistration)
    {
        studentRegistration->setWindowTitle(QCoreApplication::translate("studentRegistration", "Dialog", nullptr));
        groupBox->setTitle(QCoreApplication::translate("studentRegistration", "Sign Up", nullptr));
        label->setText(QCoreApplication::translate("studentRegistration", "First Name*", nullptr));
        label_2->setText(QCoreApplication::translate("studentRegistration", "Middle Name", nullptr));
        label_3->setText(QCoreApplication::translate("studentRegistration", "Last Name*", nullptr));
        label_4->setText(QCoreApplication::translate("studentRegistration", "Id*", nullptr));
        label_5->setText(QCoreApplication::translate("studentRegistration", "Email*", nullptr));
        label_6->setText(QCoreApplication::translate("studentRegistration", "Phone Number*(+977)", nullptr));
        label_14->setText(QCoreApplication::translate("studentRegistration", "Batch*", nullptr));
        label_15->setText(QCoreApplication::translate("studentRegistration", "Class*", nullptr));
        label_7->setText(QCoreApplication::translate("studentRegistration", "Sex", nullptr));
        label_9->setText(QCoreApplication::translate("studentRegistration", "Date of Birth", nullptr));
        label_8->setText(QCoreApplication::translate("studentRegistration", "Password*", nullptr));
        label_13->setText(QCoreApplication::translate("studentRegistration", "Confirm Password*", nullptr));
        pushButton_2->setText(QCoreApplication::translate("studentRegistration", "Register", nullptr));
        label_10->setText(QCoreApplication::translate("studentRegistration", "Already Registered?", nullptr));
        pushButton->setText(QCoreApplication::translate("studentRegistration", "Login", nullptr));
        label_11->setText(QCoreApplication::translate("studentRegistration", "TextLabel", nullptr));
        label_12->setText(QCoreApplication::translate("studentRegistration", "Student Registration", nullptr));
    } // retranslateUi

};

namespace Ui {
    class studentRegistration: public Ui_studentRegistration {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STUDENTREGISTRATION_H
