/********************************************************************************
** Form generated from reading UI file 'student.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STUDENT_H
#define UI_STUDENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Student
{
public:
    QLabel *label;
    QPushButton *pushButton;

    void setupUi(QDialog *Student)
    {
        if (Student->objectName().isEmpty())
            Student->setObjectName("Student");
        Student->resize(892, 520);
        label = new QLabel(Student);
        label->setObjectName("label");
        label->setEnabled(true);
        label->setGeometry(QRect(190, 110, 411, 121));
        QSizePolicy sizePolicy(QSizePolicy::Policy::Maximum, QSizePolicy::Policy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        QFont font;
        font.setPointSize(20);
        label->setFont(font);
        pushButton = new QPushButton(Student);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(350, 310, 93, 29));

        retranslateUi(Student);

        QMetaObject::connectSlotsByName(Student);
    } // setupUi

    void retranslateUi(QDialog *Student)
    {
        Student->setWindowTitle(QCoreApplication::translate("Student", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("Student", "Welcome to student section", nullptr));
        pushButton->setText(QCoreApplication::translate("Student", "Go back", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Student: public Ui_Student {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STUDENT_H
