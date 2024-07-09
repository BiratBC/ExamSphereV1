#ifndef ADDSTUDENTS_H
#define ADDSTUDENTS_H

#include <QDialog>

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

private:
    Ui::addStudents *ui;
};

#endif // ADDSTUDENTS_H
