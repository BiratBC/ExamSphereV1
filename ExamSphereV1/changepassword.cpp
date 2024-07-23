#include "changepassword.h"
#include "ui_changepassword.h"
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QMessageBox>
#include "student.h"

Student *studentDashboard4;


changePassword::changePassword(const QString &id, const QString &fname, const QString &lname, const QString &email,const QDate &dob, const QString &batch,
                               const QString &grade, QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::changePassword)
    ,studentId(id)
    , studentFName(fname)
    , studentLName(lname)
    ,studentEmail(email)
    ,studentDOB(dob)
    ,studentBatch(batch)
    , studentGrade(grade)
{
    ui->setupUi(this);
}

changePassword::~changePassword()
{
    delete ui;
}

void changePassword::on_changePasswordButton_clicked() {
    QString userId = ui->idLineEdit->text();
    QString currentPassword = ui->currentPasswordLineEdit->text();
    QString newPassword = ui->newPasswordLineEdit->text();
    QString confirmNewPassword = ui->confirmPassword->text();

    if (newPassword != confirmNewPassword) {
        QMessageBox::warning(this, "Password Mismatch", "New password and confirmation do not match!");
        return;
    }

    if (verifyCredentials(userId, currentPassword)) {
        if (updatePassword(userId, newPassword)) {
            QMessageBox::information(this, "Success", "Password changed successfully!");
        } else {
            QMessageBox::critical(this, "Error", "Failed to change the password!");
        }
    } else {
        QMessageBox::warning(this, "Invalid Credentials", "User ID or current password is incorrect!");
    }
}

bool changePassword::verifyCredentials(const QString &userId, const QString &currentPassword) {
    QSqlQuery query;
    query.prepare("SELECT password FROM students_data WHERE id = :id");
    query.bindValue(":id", userId);
    if (query.exec() && query.next()) {
        QString storedPassword = query.value(0).toString();
        return storedPassword == currentPassword;
    } else {
        return false;
    }
}

bool changePassword::updatePassword(const QString &userId, const QString &newPassword) {
    QSqlQuery query;
    query.prepare("UPDATE students_data SET password = :new_password WHERE id = :id");
    query.bindValue(":new_password", newPassword);
    query.bindValue(":id", userId);
    return query.exec();
}




void changePassword::on_pushButton_2_clicked()
{
    close();
    studentDashboard4 = new Student(studentId,studentFName,studentLName,studentEmail,studentDOB,studentBatch,studentGrade,this);
    studentDashboard4->showMaximized();
}

