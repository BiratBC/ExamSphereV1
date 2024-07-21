/********************************************************************************
** Form generated from reading UI file 'student.ui'
**
** Created by: Qt User Interface Compiler version 6.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STUDENT_H
#define UI_STUDENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Student
{
public:
    QGridLayout *gridLayout_2;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_3;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout;
    QLabel *logo4;
    QLabel *label_2;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_9;
    QGroupBox *groupBox_3;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_13;
    QLabel *idLabel;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label;
    QSpacerItem *horizontalSpacer;
    QLabel *FnameLabel;
    QLabel *LnameLabel;
    QSpacerItem *verticalSpacer_3;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QLabel *emailLabel;
    QSpacerItem *verticalSpacer_4;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_8;
    QLabel *batchLabel;
    QSpacerItem *verticalSpacer_6;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_10;
    QLabel *gradeLabel;
    QSpacerItem *verticalSpacer_7;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_12;
    QLabel *dobLabel;
    QSpacerItem *verticalSpacer_8;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer_11;
    QPushButton *pushButton;
    QSpacerItem *verticalSpacer_5;
    QPushButton *pushButton_2;
    QSpacerItem *verticalSpacer_12;
    QPushButton *pushButton_3;
    QSpacerItem *verticalSpacer_13;
    QPushButton *pushButton_4;
    QSpacerItem *verticalSpacer_9;

    void setupUi(QDialog *Student)
    {
        if (Student->objectName().isEmpty())
            Student->setObjectName("Student");
        Student->resize(1338, 664);
        Student->setStyleSheet(QString::fromUtf8("*{\n"
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
"	background-color: rgb(167, 171, 170);\n"
"	color:#0000ad;\n"
"}\n"
""));
        gridLayout_2 = new QGridLayout(Student);
        gridLayout_2->setObjectName("gridLayout_2");
        groupBox = new QGroupBox(Student);
        groupBox->setObjectName("groupBox");
        groupBox->setStyleSheet(QString::fromUtf8(""));
        gridLayout_3 = new QGridLayout(groupBox);
        gridLayout_3->setObjectName("gridLayout_3");
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName("verticalLayout_4");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        logo4 = new QLabel(groupBox);
        logo4->setObjectName("logo4");

        horizontalLayout->addWidget(logo4);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName("label_2");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);
        QFont font;
        font.setFamilies({QString::fromUtf8("AcPlus IBM CGA")});
        font.setPointSize(50);
        label_2->setFont(font);
        label_2->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(label_2);


        verticalLayout_4->addLayout(horizontalLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_4->addItem(verticalSpacer);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName("horizontalLayout_9");
        groupBox_3 = new QGroupBox(groupBox);
        groupBox_3->setObjectName("groupBox_3");
        QFont font1;
        font1.setFamilies({QString::fromUtf8("AcPlus IBM CGA")});
        font1.setPointSize(35);
        groupBox_3->setFont(font1);
        verticalLayout_3 = new QVBoxLayout(groupBox_3);
        verticalLayout_3->setObjectName("verticalLayout_3");
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_13 = new QLabel(groupBox_3);
        label_13->setObjectName("label_13");
        QFont font2;
        font2.setFamilies({QString::fromUtf8("AcPlus IBM CGA")});
        font2.setPointSize(14);
        label_13->setFont(font2);

        horizontalLayout_2->addWidget(label_13);

        idLabel = new QLabel(groupBox_3);
        idLabel->setObjectName("idLabel");
        idLabel->setFont(font2);

        horizontalLayout_2->addWidget(idLabel);


        verticalLayout_3->addLayout(horizontalLayout_2);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Preferred);

        verticalLayout_3->addItem(verticalSpacer_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label = new QLabel(groupBox_3);
        label->setObjectName("label");
        label->setFont(font2);

        horizontalLayout_3->addWidget(label);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        FnameLabel = new QLabel(groupBox_3);
        FnameLabel->setObjectName("FnameLabel");
        FnameLabel->setFont(font2);
        FnameLabel->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(FnameLabel);

        LnameLabel = new QLabel(groupBox_3);
        LnameLabel->setObjectName("LnameLabel");
        LnameLabel->setFont(font2);
        LnameLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_3->addWidget(LnameLabel);


        verticalLayout_3->addLayout(horizontalLayout_3);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Preferred);

        verticalLayout_3->addItem(verticalSpacer_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        label_4 = new QLabel(groupBox_3);
        label_4->setObjectName("label_4");
        label_4->setFont(font2);

        horizontalLayout_4->addWidget(label_4);

        emailLabel = new QLabel(groupBox_3);
        emailLabel->setObjectName("emailLabel");
        emailLabel->setFont(font2);

        horizontalLayout_4->addWidget(emailLabel);


        verticalLayout_3->addLayout(horizontalLayout_4);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Preferred);

        verticalLayout_3->addItem(verticalSpacer_4);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        label_8 = new QLabel(groupBox_3);
        label_8->setObjectName("label_8");
        label_8->setFont(font2);

        horizontalLayout_6->addWidget(label_8);

        batchLabel = new QLabel(groupBox_3);
        batchLabel->setObjectName("batchLabel");
        batchLabel->setFont(font2);

        horizontalLayout_6->addWidget(batchLabel);


        verticalLayout_3->addLayout(horizontalLayout_6);

        verticalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Preferred);

        verticalLayout_3->addItem(verticalSpacer_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        label_10 = new QLabel(groupBox_3);
        label_10->setObjectName("label_10");
        label_10->setFont(font2);

        horizontalLayout_7->addWidget(label_10);

        gradeLabel = new QLabel(groupBox_3);
        gradeLabel->setObjectName("gradeLabel");
        gradeLabel->setFont(font2);

        horizontalLayout_7->addWidget(gradeLabel);


        verticalLayout_3->addLayout(horizontalLayout_7);

        verticalSpacer_7 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Preferred);

        verticalLayout_3->addItem(verticalSpacer_7);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        label_12 = new QLabel(groupBox_3);
        label_12->setObjectName("label_12");
        label_12->setFont(font2);

        horizontalLayout_8->addWidget(label_12);

        dobLabel = new QLabel(groupBox_3);
        dobLabel->setObjectName("dobLabel");
        dobLabel->setFont(font2);

        horizontalLayout_8->addWidget(dobLabel);


        verticalLayout_3->addLayout(horizontalLayout_8);

        verticalSpacer_8 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Preferred);

        verticalLayout_3->addItem(verticalSpacer_8);


        horizontalLayout_9->addWidget(groupBox_3);

        groupBox_2 = new QGroupBox(groupBox);
        groupBox_2->setObjectName("groupBox_2");
        groupBox_2->setFont(font1);
        verticalLayout_2 = new QVBoxLayout(groupBox_2);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        verticalSpacer_11 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Preferred);

        verticalLayout->addItem(verticalSpacer_11);

        pushButton = new QPushButton(groupBox_2);
        pushButton->setObjectName("pushButton");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy1);
        QFont font3;
        font3.setFamilies({QString::fromUtf8("AcPlus IBM CGA")});
        font3.setPointSize(20);
        pushButton->setFont(font3);
        pushButton->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton->setStyleSheet(QString::fromUtf8(""));

        verticalLayout->addWidget(pushButton);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Preferred);

        verticalLayout->addItem(verticalSpacer_5);

        pushButton_2 = new QPushButton(groupBox_2);
        pushButton_2->setObjectName("pushButton_2");
        sizePolicy1.setHeightForWidth(pushButton_2->sizePolicy().hasHeightForWidth());
        pushButton_2->setSizePolicy(sizePolicy1);
        pushButton_2->setFont(font3);
        pushButton_2->setCursor(QCursor(Qt::ArrowCursor));
        pushButton_2->setStyleSheet(QString::fromUtf8(""));

        verticalLayout->addWidget(pushButton_2);

        verticalSpacer_12 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Preferred);

        verticalLayout->addItem(verticalSpacer_12);

        pushButton_3 = new QPushButton(groupBox_2);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setFont(font3);

        verticalLayout->addWidget(pushButton_3);

        verticalSpacer_13 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Preferred);

        verticalLayout->addItem(verticalSpacer_13);

        pushButton_4 = new QPushButton(groupBox_2);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setFont(font3);

        verticalLayout->addWidget(pushButton_4);


        verticalLayout_2->addLayout(verticalLayout);


        horizontalLayout_9->addWidget(groupBox_2);


        verticalLayout_4->addLayout(horizontalLayout_9);


        gridLayout_3->addLayout(verticalLayout_4, 0, 0, 1, 1);

        verticalSpacer_9 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout_3->addItem(verticalSpacer_9, 1, 0, 1, 1);


        gridLayout_2->addWidget(groupBox, 0, 0, 1, 1);


        retranslateUi(Student);

        QMetaObject::connectSlotsByName(Student);
    } // setupUi

    void retranslateUi(QDialog *Student)
    {
        Student->setWindowTitle(QCoreApplication::translate("Student", "Dialog", nullptr));
        groupBox->setTitle(QString());
        logo4->setText(QCoreApplication::translate("Student", "TextLabel", nullptr));
        label_2->setText(QCoreApplication::translate("Student", "Student Dashboard", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("Student", "Profile", nullptr));
        label_13->setText(QCoreApplication::translate("Student", "Id : ", nullptr));
        idLabel->setText(QCoreApplication::translate("Student", "TextLabel", nullptr));
        label->setText(QCoreApplication::translate("Student", "Full Name: ", nullptr));
        FnameLabel->setText(QCoreApplication::translate("Student", "TextLabel", nullptr));
        LnameLabel->setText(QCoreApplication::translate("Student", "TextLabel", nullptr));
        label_4->setText(QCoreApplication::translate("Student", "Email : ", nullptr));
        emailLabel->setText(QCoreApplication::translate("Student", "TextLabel", nullptr));
        label_8->setText(QCoreApplication::translate("Student", "Batch : ", nullptr));
        batchLabel->setText(QCoreApplication::translate("Student", "TextLabel", nullptr));
        label_10->setText(QCoreApplication::translate("Student", "Class : ", nullptr));
        gradeLabel->setText(QCoreApplication::translate("Student", "TextLabel", nullptr));
        label_12->setText(QCoreApplication::translate("Student", "Date of Birth : ", nullptr));
        dobLabel->setText(QCoreApplication::translate("Student", "TextLabel", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("Student", "Actions", nullptr));
        pushButton->setText(QCoreApplication::translate("Student", "Enter Exam", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Student", "Change Password", nullptr));
        pushButton_3->setText(QCoreApplication::translate("Student", "Check Previous Results", nullptr));
        pushButton_4->setText(QCoreApplication::translate("Student", "Log Out", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Student: public Ui_Student {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STUDENT_H
