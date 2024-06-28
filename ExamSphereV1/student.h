#ifndef STUDENT_H
#define STUDENT_H

#include <QDialog>
#include "student8login.h"
#include "student9login.h"
#include "student10login.h"

namespace Ui {
class Student;
}

class Student : public QDialog
{
    Q_OBJECT

public:
    explicit Student(QWidget *parent = nullptr);
    ~Student();

private slots:


    void on_pushButton_clicked();

private:
    Ui::Student *ui;
   ExamSphere *login8Window;
    student9login *class9Window;
   student10login *class10Window;
};

#endif // STUDENT_H
