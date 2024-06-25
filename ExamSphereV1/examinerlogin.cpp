#include "examinerlogin.h"
#include "ui_examinerlogin.h"
#include "studentlogin.h"
#include <QMessageBox>

ExaminerLogin::ExaminerLogin(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::ExaminerLogin)
{
    ui->setupUi(this);

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
