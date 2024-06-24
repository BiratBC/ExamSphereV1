#include "student.h"
#include "ui_student.h"
#include "examsphere.h"

Student::Student(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Student)
{
    ui->setupUi(this);
}

Student::~Student()
{
    delete ui;
}

void Student::on_pushButton_clicked()
{

}

