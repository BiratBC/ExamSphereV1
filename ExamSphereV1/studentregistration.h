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

    void on_lineEdit_Cpsd_returnPressed();

    void on_lineEdit_email_returnPressed();
    void on_lineEdit_mN_returnPressed();

    void on_lineEdit_fN_returnPressed();

    void on_lineEdit_lN_returnPressed();

    void on_lineEdit_id_returnPressed();

    void on_lineEdit_phn_returnPressed();

    void on_lineEdit_psd_returnPressed();

private:
    Ui::studentRegistration *ui;
    QSqlDatabase dab;
};

#endif // STUDENTREGISTRATION_H
