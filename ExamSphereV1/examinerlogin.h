#ifndef EXAMINERLOGIN_H
#define EXAMINERLOGIN_H

#include <QDialog>

namespace Ui {
class ExaminerLogin;
}

class ExaminerLogin : public QDialog
{
    Q_OBJECT

public:
    explicit ExaminerLogin(QWidget *parent = nullptr);
    ~ExaminerLogin();

private:
    Ui::ExaminerLogin *ui;
};

#endif // EXAMINERLOGIN_H
