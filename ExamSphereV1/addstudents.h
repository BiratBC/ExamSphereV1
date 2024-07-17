#ifndef ADDSTUDENTS_H
#define ADDSTUDENTS_H

#include <QDialog>
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlError>
#include <QtSql/QSqlQuery>
namespace Ui {
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

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

private:
    Ui::addStudents *ui;
    QSqlDatabase dab;
};

#endif // ADDSTUDENTS_H
