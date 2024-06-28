#include "student10login.h"
#include "ui_student10login.h"

student10login::student10login(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::student10login)
{
    ui->setupUi(this);
}

student10login::~student10login()
{
    delete ui;
}

