/********************************************************************************
** Form generated from reading UI file 'teacherregistration.ui'
**
** Created by: Qt User Interface Compiler version 6.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEACHERREGISTRATION_H
#define UI_TEACHERREGISTRATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
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

class Ui_teacherRegistration
{
public:
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label_12;
    QLabel *label_13;
    QSpacerItem *verticalSpacer;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_8;
    QVBoxLayout *verticalLayout;
    QLabel *label_8;
    QLineEdit *lineEdit_fn;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_9;
    QLineEdit *lineEdit_mn;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_10;
    QLineEdit *lineEdit_ln;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit_id;
    QSpacerItem *verticalSpacer_3;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_11;
    QVBoxLayout *verticalLayout_4;
    QCheckBox *checkBox_8;
    QCheckBox *checkBox_9;
    QCheckBox *checkBox_10;
    QSpacerItem *verticalSpacer_4;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *lineEdit_email;
    QSpacerItem *verticalSpacer_5;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLineEdit *lineEdit_phn;
    QSpacerItem *verticalSpacer_6;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QLineEdit *lineEdit_sub;
    QSpacerItem *verticalSpacer_7;
    QHBoxLayout *horizontalLayout_13;
    QLabel *label_15;
    QComboBox *comboBox;
    QSpacerItem *verticalSpacer_12;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_5;
    QDateEdit *dateEdit_dob;
    QSpacerItem *verticalSpacer_8;
    QHBoxLayout *horizontalLayout_9;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_6;
    QLineEdit *lineEdit_psd;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_7;
    QLineEdit *lineEdit_cpsd;
    QSpacerItem *verticalSpacer_9;
    QPushButton *register_2;
    QSpacerItem *verticalSpacer_10;
    QHBoxLayout *horizontalLayout_12;
    QLabel *label_14;
    QPushButton *login;
    QSpacerItem *verticalSpacer_11;

    void setupUi(QDialog *teacherRegistration)
    {
        if (teacherRegistration->objectName().isEmpty())
            teacherRegistration->setObjectName("teacherRegistration");
        teacherRegistration->resize(954, 850);
        gridLayout_2 = new QGridLayout(teacherRegistration);
        gridLayout_2->setObjectName("gridLayout_2");
        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName("horizontalLayout_11");
        label_12 = new QLabel(teacherRegistration);
        label_12->setObjectName("label_12");

        horizontalLayout_11->addWidget(label_12);

        label_13 = new QLabel(teacherRegistration);
        label_13->setObjectName("label_13");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_13->sizePolicy().hasHeightForWidth());
        label_13->setSizePolicy(sizePolicy);
        QFont font;
        font.setFamilies({QString::fromUtf8("Ubuntu Medium")});
        font.setPointSize(25);
        label_13->setFont(font);
        label_13->setAlignment(Qt::AlignCenter);

        horizontalLayout_11->addWidget(label_13);


        gridLayout_2->addLayout(horizontalLayout_11, 0, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Preferred);

        gridLayout_2->addItem(verticalSpacer, 1, 0, 1, 1);

        groupBox = new QGroupBox(teacherRegistration);
        groupBox->setObjectName("groupBox");
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName("gridLayout");
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName("verticalLayout_5");
        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        label_8 = new QLabel(groupBox);
        label_8->setObjectName("label_8");

        verticalLayout->addWidget(label_8);

        lineEdit_fn = new QLineEdit(groupBox);
        lineEdit_fn->setObjectName("lineEdit_fn");

        verticalLayout->addWidget(lineEdit_fn);


        horizontalLayout_8->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        label_9 = new QLabel(groupBox);
        label_9->setObjectName("label_9");

        verticalLayout_2->addWidget(label_9);

        lineEdit_mn = new QLineEdit(groupBox);
        lineEdit_mn->setObjectName("lineEdit_mn");

        verticalLayout_2->addWidget(lineEdit_mn);


        horizontalLayout_8->addLayout(verticalLayout_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        label_10 = new QLabel(groupBox);
        label_10->setObjectName("label_10");

        verticalLayout_3->addWidget(label_10);

        lineEdit_ln = new QLineEdit(groupBox);
        lineEdit_ln->setObjectName("lineEdit_ln");

        verticalLayout_3->addWidget(lineEdit_ln);


        horizontalLayout_8->addLayout(verticalLayout_3);


        verticalLayout_5->addLayout(horizontalLayout_8);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Preferred);

        verticalLayout_5->addItem(verticalSpacer_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label = new QLabel(groupBox);
        label->setObjectName("label");

        horizontalLayout->addWidget(label);

        lineEdit_id = new QLineEdit(groupBox);
        lineEdit_id->setObjectName("lineEdit_id");

        horizontalLayout->addWidget(lineEdit_id);


        verticalLayout_5->addLayout(horizontalLayout);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Preferred);

        verticalLayout_5->addItem(verticalSpacer_3);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName("horizontalLayout_10");
        label_11 = new QLabel(groupBox);
        label_11->setObjectName("label_11");

        horizontalLayout_10->addWidget(label_11);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName("verticalLayout_4");
        checkBox_8 = new QCheckBox(groupBox);
        checkBox_8->setObjectName("checkBox_8");
        checkBox_8->setChecked(true);
        checkBox_8->setAutoRepeat(false);

        verticalLayout_4->addWidget(checkBox_8);

        checkBox_9 = new QCheckBox(groupBox);
        checkBox_9->setObjectName("checkBox_9");
        checkBox_9->setChecked(false);
        checkBox_9->setAutoRepeat(false);

        verticalLayout_4->addWidget(checkBox_9);

        checkBox_10 = new QCheckBox(groupBox);
        checkBox_10->setObjectName("checkBox_10");
        checkBox_10->setChecked(false);
        checkBox_10->setAutoRepeat(false);

        verticalLayout_4->addWidget(checkBox_10);


        horizontalLayout_10->addLayout(verticalLayout_4);


        verticalLayout_5->addLayout(horizontalLayout_10);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Preferred);

        verticalLayout_5->addItem(verticalSpacer_4);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_2 = new QLabel(groupBox);
        label_2->setObjectName("label_2");

        horizontalLayout_2->addWidget(label_2);

        lineEdit_email = new QLineEdit(groupBox);
        lineEdit_email->setObjectName("lineEdit_email");

        horizontalLayout_2->addWidget(lineEdit_email);


        verticalLayout_5->addLayout(horizontalLayout_2);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Preferred);

        verticalLayout_5->addItem(verticalSpacer_5);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_3 = new QLabel(groupBox);
        label_3->setObjectName("label_3");

        horizontalLayout_3->addWidget(label_3);

        lineEdit_phn = new QLineEdit(groupBox);
        lineEdit_phn->setObjectName("lineEdit_phn");

        horizontalLayout_3->addWidget(lineEdit_phn);


        verticalLayout_5->addLayout(horizontalLayout_3);

        verticalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Preferred);

        verticalLayout_5->addItem(verticalSpacer_6);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        label_4 = new QLabel(groupBox);
        label_4->setObjectName("label_4");

        horizontalLayout_4->addWidget(label_4);

        lineEdit_sub = new QLineEdit(groupBox);
        lineEdit_sub->setObjectName("lineEdit_sub");

        horizontalLayout_4->addWidget(lineEdit_sub);


        verticalLayout_5->addLayout(horizontalLayout_4);

        verticalSpacer_7 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Preferred);

        verticalLayout_5->addItem(verticalSpacer_7);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setObjectName("horizontalLayout_13");
        label_15 = new QLabel(groupBox);
        label_15->setObjectName("label_15");

        horizontalLayout_13->addWidget(label_15);

        comboBox = new QComboBox(groupBox);
        comboBox->setObjectName("comboBox");

        horizontalLayout_13->addWidget(comboBox);


        verticalLayout_5->addLayout(horizontalLayout_13);

        verticalSpacer_12 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Preferred);

        verticalLayout_5->addItem(verticalSpacer_12);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        label_5 = new QLabel(groupBox);
        label_5->setObjectName("label_5");

        horizontalLayout_5->addWidget(label_5);

        dateEdit_dob = new QDateEdit(groupBox);
        dateEdit_dob->setObjectName("dateEdit_dob");

        horizontalLayout_5->addWidget(dateEdit_dob);


        verticalLayout_5->addLayout(horizontalLayout_5);

        verticalSpacer_8 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Preferred);

        verticalLayout_5->addItem(verticalSpacer_8);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName("horizontalLayout_9");
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        label_6 = new QLabel(groupBox);
        label_6->setObjectName("label_6");

        horizontalLayout_6->addWidget(label_6);

        lineEdit_psd = new QLineEdit(groupBox);
        lineEdit_psd->setObjectName("lineEdit_psd");

        horizontalLayout_6->addWidget(lineEdit_psd);


        horizontalLayout_9->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        label_7 = new QLabel(groupBox);
        label_7->setObjectName("label_7");

        horizontalLayout_7->addWidget(label_7);

        lineEdit_cpsd = new QLineEdit(groupBox);
        lineEdit_cpsd->setObjectName("lineEdit_cpsd");

        horizontalLayout_7->addWidget(lineEdit_cpsd);


        horizontalLayout_9->addLayout(horizontalLayout_7);


        verticalLayout_5->addLayout(horizontalLayout_9);

        verticalSpacer_9 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Preferred);

        verticalLayout_5->addItem(verticalSpacer_9);

        register_2 = new QPushButton(groupBox);
        register_2->setObjectName("register_2");

        verticalLayout_5->addWidget(register_2);

        verticalSpacer_10 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Preferred);

        verticalLayout_5->addItem(verticalSpacer_10);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName("horizontalLayout_12");
        label_14 = new QLabel(groupBox);
        label_14->setObjectName("label_14");

        horizontalLayout_12->addWidget(label_14);

        login = new QPushButton(groupBox);
        login->setObjectName("login");

        horizontalLayout_12->addWidget(login);


        verticalLayout_5->addLayout(horizontalLayout_12);

        verticalSpacer_11 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Preferred);

        verticalLayout_5->addItem(verticalSpacer_11);


        gridLayout->addLayout(verticalLayout_5, 0, 0, 1, 1);


        gridLayout_2->addWidget(groupBox, 2, 0, 1, 1);


        retranslateUi(teacherRegistration);

        QMetaObject::connectSlotsByName(teacherRegistration);
    } // setupUi

    void retranslateUi(QDialog *teacherRegistration)
    {
        teacherRegistration->setWindowTitle(QCoreApplication::translate("teacherRegistration", "Dialog", nullptr));
        label_12->setText(QCoreApplication::translate("teacherRegistration", "TextLabel", nullptr));
        label_13->setText(QCoreApplication::translate("teacherRegistration", "Teacher Registration", nullptr));
        groupBox->setTitle(QCoreApplication::translate("teacherRegistration", "Sign Up", nullptr));
        label_8->setText(QCoreApplication::translate("teacherRegistration", "First Name*", nullptr));
        label_9->setText(QCoreApplication::translate("teacherRegistration", "Middle Name", nullptr));
        label_10->setText(QCoreApplication::translate("teacherRegistration", "Last Name", nullptr));
        label->setText(QCoreApplication::translate("teacherRegistration", "Id*", nullptr));
        label_11->setText(QCoreApplication::translate("teacherRegistration", "Grade*", nullptr));
        checkBox_8->setText(QCoreApplication::translate("teacherRegistration", "8", nullptr));
        checkBox_9->setText(QCoreApplication::translate("teacherRegistration", "9", nullptr));
        checkBox_10->setText(QCoreApplication::translate("teacherRegistration", "10", nullptr));
        label_2->setText(QCoreApplication::translate("teacherRegistration", "Email*", nullptr));
        label_3->setText(QCoreApplication::translate("teacherRegistration", "Phone Number* (+977)", nullptr));
        label_4->setText(QCoreApplication::translate("teacherRegistration", "Subject Code*", nullptr));
        label_15->setText(QCoreApplication::translate("teacherRegistration", "Sex", nullptr));
        label_5->setText(QCoreApplication::translate("teacherRegistration", "Date of Birth", nullptr));
        label_6->setText(QCoreApplication::translate("teacherRegistration", "Password", nullptr));
        label_7->setText(QCoreApplication::translate("teacherRegistration", "Confirm Password", nullptr));
        register_2->setText(QCoreApplication::translate("teacherRegistration", "Register", nullptr));
        label_14->setText(QCoreApplication::translate("teacherRegistration", "Already Registered?", nullptr));
        login->setText(QCoreApplication::translate("teacherRegistration", "Login", nullptr));
    } // retranslateUi

};

namespace Ui {
    class teacherRegistration: public Ui_teacherRegistration {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEACHERREGISTRATION_H
