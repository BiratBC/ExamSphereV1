#include "student.h"
#include "ui_student.h"
#include <QPixmap>

//Welcome *welcomeWindow;

Student::Student(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Student)
{
    ui->setupUi(this);
    QPixmap logo(":/rec/assets/logo.png");
    ui->logo4->setPixmap(logo.scaled(200,200,Qt::KeepAspectRatio));
}

Student::~Student()
{
    delete ui;
}


void Student::on_pushButton_clicked()
{
        //Verification if student is added to the exam or not
        close();

        class8Window = new class8();
        class8Window->showMaximized();
       // login8Window = new ExamSphere();
        //login8Window->showMaximized();
}

