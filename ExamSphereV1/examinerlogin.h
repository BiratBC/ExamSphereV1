#ifndef EXAMINERLOGIN_H
#define EXAMINERLOGIN_H

#include <QDialog>
#include "addstudents.h"
#include <QSqlDatabase>

namespace Ui {
class ExaminerLogin;
}

class ExaminerLogin : public QDialog
{
    Q_OBJECT

public:
    explicit ExaminerLogin(QWidget *parent = nullptr);
    ~ExaminerLogin();

private slots:
    void on_pushButton_clicked();

    void on_register_2_clicked();

private:
    Ui::ExaminerLogin *ui;
    QSqlDatabase dab;
   // ExaminerLogin *examinerWindow;
    addStudents *addWindow;
};

#endif // EXAMINERLOGIN_H
