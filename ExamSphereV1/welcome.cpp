#include "welcome.h"
#include "ui_welcome.h"
#include <QMessageBox>
#include <QPixmap>
#include <QComboBox>
#include <iostream>
using namespace std;

Welcome::Welcome(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Welcome)
{

    ui->setupUi(this);
    this->setWindowTitle("ExamSphere");
    combobox = new QComboBox(this);

    QPixmap logo(":/rec/assets/logo.png");
    ui->logo1->setPixmap(logo.scaled(200,200,Qt::KeepAspectRatio));
    ui->comboBox->addItem(QIcon(":/rec/assets/icons8-student-96.png"),"Student");
    ui->comboBox->addItem(QIcon(":/rec/assets/icons8-teacher-100.png"),"Examiner");



}



Welcome::~Welcome()
{
    delete ui;
}

void Welcome::on_pushGo_clicked()
{
   int x =  ui->comboBox->currentIndex();

    if(x == 0)
    {
    hide();
    examWindow = new ExamSphere();
    examWindow->showMaximized();
    }
    else
    {
    hide();
    examinerWindow = new ExaminerLogin();
    examinerWindow->showMaximized();
    }

}



