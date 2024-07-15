#include "addstudents.h"
#include "ui_addstudents.h"
#include <QComboBox>
#include <QMessageBox>
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlError>
#include <QtSql/QSqlQuery>


addStudents::addStudents(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::addStudents)
{
    ui->setupUi(this);
    this->setWindowTitle("Add Students");
    ui->comboBox->addItem("8");
    ui->comboBox->addItem("9");
    ui->comboBox->addItem("10");
    QMessageBox messageIntro;
    messageIntro.resize(800,800);
    messageIntro.setStyleSheet(
        "QMessageBox {"
        "    background-color: #f0f0f0;"
        "    color: #333333;"
        "}"
        );

    this->setWindowTitle("Student Login");
    QSqlDatabase dab = QSqlDatabase::addDatabase("QMYSQL");
    dab.setHostName("localhost");
    dab.setUserName("root");
    dab.setPassword("");
    dab.setDatabaseName("examsphere");
    dab.setPort(3377);
    dab.open();
    if (!dab.open()) {
        messageIntro.setWindowTitle("Database Error");
        messageIntro.setText("Failed to connect to database: " + dab.lastError().text());
        messageIntro.exec();
    }
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


void addStudents::on_pushButton_4_clicked()
{
    int a = ui->comboBox->currentIndex();
    if(a == 1)
    {
        dab.open();
        QSqlQuery Query_Get_Data(dab);
//        Query_Get_Data("SELECT id from")
    }
}

