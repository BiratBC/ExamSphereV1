#ifndef CHANGEPASSWORD_H
#define CHANGEPASSWORD_H

#include "qdatetime.h"
#include <QDialog>

namespace Ui {
class changePassword;
}

class changePassword : public QDialog
{
    Q_OBJECT

public:
    changePassword(){}
    explicit changePassword(const QString &id, const QString &fname, const QString &lname, const QString &email,
                            const QDate &dob, const QString &batch, const QString &currentPassword, QWidget *parent = nullptr);
    ~changePassword();

private slots:
    void on_changePasswordButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::changePassword *ui;
    bool verifyCredentials(const QString &userId, const QString &currentPassword);
    bool updatePassword(const QString &userId, const QString &newPassword);
    QString studentId;
    QString studentFName;
    QString studentLName;
    QString studentEmail;
    QDate studentDOB;
    QString studentBatch;
    QString studentGrade;
};

#endif // CHANGEPASSWORD_H
