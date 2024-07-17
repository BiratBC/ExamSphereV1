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
    ui->tableWidget->setColumnWidth(0, 200);
    ui->tableWidget->setColumnWidth(1, 200);
    ui->tableWidget->setColumnWidth(2, 200);
    ui->tableWidget->setColumnWidth(3, 200);
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

    QSqlDatabase dab = QSqlDatabase::database();
    if (!dab.isOpen()) {
        QMessageBox::warning(this, "Database Error", "Failed to open the database.");
        return;
    }

    qDebug() << "Database connection is open:" << dab.isOpen();

    QString id = ui->lineEdit->text();
    QSqlQuery query_insert_data(dab);
    query_insert_data.prepare("INSERT INTO exam_data (id, first_name, last_name, grade) SELECT id, first_name, last_name, grade FROM students_data WHERE id = :id");
    query_insert_data.bindValue(":id", id);

    if (!query_insert_data.exec()) {
        QMessageBox::warning(this, "Invalid", "Invalid ID or Not Registered: ");
        dab.rollback();
    }
    else
    {
        QMessageBox::information(this,"Success","Record of id "+ui->lineEdit->text()+" added successfully!!!");
    }

}


void addStudents::on_pushButton_2_clicked()
{
    QSqlDatabase dab = QSqlDatabase::database();
    QSqlDatabase::database().transaction();
    //DELETE
    QSqlQuery Query_Delete_Data(dab);
    Query_Delete_Data.prepare("DELETE FROM exam_data WHERE id=" + ui->lineEdit->text() + "");
    Query_Delete_Data.exec();
    if(!Query_Delete_Data.exec())
    {
        QMessageBox::warning(this, "Invalid", "Not deleted ");
        dab.rollback();

    }
    else
    {
        QMessageBox::information(this,"Success","Record of id "+ui->lineEdit->text()+" deleted successfully!!!");
    }
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
        QSqlDatabase dab = QSqlDatabase::database();
        QSqlQuery Query_Get_Data(dab);
        //DISPLAY
        Query_Get_Data.prepare("SELECT id,first_name,last_name,grade from exam_data WHERE grade = '8'");
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
        QSqlDatabase dab = QSqlDatabase::database();
        QSqlQuery Query_Get_Data(dab);
        Query_Get_Data.prepare("SELECT id,first_name,last_name,grade from exam_data WHERE grade = '9'");
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
        QSqlDatabase dab = QSqlDatabase::database();
        QSqlQuery Query_Get_Data(dab);
        Query_Get_Data.prepare("SELECT id,first_name,last_name,grade from exam_data WHERE grade = '10'");
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

