#ifndef STUDENT_H
#define STUDENT_H

#include <QDialog>
#include "class8.h"
#include "class9.h"
#include "class10.h"
#include "qdatetime.h"
#include "changepassword.h"
#include <QString>


namespace Ui {
class Student;
}

class Student : public QDialog
{
    Q_OBJECT

public:
    Student(){}
    explicit Student(const QString &id, const QString &fname, const QString &lname, const QString &email,const QDate &dob, const QString &batch,
                     const QString &grade, QWidget *parent = nullptr);
    explicit Student(QWidget *parent = nullptr);
    ~Student();

private slots:


    void on_pushButton_clicked();

    void on_pushButton_4_clicked();

    void on_changePassword_clicked();

    void on_prevResult_clicked();

private:
    Ui::Student *ui;
    QString studentId;
    QString studentFName;
    QString studentLName;
    QString studentEmail;
    QDate studentDOB;
    QString studentBatch;
    QString studentGrade;
    class8 *class8Window;
    class9 *class9Window;
    class10 *class10Window;

    changePassword *passwordWindow;

};

#endif // STUDENT_H
