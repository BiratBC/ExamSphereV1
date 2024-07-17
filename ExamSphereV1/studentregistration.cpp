#include "studentregistration.h"
#include "ui_studentregistration.h"
#include "studentlogin.h"
#include <QMessageBox>
#include <QtSql>
#include <QSqlDatabase>
#include <QComboBox>

ExamSphere *loginWindow;
QSqlDatabase dab;

int countDigits(long long n)
{
    int a = 0;
    while (n != 0)
    {
        a++;
        n = n / 10;
    }
    return a;
}

bool chkChar(QChar c)
{
    return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

bool chkEmail(QString email)
{
    if (!chkChar(email[0]))
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

studentRegistration::studentRegistration(QWidget *parent)
    : QDialog(parent), ui(new Ui::studentRegistration)
{
    ui->setupUi(this);
    ui->comboBox->addItem("Male");
    ui->comboBox->addItem("Female");
    ui->comboBox->addItem("Others");

    dab = QSqlDatabase::addDatabase("QMYSQL");
    dab.setHostName("localhost");
    dab.setUserName("root");
    dab.setPassword("");
    dab.setDatabaseName("examsphere");
    dab.setPort(3377);
    if (!dab.open())
    {
        QMessageBox::critical(this, "Database Error", "Failed to connect to database: " + dab.lastError().text());
    }
}

studentRegistration::~studentRegistration()
{
    delete ui;
}

void studentRegistration::on_pushButton_clicked()
{
    close();
    loginWindow = new ExamSphere();
    loginWindow->showMaximized();
}

void studentRegistration::on_pushButton_2_clicked()
{
    if (dab.open())
    {
        QString fN = ui->lineEdit_fN->text();
        QString mN = ui->lineEdit_mN->text();
        QString lN = ui->lineEdit_lN->text();
        QString id = ui->lineEdit_id->text();
        QString email = ui->lineEdit_email->text();
        long long pNum1 = ui->lineEdit_phn->text().toLongLong();
        QString pNum2 = ui->lineEdit_phn->text();
        QString batch = ui->lineEdit_batch->text();
        QString grade = ui->lineEdit_class->text();
        QString sex = ui->comboBox->currentText();
        QDate dob = ui->dateEdit_dob->date();
        QString password = ui->lineEdit_psd->text();
        QString cpassword = ui->lineEdit_Cpsd->text();

        QSqlQuery chku(dab), chke(dab), chkp(dab);
        chku.prepare("SELECT * FROM students_data WHERE id=:id");
        chku.bindValue(":id", id);
        chke.prepare("SELECT * FROM students_data WHERE user_email=:user_email");
        chke.bindValue(":user_email", email);
        chkp.prepare("SELECT * FROM students_data WHERE phone_number=:phone_number");
        chkp.bindValue(":phone_number", pNum1);

        chku.exec();
        chkp.exec();
        chke.exec();


        QString fn1 = ui->lineEdit_fN->text();
        QString ln1 = ui->lineEdit_lN->text();
        QString id1 = ui->lineEdit_id->text();
        QString grade1 = ui->lineEdit_class->text();

        chku.prepare("SELECT * FROM exam_data WHERE id=:id");
        chku.bindValue(":id", id1);
        chku.exec();

        if (password != cpassword)
        {
            QMessageBox::warning(this, "Error", "Password doesn't match. Please try again.");
        }
        else if (countDigits(pNum1) != 10)
        {
            QMessageBox::warning(this, "Error", "Phone number is not correct. Please try again.");
        }
        else if (fN == "\0" || lN == "\0" || id == "\0" || email == "\0" || pNum2 == "\0" || batch == "\0" || grade == "\0")
        {
            QMessageBox::warning(this, "Error", "Fields marked * are mandatory.");
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
        else if (!chkEmail(email))
        {
            QMessageBox::warning(this, "Error", "Invalid Email.");
        }
        else
        {
            QSqlQuery qry(dab);
            QSqlQuery qry2(dab);
            QSqlQuery qry3(dab);
            qry2.exec("CALL generate_unique_reg_number(@reg_number)");

            qry2.exec("SELECT @reg_number");
            if (qry2.next()) {
                QString reg_number = qry2.value(0).toString();

                // Prepare and execute the insert query with the generated registration number
                qry.prepare("INSERT INTO students_data(id, password, first_name, middle_name, last_name, user_email, date_of_birth, phone_number, batch, grade, sex, registration_num)"
                            "VALUES(:id, :password, :first_name, :middle_name, :last_name, :user_email, :date_of_birth, :phone_number, :batch, :grade, :sex, :reg_number)");
                qry.bindValue(":id", id);
                qry.bindValue(":password", password);
                qry.bindValue(":first_name", fN);
                qry.bindValue(":middle_name", mN);
                qry.bindValue(":last_name", lN);
                qry.bindValue(":user_email", email);
                qry.bindValue(":date_of_birth", dob);
                qry.bindValue(":phone_number", pNum1);
                qry.bindValue(":batch", batch);
                qry.bindValue(":grade", grade);
                qry.bindValue(":sex", sex);
                qry.bindValue(":reg_number", reg_number);


                qry3.prepare("INSERT INTO exam_data(id,first_name,last_name,grade)"
                                 "VALUES(:id, :first_name, :last_name, :grade)");
                qry3.bindValue(":id",id1);
                qry3.bindValue(":first_name",fn1);
                qry3.bindValue(":last_name",ln1);
                qry3.bindValue(":grade",grade1);

                        if (qry.exec() && qry3.exec())
                        {
                            QMessageBox::information(this, "Sign Up", "Signed up successfully.");
                            close();
                            loginWindow = new ExamSphere();
                            loginWindow->showMaximized();
                        }
                        else
                        {
                            QMessageBox::warning(this, "Sign Up", "Sign up failed.");
                            qDebug() << qry.lastError().text() << Qt::endl;
                        }

            }
            else
            {
                QMessageBox::warning(this, "Error", "Failed to generate registration number.");
            }
        }
    }
    else
    {
        QMessageBox::warning(this, "Error", "Database connection is not open.");
    }
    dab.close();
}

void studentRegistration::on_lineEdit_Cpsd_returnPressed()
{
    on_pushButton_2_clicked();
}

void studentRegistration::on_lineEdit_lN_returnPressed()
{
    on_pushButton_2_clicked();
}

void studentRegistration::on_lineEdit_mN_returnPressed()
{
    on_pushButton_2_clicked();
}

void studentRegistration::on_lineEdit_fN_returnPressed()
{
    on_pushButton_2_clicked();
}

void studentRegistration::on_lineEdit_id_returnPressed()
{
    on_pushButton_2_clicked();
}

void studentRegistration::on_lineEdit_email_returnPressed()
{
    on_pushButton_2_clicked();
}

void studentRegistration::on_lineEdit_phn_returnPressed()
{
    on_pushButton_2_clicked();
}

void studentRegistration::on_lineEdit_psd_returnPressed()
{
    on_pushButton_2_clicked();
}
