#include "examinerlogin.h"
#include "ui_examinerlogin.h"
#include <QPixmap>
#include <QMessageBox>
#include <QDebug>
#include <QtSql>
#include <QSqlDatabase>
#include "addstudents.h"
#include "welcome.h"

Welcome *welcomeWindow2;


ExaminerLogin::ExaminerLogin(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::ExaminerLogin)
{
    ui->setupUi(this);
    QPixmap logo(":/rec/assets/logo.png");
    ui->logo2->setPixmap(logo.scaled(200,200,Qt::KeepAspectRatio));

    this->setWindowTitle("Examiner Login");
    QSqlDatabase dab = QSqlDatabase::addDatabase("QMYSQL");
    dab.setHostName("localhost");
    dab.setUserName("root");
    dab.setPassword("");
    dab.setDatabaseName("examsphere");
    dab.setPort(3377);
    dab.open();
    if (!dab.open()) {
        QMessageBox::critical(this, "Database Error", "Failed to connect to database: " + dab.lastError().text());
    }
}

ExaminerLogin::~ExaminerLogin()
{
    delete ui;
}

void ExaminerLogin::on_pushButton_clicked()
{
    QMessageBox message;
    message.setWindowTitle("Error");
    message.resize(800,800);
    message.setText("Id and Password is not correct!!!");
    message.setStyleSheet(
        "QMessageBox {"
        "    background-color: #f0f0f0;"
        "    color: #333333;"
        "}"
        );
    QString id=ui->lineID->text();
    QString password=ui->linePassword->text();
    QSqlQuery query_login(QSqlDatabase::database("Examsphere"));
    query_login.prepare(QString("SELECT teacher_id, password, subject_code FROM teacher_data WHERE teacher_id=:teacher_id AND password=:password"));
    query_login.bindValue(":teacher_id",id);
    query_login.bindValue(":password",password);
    qDebug() << "Query error:" << query_login.lastError().text();
    if(!query_login.exec())
    {
        QMessageBox::warning(this,"Login","Try Again.");
    }
    else
    {
        if(query_login.next())
        {
            QString idd=query_login.value("teacher_id").toString();
            QString passwordd=query_login.value("password").toString();
            QString subjectdb=query_login.value("subject_code").toString();
            if(idd==id && passwordd==password)
            {
                close();
                examinerWindow = new examiner(subjectdb);
                examinerWindow->showMaximized();

            }

        }
        else
            //QMessageBox::warning(this,"Login","Username and password do not match.");
            message.exec();


        // ui->statusbar->showMessage("Username and Password is not correct!!!");
    }
}


void ExaminerLogin::on_register_2_clicked()
{
    close();
    signup = new teacherRegistration();
    signup->showMaximized();
}


void ExaminerLogin::on_pushButton_2_clicked()
{
    close();
    welcomeWindow2 = new Welcome();
    welcomeWindow2->showMaximized();
}

