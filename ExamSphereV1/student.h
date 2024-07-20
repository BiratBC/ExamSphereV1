#ifndef STUDENT_H
#define STUDENT_H

#include <QDialog>
#include "class8.h"
#include "qdatetime.h"

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

};

#endif // STUDENT_H
