#include "class8.h"
#include "ui_class8.h"
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <QDebug>
#include <QMessageBox>
int count = 0;
class8::class8(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::class8)
{
    ui->setupUi(this);
    this->setWindowTitle("Class 8");
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("C:/Users/khatr/OneDrive/Documents/qtDatabase/admin.db");
    if (!db.open()) {
        qDebug() << "Error: unable to connect to database";
    }

}

class8::~class8()
{
    delete ui;
}

void class8::on_pushButton_clicked()
{

    QSqlQuery query;
    if (query.exec("SELECT correct FROM questions")) {
        if (query.next()) {
            QString fieldValue = query.value(0).toString();
            // Use this fieldValue to update the radio buttons
        }
    } else {
        qDebug() << "Error: " << query.lastError();
    }
    QString correctAnswer = query.value("correct").toString();
    if ((ui->radioButton->isChecked() && ui->radioButton->text() == correctAnswer) ||
        (ui->radioButton_2->isChecked() && ui->radioButton_2->text() == correctAnswer) ||
        (ui->radioButton_3->isChecked() && ui->radioButton_3->text() == correctAnswer) ||
        (ui->radioButton_4->isChecked() && ui->radioButton_4->text() == correctAnswer))        {
        count++;
    }
    ui->score->setText(QString("Your score is %1").arg(count));
}

