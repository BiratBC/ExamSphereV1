#include "studentregistration.h"
#include "ui_studentregistration.h"
#include "student8login.h"
#include <QMessageBox>
#include <QtSql>
#include <QSqlDatabase>

ExamSphere *loginWindow;
int countDigits(long long n)
{
    int a=0;
    while(n!=0)
    {
        a++;
        n=n/10;
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

    int at =-1, dot =-1;

    for (int i = 0;i<email.length(); i++)
    {

        if (email[i] == '@') {

            at = i;
        }

        else if (email[i] == '.') {

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
    : QDialog(parent)
    , ui(new Ui::studentRegistration)
{
    ui->setupUi(this);
    QSqlDatabase dab = QSqlDatabase::addDatabase("QMYSQL");
    dab.setHostName("localhost");
    dab.setUserName("root");
    dab.setPassword("");
    dab.setDatabaseName("examsphere");
    dab.setPort(3377);
    dab.open();
    if (!dab.open()) {
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
    if(dab.open())
    {
        QString fN = ui->lineEdit_fN->text();
        QString mN = ui->lineEdit_mN->text();
        QString lN = ui->lineEdit_lN->text();
        QString id = ui->lineEdit_id->text();
        QString email = ui->lineEdit_email->text();
        QString pNum = ui->lineEdit_phn->text();
        QString sex = ui->comboBox->currentText();
        QDate dob = ui->dateEdit_dob->date();
        QString password = ui->lineEdit_psd->text();
        QString cpassword = ui->lineEdit_Cpsd->text();
        QSqlQuery chku(dab),chke(dab),chkp(dab);
        chku.prepare("SELECT * FROM userbase WHERE username=:username");
        chku.bindValue(":username",id);
        chke.prepare("SELECT * FROM userbase WHERE user_email=:user_email");
        chke.bindValue(":user_email",email);
        chkp.prepare("SELECT * FROM userbase WHERE phone_number=:phone_number");
        chkp.bindValue(":phone_number",pNum);
        chku.exec();
        chkp.exec();
        chke.exec();
        if(password!=cpassword)
        {
            QMessageBox::warning(this,"Error","Password doesn't match. Please try again.");
        }
        else if(countDigits(pNum)!=10)
        {
            QMessageBox::warning(this,"Error","Phone number is not correct. Please try again.");

        }
        else if(fN=="\0" || lN=="\0" || id=="\0" || email=="\0" || pNum=="\0")
            QMessageBox::warning(this,"Error","Fields marked * are mandatory.");
        else if(!dob.isValid())
            QMessageBox::warning(this,"Error","Invalid Date.");
        else if(chku.next())
            QMessageBox::warning(this,"Error","Username already taken.");
        else if(chke.next())
            QMessageBox::warning(this,"Error","Email already used.");
        else if(chkp.next())
            QMessageBox::warning(this,"Error","Phone number already used.");
        else if(!chkEmail(email))
            QMessageBox::warning(this,"Error","Invalid Email.");
        else
        {
            QSqlQuery qry(dab);
            qry.prepare("INSERT INTO info(id,password,first_name,middle_name,last_name,user_email,date_of_birth,phone_number,sex)"
                        "VALUES(:id,:password,:first_name,:middle_name,:last_name,:user_email,:date_of_birth,:phone_number,:sex)");
            qry.bindValue(":username",id);
            qry.bindValue(":password",password);
            qry.bindValue(":first_name",fN);
            qry.bindValue(":middle_name",mN);
            qry.bindValue(":last_name",lN);
            qry.bindValue(":date_of_birth",dob);
            qry.bindValue(":user_email",email);
            qry.bindValue(":phone_number",pNum);
            qry.bindValue(":sex",sex);

            if(qry.exec())
            {
                QMessageBox::information(this,"Sign Up","Signed up successfully.");
                close();
                loginWindow= new ExamSphere();
                loginWindow->showMaximized();
                QSqlDatabase::removeDatabase("QMYSQL");
            }
            else
            {
                QMessageBox::warning(this,"Sign Up","Signed up failed.");
                qDebug() << qry.lastError().text()<<Qt::endl;
                QSqlDatabase::removeDatabase("QMYSQL");
            }
        }
        QSqlDatabase::removeDatabase("QMYSQL");
    }
    dab.close();


}

