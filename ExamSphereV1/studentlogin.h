#ifndef STUDENTLOGIN_H
#define STUDENTLOGIN_H

#include <QMainWindow>
#include <QDebug>
#include <QtSql>
#include <QFileInfo>
#include <QSqlDatabase>
#include "studentregistration.h"
#include "student.h"




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

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::ExamSphere *ui;
    //class8 *class8Window;
    studentRegistration *registrationWindow;
    Student *studentDashboard;

};
#endif // STUDENTLOGIN_H
