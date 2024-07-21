/********************************************************************************
** Form generated from reading UI file 'score.ui'
**
** Created by: Qt User Interface Compiler version 6.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SCORE_H
#define UI_SCORE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_score
{
public:
    QLabel *label_3;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLabel *label;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_2;
    QPushButton *pushButton;
    QLabel *score_2;

    void setupUi(QDialog *score)
    {
        if (score->objectName().isEmpty())
            score->setObjectName("score");
        score->resize(933, 541);
        label_3 = new QLabel(score);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(220, 270, 191, 51));
        layoutWidget = new QWidget(score);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(150, 50, 581, 101));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName("label_2");

        horizontalLayout->addWidget(label_2);

        label = new QLabel(layoutWidget);
        label->setObjectName("label");

        horizontalLayout->addWidget(label);

        layoutWidget1 = new QWidget(score);
        layoutWidget1->setObjectName("layoutWidget1");
        layoutWidget1->setGeometry(QRect(110, 340, 611, 131));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        pushButton_3 = new QPushButton(layoutWidget1);
        pushButton_3->setObjectName("pushButton_3");

        horizontalLayout_2->addWidget(pushButton_3);

        pushButton_2 = new QPushButton(layoutWidget1);
        pushButton_2->setObjectName("pushButton_2");

        horizontalLayout_2->addWidget(pushButton_2);

        pushButton = new QPushButton(layoutWidget1);
        pushButton->setObjectName("pushButton");

        horizontalLayout_2->addWidget(pushButton);

        score_2 = new QLabel(score);
        score_2->setObjectName("score_2");
        score_2->setGeometry(QRect(460, 280, 91, 31));
        QFont font;
        font.setPointSize(12);
        score_2->setFont(font);

        retranslateUi(score);

        QMetaObject::connectSlotsByName(score);
    } // setupUi

    void retranslateUi(QDialog *score)
    {
        score->setWindowTitle(QCoreApplication::translate("score", "Dialog", nullptr));
        label_3->setText(QCoreApplication::translate("score", "Congratulations!!! You got ", nullptr));
        label_2->setText(QCoreApplication::translate("score", "TextLabel", nullptr));
        label->setText(QCoreApplication::translate("score", "TextLabel", nullptr));
        pushButton_3->setText(QCoreApplication::translate("score", "Home", nullptr));
        pushButton_2->setText(QCoreApplication::translate("score", "Check Answers", nullptr));
        pushButton->setText(QCoreApplication::translate("score", "Close", nullptr));
        score_2->setText(QCoreApplication::translate("score", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class score: public Ui_score {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SCORE_H
