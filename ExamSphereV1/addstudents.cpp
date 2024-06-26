#include "addstudents.h"
#include "ui_addstudents.h"

addStudents::addStudents(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::addStudents)
{
    ui->setupUi(this);
}

addStudents::~addStudents()
{
    delete ui;
}
