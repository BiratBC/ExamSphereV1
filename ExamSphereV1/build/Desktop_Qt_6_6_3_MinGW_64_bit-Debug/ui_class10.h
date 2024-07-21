/********************************************************************************
** Form generated from reading UI file 'class10.ui'
**
** Created by: Qt User Interface Compiler version 6.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLASS10_H
#define UI_CLASS10_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_class10
{
public:

    void setupUi(QDialog *class10)
    {
        if (class10->objectName().isEmpty())
            class10->setObjectName("class10");
        class10->resize(400, 300);

        retranslateUi(class10);

        QMetaObject::connectSlotsByName(class10);
    } // setupUi

    void retranslateUi(QDialog *class10)
    {
        class10->setWindowTitle(QCoreApplication::translate("class10", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class class10: public Ui_class10 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLASS10_H
