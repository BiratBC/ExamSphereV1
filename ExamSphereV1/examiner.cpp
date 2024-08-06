#include "examiner.h"
#include "ui_examiner.h"
#include "examinerlogin.h"
#include "checkresult.h"

CheckResult *resultWindow;

ExaminerLogin *examinerLoginWindow;

examiner::examiner(const QString &subject, QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::examiner)
    , sub(subject)
{
    ui->setupUi(this);
}

examiner::~examiner()
{
    delete ui;
}

void examiner::on_pushButton_clicked()
{
    close();
    resultWindow = new CheckResult("default",sub,this);
    resultWindow->showMaximized();
}


void examiner::on_pushButton_2_clicked()
{
    close();
    addWindow =  new addStudents();
    addWindow->showMaximized();
}


void examiner::on_pushButton_3_clicked()
{
    close();
    examinerLoginWindow = new ExaminerLogin();
    examinerLoginWindow->showMaximized();
}

