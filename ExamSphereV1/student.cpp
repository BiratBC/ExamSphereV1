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
}

Student::~Student()
{
    delete ui;
}

