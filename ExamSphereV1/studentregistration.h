#ifndef STUDENTREGISTRATION_H
#define STUDENTREGISTRATION_H

#include <QDialog>
#include <QSqlDatabase>
#include <QSql>
namespace Ui {
class studentRegistration;
}

class studentRegistration : public QDialog
{
    Q_OBJECT

public:
    explicit studentRegistration(QWidget *parent = nullptr);
    ~studentRegistration();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::studentRegistration *ui;
    QSqlDatabase dab;
};

#endif // STUDENTREGISTRATION_H
