#include "student.h"
#include "ui_student.h"
#include <QPixmap>

Student::Student(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Student)
{
    ui->setupUi(this);
    QPixmap logo(":/rec/assets/logo.png");
    ui->logo4->setPixmap(logo.scaled(200,200,Qt::KeepAspectRatio));
    ui->grade->addItem("8");
    ui->grade->addItem("9");
    ui->grade->addItem("10");
}

Student::~Student()
{
    delete ui;
}


void Student::on_pushButton_clicked()
{
    int x =  ui->grade->currentIndex();

    if(x == 0)
    {
        close();
        class8Window = new class8();
        class8Window->showMaximized();
    }
    else if(x == 1)
    {
        close();
        //examinerWindow = new ExaminerLogin();
        //examinerWindow->showMaximized();
    }
    else
    {

    }
}

