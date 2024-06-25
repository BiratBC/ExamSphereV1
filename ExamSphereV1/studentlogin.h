#ifndef STUDENTLOGIN_H
#define STUDENTLOGIN_H

#include <QMainWindow>
#include "student.h"
#include <QDebug>
#include <QtSql>
#include <QFileInfo>
#include <QSqlDatabase>


#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class ExamSphere;
}
QT_END_NAMESPACE

class ExamSphere : public QMainWindow
{
    Q_OBJECT

public:
    ExamSphere(QWidget *parent = nullptr);
    ~ExamSphere();

private slots:
    void on_pushButton_clicked();

private:
    Ui::ExamSphere *ui;
    Student *studentWindow;
};
#endif // STUDENTLOGIN_H
