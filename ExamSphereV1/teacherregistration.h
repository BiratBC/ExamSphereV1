#ifndef TEACHERREGISTRATION_H
#define TEACHERREGISTRATION_H

#include <QDialog>
#include <QSqlDatabase>
#include <QSql>

namespace Ui {
class teacherRegistration;
}

class teacherRegistration : public QDialog
{
    Q_OBJECT

public:
    explicit teacherRegistration(QWidget *parent = nullptr);
    ~teacherRegistration();

private slots:
    void on_register_2_clicked();

    void on_login_clicked();

    void on_lineEdit_fn_returnPressed();

    void on_lineEdit_mn_returnPressed();

    void on_lineEdit_ln_returnPressed();

    void on_lineEdit_id_returnPressed();

    void on_lineEdit_email_returnPressed();

    void on_lineEdit_phn_returnPressed();

    void on_lineEdit_sub_returnPressed();

    void on_lineEdit_psd_returnPressed();

    void on_lineEdit_cpsd_returnPressed();

private:
    Ui::teacherRegistration *ui;
    QSqlDatabase dab2;
};

#endif // TEACHERREGISTRATION_H
