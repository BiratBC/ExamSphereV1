#include "class8.h"
#include "ui_class8.h"
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <QDebug>
#include <QMessageBox>

class8::class8(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::class8)
    ,currentQuestionIndex(0)
    ,score(0)
{
    ui->setupUi(this);
    this->setWindowTitle("Class 8");
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("C:/Users/khatr/OneDrive/Documents/qtDatabase/admin.db");
    if (!db.open()) {
        qDebug() << "Error: unable to connect to database";
    }
    query = QSqlQuery(db);
    if (!query.exec("SELECT * FROM questions")) {
        qDebug() << "Error: " << query.lastError();
    }else
    {
        qDebug() << "Query executed successfully";
        int recordCount = 0;
        while (query.next()) {
            recordCount++;
        }
        qDebug() << "Total records in query:" << recordCount;
        query.first();
    }

    loadQuestion();


}

class8::~class8()
{
    delete ui;
}

void class8::on_prevButton_clicked()
{



}
void class8::loadQuestion()
{
    if (query.seek(currentQuestionIndex)) {
         qDebug() << "Query seek successful";
        //randomize
        QString question = query.value("question").toString();
        QString option1 = query.value("option1").toString();
        QString option2 = query.value("option2").toString();
        QString option3 = query.value("option3").toString();
        QString option4 = query.value("option4").toString();

        ui->questionLabel->setText(question);
        ui->option1->setText(option1);
        ui->option2->setText(option2);
        ui->option3->setText(option3);
        ui->option4->setText(option4);

        // Clear previous selections
        ui->option1->setAutoExclusive(false);
        ui->option2->setAutoExclusive(false);
        ui->option3->setAutoExclusive(false);
        ui->option4->setAutoExclusive(false);
        ui->option1->setChecked(false);
        ui->option2->setChecked(false);
        ui->option3->setChecked(false);
        ui->option4->setChecked(false);
        ui->option1->setAutoExclusive(true);
        ui->option2->setAutoExclusive(true);
        ui->option3->setAutoExclusive(true);
        ui->option4->setAutoExclusive(true);
    }
    else
    {
         qDebug() << "Query seek failed";
    }
}
void class8::checkAnswer()
{

    QString correctAnswer = query.value("correct").toString();
    qDebug() << "Correct answer for current question:" << correctAnswer;
    if ((ui->option1->isChecked() && ui->option1->text() == correctAnswer) ||
        (ui->option2->isChecked() && ui->option2->text() == correctAnswer) ||
        (ui->option3->isChecked() && ui->option3->text() == correctAnswer) ||
        (ui->option4->isChecked() && ui->option4->text() == correctAnswer))        {
        score++;
        qDebug() << "Correct answer selected. Score incremented to:" << score;
    }else {
    qDebug() << "Incorrect answer selected. Score remains:" << score;
    }
}

void class8::on_nextButton_clicked()
{
    checkAnswer();
    currentQuestionIndex++;
    if (query.seek(currentQuestionIndex)) {
        loadQuestion();
    } else {
        qDebug() << "No more questions. Current index:" << currentQuestionIndex;
        ui->questionLabel->setText(QString("Congratulations!!!You got %1").arg(score));
        ui->option1->hide();
        ui->option2->hide();
        ui->option3->hide();
        ui->option4->hide();
        ui->nextButton->hide();
        ui->prevButton->hide();
    }
}


