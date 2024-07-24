#ifndef ADDSTUDENTS_H
#define ADDSTUDENTS_H

#include <QDialog>
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlError>
#include <QtSql/QSqlQuery>
namespace Ui {//namespace for ui makes more readable.....
class addStudents;
}

class addStudents : public QDialog
{
    Q_OBJECT

public:
    explicit addStudents(QWidget *parent = nullptr);
    ~addStudents();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

    void on_createExam_clicked();

private:
    Ui::addStudents *ui;
    QSqlDatabase dab;
    QString filePath;
    addStudents *addStudentWindow;
};

#endif // ADDSTUDENTS_H
