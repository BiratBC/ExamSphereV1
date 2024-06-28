#ifndef WELCOME_H
#define WELCOME_H
#include "studentlogin.h"
#include "examinerlogin.h"
#include <QDialog>
#include <student.h>

namespace Ui {
class Welcome;
}

class Welcome : public QDialog
{
    Q_OBJECT

public:
    explicit Welcome(QWidget *parent = nullptr);
    ~Welcome();

private slots:
    void on_pushGo_clicked();


private:
    Ui::Welcome *ui;
    ExamSphere *examWindow;
    ExaminerLogin *examinerWindow;
    QComboBox *combobox;
    Student *studentWindow;
};

#endif // WELCOME_H
