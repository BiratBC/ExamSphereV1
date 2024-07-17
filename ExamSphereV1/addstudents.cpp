#include "addstudents.h"
#include "ui_addstudents.h"
#include <QComboBox>
#include <QMessageBox>
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlError>
#include <QtSql/QSqlQuery>
#include "examiner.h"
#include <QString>

examiner *examinerWindow2;

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
    dab.open();
    QSqlDatabase::database().transaction();
    QSqlQuery Query_Delete_Data(dab);
    Query_Delete_Data.prepare("DELETE FROM students_data WHERE id=" + ui->lineEdit->text() + "");
    Query_Delete_Data.exec();
    QSqlDatabase::database().commit();
   // dab.close();
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
    if(a == 0)
    {
        dab.open();
        QSqlQuery Query_Get_Data(dab);
        Query_Get_Data.prepare("SELECT id,first_name,last_name,grade from students_data WHERE grade = '8'");
        if(Query_Get_Data.exec())
        {
            int RowNum = 0;
            ui->tableWidget->setRowCount(Query_Get_Data.size());
            while(Query_Get_Data.next())
            {
                ui->tableWidget->setItem(RowNum,0,new QTableWidgetItem(QString(Query_Get_Data.value("id").toString())));
                ui->tableWidget->setItem(RowNum,1,new QTableWidgetItem(QString(Query_Get_Data.value("first_name").toString())));
                ui->tableWidget->setItem(RowNum,2,new QTableWidgetItem(QString(Query_Get_Data.value("last_name").toString())));
                ui->tableWidget->setItem(RowNum,3,new QTableWidgetItem(QString(Query_Get_Data.value("grade").toString())));
                RowNum = RowNum +1;
                // qDebug() <<Query_Get_Data.value("id").toString()
            }
        }
    }
    else if (a == 1)
    {
        dab.open();
        QSqlQuery Query_Get_Data(dab);
        Query_Get_Data.prepare("SELECT id,first_name,last_name,grade from students_data WHERE grade = '9'");
        if(Query_Get_Data.exec())
        {
            int RowNum = 0;
            ui->tableWidget->setRowCount(Query_Get_Data.size());
            while(Query_Get_Data.next())
            {
                ui->tableWidget->setItem(RowNum,0,new QTableWidgetItem(QString(Query_Get_Data.value("id").toString())));
                ui->tableWidget->setItem(RowNum,1,new QTableWidgetItem(QString(Query_Get_Data.value("first_name").toString())));
                ui->tableWidget->setItem(RowNum,2,new QTableWidgetItem(QString(Query_Get_Data.value("last_name").toString())));
                ui->tableWidget->setItem(RowNum,3,new QTableWidgetItem(QString(Query_Get_Data.value("grade").toString())));
                RowNum = RowNum +1;
                // qDebug() <<Query_Get_Data.value("id").toString()
            }
        }
    }
    else
    {
        dab.open();
        QSqlQuery Query_Get_Data(dab);
        Query_Get_Data.prepare("SELECT id,first_name,last_name,grade from students_data WHERE grade = '10'");
        if(Query_Get_Data.exec())
        {
            int RowNum = 0;
            ui->tableWidget->setRowCount(Query_Get_Data.size());
            while(Query_Get_Data.next())
            {
                ui->tableWidget->setItem(RowNum,0,new QTableWidgetItem(QString(Query_Get_Data.value("id").toString())));
                ui->tableWidget->setItem(RowNum,1,new QTableWidgetItem(QString(Query_Get_Data.value("first_name").toString())));
                ui->tableWidget->setItem(RowNum,2,new QTableWidgetItem(QString(Query_Get_Data.value("last_name").toString())));
                ui->tableWidget->setItem(RowNum,3,new QTableWidgetItem(QString(Query_Get_Data.value("grade").toString())));
                RowNum = RowNum +1;
                // qDebug() <<Query_Get_Data.value("id").toString()
            }
        }
    }
}


void addStudents::on_pushButton_5_clicked()
{
    close();
    examinerWindow2 =  new examiner();
    examinerWindow2->showMaximized();
}

