#include "student.h"
#include "ui_student.h"
#include <QPixmap>
#include <QMessageBox>
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlError>
#include <QtSql/QSqlQuery>
#include <QDialog>
#include <studentlogin.h>

ExamSphere *logoutWindow;

//Welcome *welcomeWindow;

Student::Student(const QString &id, const QString &fname, const QString &lname, const QString &email, const QDate &dob,
                 const QString &batch, const QString &grade, QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Student)
    , studentId(id)
    , studentFName(fname)
    , studentLName(lname)
   ,studentEmail(email)
    ,studentDOB(dob)
    ,studentBatch(batch)
    , studentGrade(grade)
{
    ui->setupUi(this);
    QPixmap logo(":/rec/assets/logo.png");
    ui->logo4->setPixmap(logo.scaled(200,200,Qt::KeepAspectRatio));
    QMessageBox message;
    message.resize(800,800);
    message.setStyleSheet(
        "QMessageBox {"
        "    background-color: #f0f0f0;"
        "    color: #333333;"
        "}"
        );

    ui->idLabel->setText(studentId);
    ui->FnameLabel->setText(studentFName);
    ui->LnameLabel->setText(studentLName);
    ui->emailLabel->setText(studentEmail);
    ui->dobLabel->setText(studentDOB.toString("yyyy-MM-dd"));
    ui->batchLabel->setText(studentBatch);
    ui->gradeLabel->setText(studentGrade);

    QSqlDatabase dab = QSqlDatabase::addDatabase("QMYSQL");
    dab.setHostName("localhost");
    dab.setUserName("root");
    dab.setPassword("");
    dab.setDatabaseName("examsphere");
    dab.setPort(3377);
    dab.open();
    if (!dab.open()) {
        message.setWindowTitle("Database Error");
        message.setText("Failed to connect to database: " + dab.lastError().text());
        message.exec();
    }
}

Student::~Student()
{
    delete ui;
}


void Student::on_pushButton_clicked()
{
        //Verification if student is added to the exam or not

        QString grade = ui->gradeLabel->text();
        QString id = ui->idLabel->text();
        QSqlQuery query_verify(QSqlDatabase::database("Examsphere"));
        query_verify.prepare(QString("SELECT id, grade FROM exam_data WHERE id=:id "));
        query_verify.bindValue(":id",id);
        if(!query_verify.exec())
        {
            QMessageBox::warning(this,"Error","Verfication Error!!!");
        }
        else
        {
            if(query_verify.next())
            {
                QString iddb=query_verify.value(0).toString();
                if(iddb == id)
                {
                    if(grade == '8')
                    {
                        close();
                        class8Window = new class8(studentId,studentFName,studentLName,studentEmail,studentDOB,studentBatch,studentGrade,this);
                        class8Window->showMaximized();
                    }
                    else if(grade == '9')
                    {
                        close();
                        class9Window = new class9(studentId,studentFName,studentLName,studentEmail,studentDOB,studentBatch,studentGrade,this);
                        class9Window->showMaximized();
                    }
                    else
                    {
                        close();
                        class10Window = new class10(studentId,studentFName,studentLName,studentEmail,studentDOB,studentBatch,studentGrade,this);
                        class10Window->showMaximized();
                    }
                }
            }
            else
            {
                QMessageBox::warning(this,"Not Enrolled","You are not enrolled in this exam yet. Please contact your teacher!");
            }
        }
}


void Student::on_pushButton_4_clicked()
{
    close();
    logoutWindow = new ExamSphere();
    logoutWindow->showMaximized();
}


void Student::on_pushButton_2_clicked()
{

}


void Student::on_changePassword_clicked()
{
    close();
    passwordWindow = new changePassword(studentId,studentFName,studentLName,studentEmail,studentDOB,studentBatch,studentGrade,this);
    passwordWindow->showMaximized();
}


void Student::on_prevResult_clicked()
{

}

