#include "student.h"
#include "ui_student.h"
#include <QPixmap>
#include <QMessageBox>
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlError>
#include <QtSql/QSqlQuery>

//Welcome *welcomeWindow;

Student::Student(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Student)
{
    ui->setupUi(this);
    QPixmap logo(":/rec/assets/logo.png");
    ui->logo4->setPixmap(logo.scaled(200,200,Qt::KeepAspectRatio));
    QMessageBox message;
    message.resize(800,800);
    message.setStyleSheet(
        "QMessageBox {"
        "    background-color: #f0f0f0;"
        "    color: #333333;"
        "}"
        );
    QSqlDatabase dab = QSqlDatabase::addDatabase("QMYSQL");
    dab.setHostName("localhost");
    dab.setUserName("root");
    dab.setPassword("");
    dab.setDatabaseName("examsphere");
    dab.setPort(3377);
    dab.open();
    if (!dab.open()) {
        message.setWindowTitle("Database Error");
        message.setText("Failed to connect to database: " + dab.lastError().text());
        message.exec();
    }
}

Student::~Student()
{
    delete ui;
}


void Student::on_pushButton_clicked()
{
        //Verification if student is added to the exam or not
        close();

        class8Window = new class8();
        class8Window->showMaximized();
       // login8Window = new ExamSphere();
        //login8Window->showMaximized();
}

