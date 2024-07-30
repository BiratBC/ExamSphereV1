#include "pastresult.h"
#include "ui_pastresult.h"
#include <QMessageBox>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QDebug>
#include <QSqlError>
#include "student.h"

Student *studentWindow5;

PastResult::PastResult(const QString &id, const QString &fname, const QString &lname, const QString &email,const QDate &dob, const QString &batch,
                       const QString &grade, QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::PastResult)
    ,studentId(id)
    ,studentFName(fname)
    ,studentLName(lname)
    ,studentEmail(email)
    ,studentDOB(dob)
    ,studentBatch(batch)
    ,studentGrade(grade)
{
    ui->setupUi(this);
    this->setWindowTitle("Check Result");
    ui->subject->addItem("Maths");
    ui->subject->addItem("Computer");
    ui->subject->addItem("Science");

    ui->tableWidget->setColumnWidth(0, 200);
    ui->tableWidget->setColumnWidth(1, 200);
    ui->tableWidget->setColumnWidth(2, 200);
    ui->tableWidget->setColumnWidth(3, 200);
    ui->tableWidget->setColumnWidth(4, 200);
    ui->tableWidget->setColumnWidth(5, 200);
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

PastResult::~PastResult()
{
    delete ui;
}
void PastResult::on_checkResult_clicked()
{

    int b = ui->subject->currentIndex();
    QString gradeTable = studentGrade;
    QString idTable = studentId;
    if(b == 0)
        {
            QSqlDatabase dab = QSqlDatabase::database();
            QSqlQuery Query_Get_Data(dab);
            Query_Get_Data.prepare("SELECT * FROM results WHERE grade = :grade AND subject = 'Maths' AND id = :id");
            Query_Get_Data.bindValue(":grade", gradeTable);
            Query_Get_Data.bindValue(":id", idTable);

            if(Query_Get_Data.exec())
            {
                int RowNum = 0;
                ui->tableWidget->setRowCount(Query_Get_Data.size());
                while(Query_Get_Data.next())
                {
                    ui->tableWidget->setItem(RowNum,0,new QTableWidgetItem(QString(Query_Get_Data.value("exam_type").toString())));
                    ui->tableWidget->setItem(RowNum,1,new QTableWidgetItem(QString(Query_Get_Data.value("id").toString())));
                    ui->tableWidget->setItem(RowNum,2,new QTableWidgetItem(QString(Query_Get_Data.value("grade").toString())));
                    ui->tableWidget->setItem(RowNum,3,new QTableWidgetItem(QString(Query_Get_Data.value("subject").toString())));
                    ui->tableWidget->setItem(RowNum,3,new QTableWidgetItem(QString(Query_Get_Data.value("total_marks").toString())));
                    ui->tableWidget->setItem(RowNum,3,new QTableWidgetItem(QString(Query_Get_Data.value("obtained_marks").toString())));
                    RowNum = RowNum +1;
                    //qDebug() <<Query_Get_Data.value("id").toString();
                }
            }
        }
    else if(b == 1)
        {
            QSqlDatabase dab = QSqlDatabase::database();
            QSqlQuery Query_Get_Data(dab);
            Query_Get_Data.prepare("SELECT * FROM results WHERE grade = :grade AND subject = 'Computer' AND id = :id");
            Query_Get_Data.bindValue(":grade", gradeTable);
            Query_Get_Data.bindValue(":id", idTable);

            if(Query_Get_Data.exec())
            {
                int RowNum = 0;
                ui->tableWidget->setRowCount(Query_Get_Data.size());
                while(Query_Get_Data.next())
                {
                    ui->tableWidget->setItem(RowNum,0,new QTableWidgetItem(QString(Query_Get_Data.value("exam_type").toString())));
                    ui->tableWidget->setItem(RowNum,1,new QTableWidgetItem(QString(Query_Get_Data.value("id").toString())));
                    ui->tableWidget->setItem(RowNum,2,new QTableWidgetItem(QString(Query_Get_Data.value("grade").toString())));
                    ui->tableWidget->setItem(RowNum,3,new QTableWidgetItem(QString(Query_Get_Data.value("subject").toString())));
                    ui->tableWidget->setItem(RowNum,3,new QTableWidgetItem(QString(Query_Get_Data.value("total_marks").toString())));
                    ui->tableWidget->setItem(RowNum,3,new QTableWidgetItem(QString(Query_Get_Data.value("obtained_marks").toString())));
                    RowNum = RowNum +1;
                     //qDebug() <<Query_Get_Data.value("id").toString();
                }
            }
        }
    else
        {
            QSqlDatabase dab = QSqlDatabase::database();
            QSqlQuery Query_Get_Data(dab);
            Query_Get_Data.prepare("SELECT * FROM results WHERE grade = :grade AND subject = 'Science' AND id = :id");
            Query_Get_Data.bindValue(":grade", gradeTable);
            Query_Get_Data.bindValue(":id", idTable);

            if(Query_Get_Data.exec())
            {
                int RowNum = 0;
                ui->tableWidget->setRowCount(Query_Get_Data.size());
                while(Query_Get_Data.next())
                {
                    ui->tableWidget->setItem(RowNum,0,new QTableWidgetItem(QString(Query_Get_Data.value("exam_type").toString())));
                    ui->tableWidget->setItem(RowNum,1,new QTableWidgetItem(QString(Query_Get_Data.value("id").toString())));
                    ui->tableWidget->setItem(RowNum,2,new QTableWidgetItem(QString(Query_Get_Data.value("grade").toString())));
                    ui->tableWidget->setItem(RowNum,3,new QTableWidgetItem(QString(Query_Get_Data.value("subject").toString())));
                    ui->tableWidget->setItem(RowNum,3,new QTableWidgetItem(QString(Query_Get_Data.value("total_marks").toString())));
                    ui->tableWidget->setItem(RowNum,3,new QTableWidgetItem(QString(Query_Get_Data.value("obtained_marks").toString())));
                    RowNum = RowNum +1;
                    //qDebug() <<Query_Get_Data.value("id").toString();
                }
            }
        }

}

void PastResult::on_pushButton_clicked()
{
    close();
    studentWindow5 = new Student(studentId,studentFName,studentLName,studentEmail,studentDOB,studentBatch,studentGrade,this);
    studentWindow5->showMaximized();
}

