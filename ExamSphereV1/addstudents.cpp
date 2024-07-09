#include "addstudents.h"
#include "ui_addstudents.h"
#include <QComboBox>
#include <QMessageBox>

addStudents::addStudents(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::addStudents)
{
    ui->setupUi(this);
    this->setWindowTitle("Add Students");
    ui->comboBox->addItem("8");
    ui->comboBox->addItem("9");
    ui->comboBox->addItem("10");
}

addStudents::~addStudents()
{
    delete ui;
}

void addStudents::on_pushButton_clicked()
{

}


void addStudents::on_pushButton_2_clicked()
{

}


void addStudents::on_pushButton_3_clicked()
{
    QMessageBox msg;
    msg.setText("Exam started successfully!");
    msg.setStandardButtons(QMessageBox::Ok);
    msg.exec();
}

