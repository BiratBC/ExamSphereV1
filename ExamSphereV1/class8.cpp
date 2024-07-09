#include "class8.h"
#include "ui_class8.h"
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <QDebug>
#include <QMessageBox>
#include <QVector>
#include <QRandomGenerator>
#include <algorithm>
#include "student.h"

using namespace std;
Student *studentWindow2;


class8::class8(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::class8)
    ,currentQuestionIndex(0)
    ,scoreRec(0)
{
    ui->setupUi(this);
    this->setWindowTitle("Class 8");
    ui->homeButton->hide();
    ui->nextButton->hide();
    ui->prevButton->hide();
    ui->groupBox_2->hide();

    QPixmap logo(":/rec/assets/logo.png");
    ui->logo5->setPixmap(logo.scaled(200,200,Qt::KeepAspectRatio));
    ui->subject->addItem("Maths");
    ui->subject->addItem("Computer");
    ui->subject->addItem("Science");

    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("C:/Users/khatr/OneDrive/Documents/qtDatabase/admin.db");
    if (!db.open()) {
        qDebug() << "Error: unable to connect to database";
        return;
    }



}

class8::~class8()
{
    delete ui;
}
void class8::on_start_clicked()
{
    ui->nextButton->show();
    ui->prevButton->show();
    ui->groupBox_2->show();

    int a = ui->subject->currentIndex();

    if(a == 0)
    {
        query = QSqlQuery(db);
        if (!query.exec("SELECT * FROM questions WHERE question_code = '1001'")) {
            qDebug() << "Error: " << query.lastError();
            return;
        }

        // Fetch all questions
        while (query.next()) {
            QVariantMap question;
            question["question"] = query.value("question").toString();
            question["option1"] = query.value("option1").toString();
            question["option2"] = query.value("option2").toString();
            question["option3"] = query.value("option3").toString();
            question["option4"] = query.value("option4").toString();
            question["correct"] = query.value("correct").toString();
            questions.append(question);
        }

        // Shuffle and select the first 4 questions
        questions = getRandomQuestions(questions, 4);

        loadQuestion();
    }
    else if (a == 1)
    {
        query = QSqlQuery(db);
        if (!query.exec("SELECT * FROM questions WHERE question_code = '1002'")) {
            qDebug() << "Error: " << query.lastError();
            return;
        }

        // Fetch all questions
        while (query.next()) {
            QVariantMap question;
            question["question"] = query.value("question").toString();
            question["option1"] = query.value("option1").toString();
            question["option2"] = query.value("option2").toString();
            question["option3"] = query.value("option3").toString();
            question["option4"] = query.value("option4").toString();
            question["correct"] = query.value("correct").toString();
            questions.append(question);
        }

        // Shuffle and select the first 4 questions
        questions = getRandomQuestions(questions, 4);

        loadQuestion();
    }
    else
    {
        //For Science
        query = QSqlQuery(db);
        if (!query.exec("SELECT * FROM questions WHERE question_code = '1003'")) {
            qDebug() << "Error: " << query.lastError();
            return;
        }

        // Fetch all questions from database
        while (query.next()) {
            QVariantMap question;
            question["question"] = query.value("question").toString();
            question["option1"] = query.value("option1").toString();
            question["option2"] = query.value("option2").toString();
            question["option3"] = query.value("option3").toString();
            question["option4"] = query.value("option4").toString();
            question["correct"] = query.value("correct").toString();
            questions.append(question);
        }

        // Shuffle and select the first 4 questions
        questions = getRandomQuestions(questions, 4);

        loadQuestion();
    }

}

void class8::on_prevButton_clicked()
{

}
QVector<QVariantMap> class8::getRandomQuestions(QVector<QVariantMap> questions, int numberOfQuestions) {
    std::random_device rd;
    std::mt19937 g(rd());
    std::shuffle(questions.begin(), questions.end(), g);
    return questions.mid(0, numberOfQuestions);
}
void class8::loadQuestion()
{
    if (currentQuestionIndex < questions.size()) {
        QVariantMap question = questions[currentQuestionIndex];
        ui->questionLabel->setText(question["question"].toString());
        ui->option1->setText(question["option1"].toString());
        ui->option2->setText(question["option2"].toString());
        ui->option3->setText(question["option3"].toString());
        ui->option4->setText(question["option4"].toString());

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

    if (currentQuestionIndex < questions.size()) {
        QVariantMap question = questions[currentQuestionIndex];
        QString correctAnswer = question["correct"].toString();
        if ((ui->option1->isChecked() && ui->option1->text() == correctAnswer) ||
            (ui->option2->isChecked() && ui->option2->text() == correctAnswer) ||
            (ui->option3->isChecked() && ui->option3->text() == correctAnswer) ||
            (ui->option4->isChecked() && ui->option4->text() == correctAnswer)) {
            scoreRec++;
        }
    }
}

void class8::on_nextButton_clicked()
{
    checkAnswer();
    currentQuestionIndex++;
    if (currentQuestionIndex < questions.size()) {
        loadQuestion();
    } else {
        ui->questionLabel->setText(QString("Congratulations!!! You got %1").arg(scoreRec));
        ui->option1->hide();
        ui->option2->hide();
        ui->option3->hide();
        ui->option4->hide();
        ui->nextButton->hide();
        ui->prevButton->hide();
        ui->homeButton->show();
    }
}


void class8::on_homeButton_clicked()
{
    close();
    studentWindow2 = new Student();
    studentWindow2->showMaximized();
}




