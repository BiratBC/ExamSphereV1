#include "examinerlogin.h"
#include "ui_examinerlogin.h"

ExaminerLogin::ExaminerLogin(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::ExaminerLogin)
{
    ui->setupUi(this);
}

ExaminerLogin::~ExaminerLogin()
{
    delete ui;
}
