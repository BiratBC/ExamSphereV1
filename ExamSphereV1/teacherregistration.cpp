#include "teacherregistration.h"
#include "ui_teacherregistration.h"
#include "examinerlogin.h"
#include <QMessageBox>
#include <QtSql>
#include <QSqlDatabase>
#include <QComboBox>

ExaminerLogin *examinerlogin;
QSqlDatabase dab2;

int countDigits2(long long n)
{
    int a = 0;
    while (n != 0)
    {
        a++;
        n = n / 10;
    }
    return a;
}

bool chkChar2(QChar c)
{
    return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

bool chkEmail2(QString email)
{
    if (!chkChar2(email[0]))
    {
        return 0;
    }

    int at = -1, dot = -1;

    for (int i = 0; i < email.length(); i++)
    {
        if (email[i] == '@')
        {
            at = i;
        }
        else if (email[i] == '.')
        {
            dot = i;
        }
    }

    if (at == -1 || dot == -1)
        return 0;

    if (at > dot)
        return 0;

    return !(dot >= (email.length() - 1));
}


teacherRegistration::teacherRegistration(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::teacherRegistration)
{
    ui->setupUi(this);
    ui->comboBox->addItem("Male");
    ui->comboBox->addItem("Female");
    ui->comboBox->addItem("Others");

    dab2 = QSqlDatabase::addDatabase("QMYSQL");
    dab2.setHostName("localhost");
    dab2.setUserName("root");
    dab2.setPassword("");
    dab2.setDatabaseName("examsphere");
    dab2.setPort(3377);
    if (!dab2.open())
    {
        QMessageBox::critical(this, "Database Error", "Failed to connect to database: " + dab.lastError().text());
    }
}

teacherRegistration::~teacherRegistration()
{
    delete ui;
}

void teacherRegistration::on_register_2_clicked()
{
    if (dab2.open())
    {
        QString fN = ui->lineEdit_fn->text();
        QString mN = ui->lineEdit_mn->text();
        QString lN = ui->lineEdit_ln->text();
        QString id = ui->lineEdit_id->text();
        QString email = ui->lineEdit_email->text();
        long long pNum1 = ui->lineEdit_phn->text().toLongLong();
        QString pNum2 = ui->lineEdit_phn->text();
        QString chk1 = ui->checkBox_8->text();
        QString chk2 = ui->checkBox_9->text();
        QString chk3 = ui->checkBox_10->text();
        QString sub = ui->lineEdit_sub->text();
        QString sex = ui->comboBox->currentText();
        QDate dob = ui->dateEdit_dob->date();
        QString password = ui->lineEdit_psd->text();
        QString cpassword = ui->lineEdit_cpsd->text();

        QSqlQuery chku(dab2), chke(dab2), chkp(dab2);
        chku.prepare("SELECT * FROM teacher_Data WHERE teacher_id=:teacher_id");
        chku.bindValue(":teacher_id", id);
        chke.prepare("SELECT * FROM teacher_Data WHERE email=:email");
        chke.bindValue(":email", email);
        chkp.prepare("SELECT * FROM teacher_Data WHERE phone_number=:phone_number");
        chkp.bindValue(":phone_number", pNum1);

        chku.exec();
        chkp.exec();
        chke.exec();

        if (password != cpassword)
        {
            QMessageBox::warning(this, "Error", "Password doesn't match. Please try again.");
        }
        else if (countDigits2(pNum1) != 10)
        {
            QMessageBox::warning(this, "Error", "Phone number is not correct. Please try again.");
        }
        else if (fN == "\0" || lN == "\0" || id == "\0" || email == "\0" || pNum2 == "\0")
        {
            QMessageBox::warning(this, "Error", "Fields marked * are mandatory.");
        }else if(chk1 == "\0" && chk2 == "\0" && chk3 == "\0")
        {
            QMessageBox::warning(this,"Error","Choose the grade that you teach");
        }
        else if (!dob.isValid())
        {
            QMessageBox::warning(this, "Error", "Invalid Date.");
        }
        else if (chku.next())
        {
            QMessageBox::warning(this, "Error", "Invalid ID or already registered");
        }
        else if (chke.next())
        {
            QMessageBox::warning(this, "Error", "Email already used.");
        }
        else if (chkp.next())
        {
            QMessageBox::warning(this, "Error", "Phone number already used.");
        }
        else if (!chkEmail2(email))
        {
            QMessageBox::warning(this, "Error", "Invalid Email.");
        }
        else
        {
            QSqlQuery qry(dab2);
            qry.prepare("INSERT INTO teacher_data(teacher_id, password, first_name, middle_name, last_name, email, date_of_birth, phone_number, subject_code, sex)"
                        "VALUES(:teacher_id, :password, :first_name, :middle_name, :last_name, :email, :date_of_birth, :phone_number, :subject_code, :sex)");
            qry.bindValue(":teacher_id", id);
            qry.bindValue(":password", password);
            qry.bindValue(":first_name", fN);
            qry.bindValue(":middle_name", mN);
            qry.bindValue(":last_name", lN);
            qry.bindValue(":user_email", email);
            qry.bindValue(":date_of_birth", dob);
            qry.bindValue(":phone_number", pNum1);
            qry.bindValue(":subject_code",sub);
            qry.bindValue(":sex", sex);

            qry.prepare("INSERT INTO teacher_id, class_code"
                        "VALUES(:teacher_id, :class_code)");


            if (qry.exec())
            {
                QMessageBox::information(this, "Sign Up", "Signed up successfully.");
                close();
                examinerlogin = new ExaminerLogin();
                examinerlogin->showMaximized();
            }
            else
            {
                QMessageBox::warning(this, "Sign Up", "Sign up failed.");
                qDebug() << qry.lastError().text() << Qt::endl;
            }
        }
    }
    else
    {
        QMessageBox::warning(this, "Error", "Database connection is not open.");
    }
    dab2.close();

}


void teacherRegistration::on_login_clicked()
{
    close();
    examinerlogin = new ExaminerLogin();
    examinerlogin->showMaximized();
}


void teacherRegistration::on_lineEdit_fn_returnPressed()
{
    on_register_2_clicked();
}


void teacherRegistration::on_lineEdit_mn_returnPressed()
{
    on_register_2_clicked();
}


void teacherRegistration::on_lineEdit_ln_returnPressed()
{
    on_register_2_clicked();
}


void teacherRegistration::on_lineEdit_id_returnPressed()
{
    on_register_2_clicked();
}


void teacherRegistration::on_lineEdit_email_returnPressed()
{
    on_register_2_clicked();
}


void teacherRegistration::on_lineEdit_phn_returnPressed()
{
    on_register_2_clicked();
}


void teacherRegistration::on_lineEdit_sub_returnPressed()
{
    on_register_2_clicked();
}


void teacherRegistration::on_lineEdit_psd_returnPressed()
{
    on_register_2_clicked();
}


void teacherRegistration::on_lineEdit_cpsd_returnPressed()
{
    on_register_2_clicked();
}

