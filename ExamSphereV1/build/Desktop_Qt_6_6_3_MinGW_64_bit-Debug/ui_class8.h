/********************************************************************************
** Form generated from reading UI file 'class8.ui'
**
** Created by: Qt User Interface Compiler version 6.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLASS8_H
#define UI_CLASS8_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_class8
{
public:
    QGridLayout *gridLayout_2;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_3;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *prevButton;
    QPushButton *nextButton;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_9;
    QLabel *questionLabel;
    QVBoxLayout *verticalLayout_3;
    QRadioButton *option1;
    QRadioButton *option2;
    QRadioButton *option3;
    QRadioButton *option4;
    QSpacerItem *verticalSpacer;
    QPushButton *homeButton;
    QComboBox *subject;
    QHBoxLayout *horizontalLayout;
    QLabel *logo5;
    QLabel *label_2;
    QPushButton *start;

    void setupUi(QDialog *class8)
    {
        if (class8->objectName().isEmpty())
            class8->setObjectName("class8");
        class8->resize(1234, 792);
        gridLayout_2 = new QGridLayout(class8);
        gridLayout_2->setObjectName("gridLayout_2");
        groupBox = new QGroupBox(class8);
        groupBox->setObjectName("groupBox");
        gridLayout_3 = new QGridLayout(groupBox);
        gridLayout_3->setObjectName("gridLayout_3");
        scrollArea = new QScrollArea(groupBox);
        scrollArea->setObjectName("scrollArea");
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName("scrollAreaWidgetContents");
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 1186, 626));
        gridLayout = new QGridLayout(scrollAreaWidgetContents);
        gridLayout->setObjectName("gridLayout");
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        prevButton = new QPushButton(scrollAreaWidgetContents);
        prevButton->setObjectName("prevButton");

        horizontalLayout_2->addWidget(prevButton);

        nextButton = new QPushButton(scrollAreaWidgetContents);
        nextButton->setObjectName("nextButton");

        horizontalLayout_2->addWidget(nextButton);


        gridLayout->addLayout(horizontalLayout_2, 2, 0, 1, 1);

        groupBox_2 = new QGroupBox(scrollAreaWidgetContents);
        groupBox_2->setObjectName("groupBox_2");
        verticalLayout_9 = new QVBoxLayout(groupBox_2);
        verticalLayout_9->setObjectName("verticalLayout_9");
        questionLabel = new QLabel(groupBox_2);
        questionLabel->setObjectName("questionLabel");

        verticalLayout_9->addWidget(questionLabel);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        option1 = new QRadioButton(groupBox_2);
        option1->setObjectName("option1");
        option1->setChecked(true);

        verticalLayout_3->addWidget(option1);

        option2 = new QRadioButton(groupBox_2);
        option2->setObjectName("option2");
        option2->setCheckable(true);
        option2->setChecked(false);

        verticalLayout_3->addWidget(option2);

        option3 = new QRadioButton(groupBox_2);
        option3->setObjectName("option3");

        verticalLayout_3->addWidget(option3);

        option4 = new QRadioButton(groupBox_2);
        option4->setObjectName("option4");

        verticalLayout_3->addWidget(option4);


        verticalLayout_9->addLayout(verticalLayout_3);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Preferred);

        verticalLayout_9->addItem(verticalSpacer);


        gridLayout->addWidget(groupBox_2, 0, 0, 1, 1);

        homeButton = new QPushButton(scrollAreaWidgetContents);
        homeButton->setObjectName("homeButton");

        gridLayout->addWidget(homeButton, 3, 0, 1, 1);

        scrollArea->setWidget(scrollAreaWidgetContents);

        gridLayout_3->addWidget(scrollArea, 3, 0, 1, 1);

        subject = new QComboBox(groupBox);
        subject->setObjectName("subject");

        gridLayout_3->addWidget(subject, 1, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        logo5 = new QLabel(groupBox);
        logo5->setObjectName("logo5");

        horizontalLayout->addWidget(logo5);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName("label_2");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);
        label_2->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(label_2);


        gridLayout_3->addLayout(horizontalLayout, 0, 0, 1, 1);

        start = new QPushButton(groupBox);
        start->setObjectName("start");

        gridLayout_3->addWidget(start, 2, 0, 1, 1);


        gridLayout_2->addWidget(groupBox, 0, 0, 1, 1);


        retranslateUi(class8);

        QMetaObject::connectSlotsByName(class8);
    } // setupUi

    void retranslateUi(QDialog *class8)
    {
        class8->setWindowTitle(QCoreApplication::translate("class8", "Dialog", nullptr));
        groupBox->setTitle(QCoreApplication::translate("class8", "GroupBox", nullptr));
        prevButton->setText(QCoreApplication::translate("class8", "Previous", nullptr));
        nextButton->setText(QCoreApplication::translate("class8", "Next", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("class8", "GroupBox", nullptr));
        questionLabel->setText(QCoreApplication::translate("class8", "Text", nullptr));
        option1->setText(QCoreApplication::translate("class8", "option1", nullptr));
        option2->setText(QCoreApplication::translate("class8", "option2", nullptr));
        option3->setText(QCoreApplication::translate("class8", "option3", nullptr));
        option4->setText(QCoreApplication::translate("class8", "option4", nullptr));
        homeButton->setText(QCoreApplication::translate("class8", "Return Home", nullptr));
        logo5->setText(QCoreApplication::translate("class8", "TextLabel", nullptr));
        label_2->setText(QCoreApplication::translate("class8", "TextLabel", nullptr));
        start->setText(QCoreApplication::translate("class8", "Go", nullptr));
    } // retranslateUi

};

namespace Ui {
    class class8: public Ui_class8 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLASS8_H
