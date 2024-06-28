#include "student9login.h"
#include "ui_student9login.h"
#include <QMessageBox>
#include <QDebug>
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlError>
#include <QtSql/QSqlQuery>

student9login::student9login(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::student9login)
{
    ui->setupUi(this);
    //ui->error->hide();
    QPixmap logo(":/rec/assets/logo.png");
    ui->logo3->setPixmap(logo.scaled(200,200,Qt::KeepAspectRatio));

    QPixmap id(":/rec/assets/icons8-id-50.png");
    ui->idimg->setPixmap(id.scaled(40,40,Qt::KeepAspectRatio));

    QPixmap psd(":/rec/assets/icons8-password-50.png");
    ui->psdimg->setPixmap(psd.scaled(40,40,Qt::KeepAspectRatio));




    this->setWindowTitle("Student Login");
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

student9login::~student9login()
{
    delete ui;
}


