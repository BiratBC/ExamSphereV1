#ifndef EXAMINER_H
#define EXAMINER_H

#include <QDialog>
#include "addstudents.h"


namespace Ui {
class examiner;
}

class examiner : public QDialog
{
    Q_OBJECT

public:
    explicit examiner(const QString &subject, QWidget *parent = nullptr);
    ~examiner();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::examiner *ui;
    addStudents *addWindow;
    QString sub;
};

#endif // EXAMINER_H
