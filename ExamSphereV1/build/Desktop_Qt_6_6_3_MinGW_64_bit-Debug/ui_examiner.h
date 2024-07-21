/********************************************************************************
** Form generated from reading UI file 'examiner.ui'
**
** Created by: Qt User Interface Compiler version 6.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EXAMINER_H
#define UI_EXAMINER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_examiner
{
public:
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QDialog *examiner)
    {
        if (examiner->objectName().isEmpty())
            examiner->setObjectName("examiner");
        examiner->resize(899, 594);
        examiner->setStyleSheet(QString::fromUtf8("*{\n"
"	background-color: rgb(0, 0, 173);\n"
"font-family:AcPlus IBM CGA;\n"
"color:#fff;\n"
"}\n"
"QPushButton\n"
"{	\n"
"	background-color: rgb(167, 171, 170);\n"
"	color:#0000ad;\n"
"  width:100px;\n"
"  height:30px\n"
"}\n"
""));
        verticalLayout = new QVBoxLayout(examiner);
        verticalLayout->setObjectName("verticalLayout");
        pushButton = new QPushButton(examiner);
        pushButton->setObjectName("pushButton");

        verticalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(examiner);
        pushButton_2->setObjectName("pushButton_2");

        verticalLayout->addWidget(pushButton_2);


        retranslateUi(examiner);

        QMetaObject::connectSlotsByName(examiner);
    } // setupUi

    void retranslateUi(QDialog *examiner)
    {
        examiner->setWindowTitle(QCoreApplication::translate("examiner", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("examiner", "Check students Result", nullptr));
        pushButton_2->setText(QCoreApplication::translate("examiner", "Take Exams", nullptr));
    } // retranslateUi

};

namespace Ui {
    class examiner: public Ui_examiner {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EXAMINER_H
