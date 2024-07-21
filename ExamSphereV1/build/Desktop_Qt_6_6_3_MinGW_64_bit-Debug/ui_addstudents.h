/********************************************************************************
** Form generated from reading UI file 'addstudents.ui'
**
** Created by: Qt User Interface Compiler version 6.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDSTUDENTS_H
#define UI_ADDSTUDENTS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_addStudents
{
public:
    QGridLayout *gridLayout;
    QSpacerItem *verticalSpacer_3;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout_5;
    QComboBox *comboBox;
    QLabel *label_4;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_4;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QLineEdit *lineEdit;
    QSpacerItem *horizontalSpacer_2;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton_4;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *horizontalSpacer_3;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_3;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QGridLayout *gridLayout_2;
    QTableWidget *tableWidget;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer_6;
    QPushButton *pushButton_6;
    QPushButton *pushButton_3;
    QPushButton *pushButton_5;
    QSpacerItem *horizontalSpacer_5;
    QSpacerItem *verticalSpacer_4;
    QLabel *filePathLabel;
    QSpacerItem *horizontalSpacer_4;

    void setupUi(QDialog *addStudents)
    {
        if (addStudents->objectName().isEmpty())
            addStudents->setObjectName("addStudents");
        addStudents->resize(1340, 704);
        QFont font;
        font.setFamilies({QString::fromUtf8("AcPlus IBM CGA")});
        font.setBold(false);
        font.setItalic(false);
        addStudents->setFont(font);
        addStudents->setStyleSheet(QString::fromUtf8("*{\n"
"	background-color: rgb(0, 0, 173);\n"
"font-family:AcPlus IBM CGA;\n"
"color:#fff;\n"
"font-size:18px;\n"
"}\n"
"QLineEdit\n"
"{	\n"
"color:#0000ad;\n"
"	background-color: rgb(255, 255, 255);\n"
"height:40px;\n"
"}\n"
"QComboBox\n"
"{\n"
"color:#0000ad;\n"
"	background-color: rgb(255, 255, 255);\n"
"height:30px;\n"
"width:80px;\n"
"}\n"
"QPushButton\n"
"{	\n"
"	background-color: rgb(167, 171, 170);\n"
"	color:#0000ad;\n"
"  width:100px;\n"
"  height:30px\n"
"}\n"
"QTableWidget\n"
"{\n"
"	color: rgb(255, 255, 255);\n"
"}"));
        gridLayout = new QGridLayout(addStudents);
        gridLayout->setObjectName("gridLayout");
        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Preferred);

        gridLayout->addItem(verticalSpacer_3, 0, 1, 1, 2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label_2 = new QLabel(addStudents);
        label_2->setObjectName("label_2");

        horizontalLayout->addWidget(label_2);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName("verticalLayout_5");
        comboBox = new QComboBox(addStudents);
        comboBox->setObjectName("comboBox");

        verticalLayout_5->addWidget(comboBox);

        label_4 = new QLabel(addStudents);
        label_4->setObjectName("label_4");

        verticalLayout_5->addWidget(label_4);


        horizontalLayout->addLayout(verticalLayout_5);


        gridLayout->addLayout(horizontalLayout, 1, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Preferred);

        gridLayout->addItem(verticalSpacer, 1, 2, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label = new QLabel(addStudents);
        label->setObjectName("label");
        QFont font1;
        font1.setFamilies({QString::fromUtf8("AcPlus IBM CGA")});
        label->setFont(font1);

        horizontalLayout_2->addWidget(label);

        lineEdit = new QLineEdit(addStudents);
        lineEdit->setObjectName("lineEdit");

        horizontalLayout_2->addWidget(lineEdit);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        horizontalLayout_4->addLayout(horizontalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        pushButton_4 = new QPushButton(addStudents);
        pushButton_4->setObjectName("pushButton_4");

        verticalLayout->addWidget(pushButton_4);

        pushButton = new QPushButton(addStudents);
        pushButton->setObjectName("pushButton");

        verticalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(addStudents);
        pushButton_2->setObjectName("pushButton_2");

        verticalLayout->addWidget(pushButton_2);


        horizontalLayout_4->addLayout(verticalLayout);


        gridLayout->addLayout(horizontalLayout_4, 2, 1, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Preferred);

        gridLayout->addItem(verticalSpacer_2, 3, 2, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 4, 0, 1, 1);

        groupBox = new QGroupBox(addStudents);
        groupBox->setObjectName("groupBox");
        verticalLayout_4 = new QVBoxLayout(groupBox);
        verticalLayout_4->setObjectName("verticalLayout_4");
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        label_3 = new QLabel(groupBox);
        label_3->setObjectName("label_3");

        verticalLayout_2->addWidget(label_3);

        scrollArea = new QScrollArea(groupBox);
        scrollArea->setObjectName("scrollArea");
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName("scrollAreaWidgetContents");
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 1196, 205));
        gridLayout_2 = new QGridLayout(scrollAreaWidgetContents);
        gridLayout_2->setObjectName("gridLayout_2");
        tableWidget = new QTableWidget(scrollAreaWidgetContents);
        if (tableWidget->columnCount() < 4)
            tableWidget->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        __qtablewidgetitem->setTextAlignment(Qt::AlignLeading|Qt::AlignVCenter);
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        __qtablewidgetitem1->setTextAlignment(Qt::AlignLeading|Qt::AlignVCenter);
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        __qtablewidgetitem2->setTextAlignment(Qt::AlignLeading|Qt::AlignVCenter);
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        __qtablewidgetitem3->setTextAlignment(Qt::AlignLeading|Qt::AlignVCenter);
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        tableWidget->setObjectName("tableWidget");

        gridLayout_2->addWidget(tableWidget, 0, 0, 1, 1);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout_2->addWidget(scrollArea);


        verticalLayout_4->addLayout(verticalLayout_2);

        groupBox_2 = new QGroupBox(groupBox);
        groupBox_2->setObjectName("groupBox_2");
        verticalLayout_3 = new QVBoxLayout(groupBox_2);
        verticalLayout_3->setObjectName("verticalLayout_3");
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_6);

        pushButton_6 = new QPushButton(groupBox_2);
        pushButton_6->setObjectName("pushButton_6");

        horizontalLayout_5->addWidget(pushButton_6);

        pushButton_3 = new QPushButton(groupBox_2);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout_5->addWidget(pushButton_3);

        pushButton_5 = new QPushButton(groupBox_2);
        pushButton_5->setObjectName("pushButton_5");

        horizontalLayout_5->addWidget(pushButton_5);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_5);


        verticalLayout_3->addLayout(horizontalLayout_5);


        verticalLayout_4->addWidget(groupBox_2);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Preferred);

        verticalLayout_4->addItem(verticalSpacer_4);

        filePathLabel = new QLabel(groupBox);
        filePathLabel->setObjectName("filePathLabel");

        verticalLayout_4->addWidget(filePathLabel);


        gridLayout->addWidget(groupBox, 4, 1, 1, 2);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer_4, 4, 3, 1, 1);


        retranslateUi(addStudents);

        QMetaObject::connectSlotsByName(addStudents);
    } // setupUi

    void retranslateUi(QDialog *addStudents)
    {
        addStudents->setWindowTitle(QCoreApplication::translate("addStudents", "Dialog", nullptr));
        label_2->setText(QCoreApplication::translate("addStudents", "Class", nullptr));
        label_4->setText(QCoreApplication::translate("addStudents", "* Choose class and click 'ok' to refresh the records.", nullptr));
        label->setText(QCoreApplication::translate("addStudents", "id", nullptr));
        pushButton_4->setText(QCoreApplication::translate("addStudents", "ok", nullptr));
        pushButton->setText(QCoreApplication::translate("addStudents", "Add", nullptr));
        pushButton_2->setText(QCoreApplication::translate("addStudents", "Remove", nullptr));
        groupBox->setTitle(QCoreApplication::translate("addStudents", "GroupBox", nullptr));
        label_3->setText(QCoreApplication::translate("addStudents", "Students eligible to give exam", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("addStudents", "id", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("addStudents", "first_name", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("addStudents", "last_name", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("addStudents", "grade", nullptr));
        groupBox_2->setTitle(QString());
        pushButton_6->setText(QCoreApplication::translate("addStudents", "Add Questions", nullptr));
        pushButton_3->setText(QCoreApplication::translate("addStudents", "Create Exam", nullptr));
        pushButton_5->setText(QCoreApplication::translate("addStudents", "Go back", nullptr));
        filePathLabel->setText(QCoreApplication::translate("addStudents", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class addStudents: public Ui_addStudents {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDSTUDENTS_H
