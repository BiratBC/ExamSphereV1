#include "checkresult.h"
#include "ui_checkresult.h"
#include <QMessageBox>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QDebug>
#include <QSqlError>

CheckResult::CheckResult(const QString &marks, QWidget* parent)
    : QDialog(parent)
    , ui(new Ui::CheckResult)
    , studentMarks(marks)
{
    ui->setupUi(this);
    this->setWindowTitle("Check Result");
    ui->grade->addItem("8");
    ui->grade->addItem("9");
    ui->grade->addItem("10");
    ui->subject->addItem("Maths");
    ui->subject->addItem("Computer");
    ui->subject->addItem("Science");

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

CheckResult::~CheckResult()
{
    delete ui;
}

void CheckResult::on_checkResult_clicked()
{
    int a = ui->grade->currentIndex();
    int b = ui->subject->currentIndex();
    QString id_ = ui->idLineEdit->text();
    if(a == 0)
    {
        if(b == 0)
        {
            QSqlDatabase dab = QSqlDatabase::database();
            QSqlQuery Query_Get_Data(dab);
            Query_Get_Data.prepare("SELECT * from results WHERE grade = '8' AND subject = 'Maths'");
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
                    // qDebug() <<Query_Get_Data.value("id").toString()
                }
            }
        }
        else if(b == 1)
        {
            QSqlDatabase dab = QSqlDatabase::database();
            QSqlQuery Query_Get_Data(dab);
            Query_Get_Data.prepare("SELECT * from results WHERE grade = '8' AND subject = 'Computer'");
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
                    // qDebug() <<Query_Get_Data.value("id").toString()
                }
            }
        }
        else
        {
            QSqlDatabase dab = QSqlDatabase::database();
            QSqlQuery Query_Get_Data(dab);
            Query_Get_Data.prepare("SELECT * from results WHERE grade = '8' AND subject = 'Science'");
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
                    // qDebug() <<Query_Get_Data.value("id").toString()
                }
            }
        }
    }
    else if(a == 1)
    {
        if(b == 0)
        {
            QSqlDatabase dab = QSqlDatabase::database();
            QSqlQuery Query_Get_Data(dab);
            Query_Get_Data.prepare("SELECT * from results WHERE grade = '8' AND subject = 'Maths'");
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
                    // qDebug() <<Query_Get_Data.value("id").toString()
                }
            }
        }
        else if(b == 1)
        {
            QSqlDatabase dab = QSqlDatabase::database();
            QSqlQuery Query_Get_Data(dab);
            Query_Get_Data.prepare("SELECT * from results WHERE grade = '8' AND subject = 'Computer'");
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
                    // qDebug() <<Query_Get_Data.value("id").toString()
                }
            }
        }
        else
        {
            QSqlDatabase dab = QSqlDatabase::database();
            QSqlQuery Query_Get_Data(dab);
            Query_Get_Data.prepare("SELECT * from results WHERE grade = '8' AND subject = 'Science'");
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
                    // qDebug() <<Query_Get_Data.value("id").toString()
                }
            }
        }
    }
    else
        {
            if(b == 0)
            {
                QSqlDatabase dab = QSqlDatabase::database();
                QSqlQuery Query_Get_Data(dab);
                Query_Get_Data.prepare("SELECT * from results WHERE grade = '8' AND subject = 'Maths'");
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
                        // qDebug() <<Query_Get_Data.value("id").toString()
                    }
                }
            }
            else if(b == 1)
            {
                QSqlDatabase dab = QSqlDatabase::database();
                QSqlQuery Query_Get_Data(dab);
                Query_Get_Data.prepare("SELECT * from results WHERE grade = '8' AND subject = 'Computer'");
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
                        // qDebug() <<Query_Get_Data.value("id").toString()
                    }
                }
            }
            else
            {
                QSqlDatabase dab = QSqlDatabase::database();
                QSqlQuery Query_Get_Data(dab);
                Query_Get_Data.prepare("SELECT * from results WHERE grade = '8' AND subject = 'Science'");
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
                        // qDebug() <<Query_Get_Data.value("id").toString()
                    }
                }
            }
        }

}

