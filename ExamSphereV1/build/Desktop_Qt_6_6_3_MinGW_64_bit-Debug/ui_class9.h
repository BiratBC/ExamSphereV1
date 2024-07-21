/********************************************************************************
** Form generated from reading UI file 'class9.ui'
**
** Created by: Qt User Interface Compiler version 6.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLASS9_H
#define UI_CLASS9_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_class9
{
public:

    void setupUi(QDialog *class9)
    {
        if (class9->objectName().isEmpty())
            class9->setObjectName("class9");
        class9->resize(400, 300);

        retranslateUi(class9);

        QMetaObject::connectSlotsByName(class9);
    } // setupUi

    void retranslateUi(QDialog *class9)
    {
        class9->setWindowTitle(QCoreApplication::translate("class9", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class class9: public Ui_class9 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLASS9_H
