/********************************************************************************
** Form generated from reading UI file 'welcome.ui'
**
** Created by: Qt User Interface Compiler version 6.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WELCOME_H
#define UI_WELCOME_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Welcome
{
public:
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_5;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout;
    QLabel *logo1;
    QLabel *label;
    QLabel *label_2;
    QSpacerItem *verticalSpacer_3;
    QSpacerItem *verticalSpacer;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout_2;
    QComboBox *comboBox;
    QPushButton *pushGo;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QDialog *Welcome)
    {
        if (Welcome->objectName().isEmpty())
            Welcome->setObjectName("Welcome");
        Welcome->setEnabled(true);
        Welcome->resize(1486, 808);
        QFont font;
        font.setFamilies({QString::fromUtf8("Ubuntu Medium")});
        font.setPointSize(50);
        Welcome->setFont(font);
        Welcome->setCursor(QCursor(Qt::ArrowCursor));
        Welcome->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 174);\n"
"border-color: rgb(235, 224, 255);"));
        verticalLayout_3 = new QVBoxLayout(Welcome);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        groupBox_2 = new QGroupBox(Welcome);
        groupBox_2->setObjectName("groupBox_2");
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Ac437 EuroPC Mono")});
        groupBox_2->setFont(font1);
        groupBox_2->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 174);\n"
"color: rgb(255, 255, 255);"));
        verticalLayout_5 = new QVBoxLayout(groupBox_2);
        verticalLayout_5->setObjectName("verticalLayout_5");
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName("verticalLayout_4");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        logo1 = new QLabel(groupBox_2);
        logo1->setObjectName("logo1");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(logo1->sizePolicy().hasHeightForWidth());
        logo1->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(logo1);

        label = new QLabel(groupBox_2);
        label->setObjectName("label");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy1);
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Ac437 IBM EGA 8x8")});
        font2.setPointSize(50);
        font2.setBold(false);
        label->setFont(font2);
        label->setAlignment(Qt::AlignBottom|Qt::AlignHCenter);

        horizontalLayout->addWidget(label);


        verticalLayout_4->addLayout(horizontalLayout);

        label_2 = new QLabel(groupBox_2);
        label_2->setObjectName("label_2");
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Ac437 IBM EGA 8x8")});
        label_2->setFont(font3);
        label_2->setAlignment(Qt::AlignCenter);

        verticalLayout_4->addWidget(label_2);


        verticalLayout_5->addLayout(verticalLayout_4);


        verticalLayout->addWidget(groupBox_2);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Preferred);

        verticalLayout->addItem(verticalSpacer_3);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Preferred);

        verticalLayout->addItem(verticalSpacer);

        groupBox = new QGroupBox(Welcome);
        groupBox->setObjectName("groupBox");
        QFont font4;
        font4.setFamilies({QString::fromUtf8("Ac437 IBM EGA 8x8")});
        font4.setPointSize(28);
        groupBox->setFont(font4);
        groupBox->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        horizontalLayout_3 = new QHBoxLayout(groupBox);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalSpacer = new QSpacerItem(300, 20, QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        comboBox = new QComboBox(groupBox);
        comboBox->setObjectName("comboBox");
        QFont font5;
        font5.setFamilies({QString::fromUtf8("Ac437 IBM EGA 8x8")});
        font5.setPointSize(16);
        comboBox->setFont(font5);
        comboBox->setCursor(QCursor(Qt::PointingHandCursor));
        comboBox->setStyleSheet(QString::fromUtf8("height: 60px;\n"
"color: rgb(0, 0, 174);\n"
"background-color: rgb(255, 255, 255);\n"
"width:70px;"));

        verticalLayout_2->addWidget(comboBox);

        pushGo = new QPushButton(groupBox);
        pushGo->setObjectName("pushGo");
        QFont font6;
        font6.setFamilies({QString::fromUtf8("Ac437 IBM EGA 8x8")});
        font6.setPointSize(19);
        pushGo->setFont(font6);
        pushGo->setCursor(QCursor(Qt::PointingHandCursor));
        pushGo->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 174);\n"
"width:70px;\n"
"height:50px;"));

        verticalLayout_2->addWidget(pushGo);


        horizontalLayout_3->addLayout(verticalLayout_2);

        horizontalSpacer_2 = new QSpacerItem(300, 20, QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);


        verticalLayout->addWidget(groupBox);


        verticalLayout_3->addLayout(verticalLayout);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Preferred);

        verticalLayout_3->addItem(verticalSpacer_2);


        retranslateUi(Welcome);

        QMetaObject::connectSlotsByName(Welcome);
    } // setupUi

    void retranslateUi(QDialog *Welcome)
    {
        Welcome->setWindowTitle(QCoreApplication::translate("Welcome", "Dialog", nullptr));
        groupBox_2->setTitle(QString());
        logo1->setText(QCoreApplication::translate("Welcome", "TextLabel", nullptr));
        label->setText(QCoreApplication::translate("Welcome", "Welcome to ExamSphere_", nullptr));
        label_2->setText(QCoreApplication::translate("Welcome", "\"Master Every Question with Confidence!\"", nullptr));
        groupBox->setTitle(QCoreApplication::translate("Welcome", "Login As", nullptr));
        pushGo->setText(QCoreApplication::translate("Welcome", "Go", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Welcome: public Ui_Welcome {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WELCOME_H
