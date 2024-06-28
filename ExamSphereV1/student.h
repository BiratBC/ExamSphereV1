#ifndef STUDENT_H
#define STUDENT_H

#include <QDialog>
#include "class8.h"


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
    class8 *class8Window;
   //ExamSphere *login8Window;
    //student9login *class9Window;
   //student10login *class10Window;
};

#endif // STUDENT_H
