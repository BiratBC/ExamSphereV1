#include "examsphere.h"
#include "ui_examsphere.h"
#include <QMessageBox>
#include <QDebug>
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlError>
#include <QtSql/QSqlQuery>

QString usernameg;
QString check;

ExamSphere::ExamSphere(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::ExamSphere)
{
    ui->setupUi(this);
    ui->error->hide();

    this->setWindowTitle("ExamSphere");
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

ExamSphere::~ExamSphere()
{
    delete ui;
}


void ExamSphere::on_pushButton_clicked()
{    QString username=ui->idLine->text();
    QString password=ui->passwordLine->text();
    QSqlQuery query_login(QSqlDatabase::database("Examsphere"));
    query_login.prepare(QString("SELECT * FROM info WHERE username=:username AND password=:password"));
    query_login.bindValue(":username",username);
    query_login.bindValue(":password",password);
    if(!query_login.exec())
    {
        QMessageBox::warning(this,"Login","Try Again.");
    }
    else
    {
        if(query_login.next())
        {
            QString usernamedb=query_login.value(0).toString();
            QString passworddb=query_login.value(1).toString();
            if(usernamedb==username && passworddb==password)
            {
                hide();
                    studentWindow = new Student();
                    studentWindow->showMaximized();

            }

        }
        else
            QMessageBox::warning(this,"Login","Username and password do not match.");
    }
}

