#ifndef WELCOME_H
#define WELCOME_H
#include "examsphere.h"

#include <QDialog>

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
};

#endif // WELCOME_H
