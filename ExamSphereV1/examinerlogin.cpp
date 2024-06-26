#include "examinerlogin.h"
#include "ui_examinerlogin.h"
#include "studentlogin.h"
#include <QPixmap>
#include <QMessageBox>

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
