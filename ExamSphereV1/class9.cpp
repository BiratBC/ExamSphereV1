#include "class9.h"
#include "ui_class9.h"
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <QDebug>
#include <QMessageBox>
#include <QVector>
#include <QRandomGenerator>
#include <algorithm>
#include "student.h"
#include <QTimer>
#include <QDate>

using namespace std;
Student *studentDashboard2;

class9::class9(const QString &id, const QString &fname, const QString &lname, const QString &email, const QDate &dob,
               const QString &batch, const QString &grade, QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::class9)
    ,studentId(id)
    , studentFName(fname)
    , studentLName(lname)
    ,studentEmail(email)
    ,studentDOB(dob)
    ,studentBatch(batch)
    , studentGrade(grade)
    ,currentQuestionIndex(0)
    ,scoreRec(0)
    ,timeRemaining(100)

{
    ui->setupUi(this);
    this->setWindowTitle("Class 9");
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
    timer = new QTimer(this);
    connect(timer, &QTimer::timeout, this, &class9::updateTimer);

}

class9::~class9()
{
    delete ui;
}
void class9::on_start_clicked()
{
    ui->nextButton->show();
    ui->prevButton->show();
    ui->groupBox_2->show();
    ui->start->hide();
    ui->subject->hide();
    ui->label->hide();


    int a = ui->subject->currentIndex();

    if(a == 0)
    {
        query = QSqlQuery(db);
        if (!query.exec("SELECT * FROM questions WHERE subject_code = '1001' AND class_code = '9'")) {
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
         timer->start(1000);
    }
    else if (a == 1)
    {
        query = QSqlQuery(db);
        if (!query.exec("SELECT * FROM questions WHERE subject_code = '1002' AND class_code = '9'")) {
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
         timer->start(1000);
    }
    else
    {
        //For Science
        query = QSqlQuery(db);
        if (!query.exec("SELECT * FROM questions WHERE subject_code = '1003' AND class_code = '9'")) {
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
         timer->start(1000);
    }

}

void class9::on_prevButton_clicked()
{

}
QVector<QVariantMap> class9::getRandomQuestions(QVector<QVariantMap> questions, int numberOfQuestions) {
    random_device rd;
    mt19937 g(rd());
    shuffle(questions.begin(), questions.end(), g);
    return questions.mid(0, numberOfQuestions);
}
void class9::loadQuestion()
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
void class9::checkAnswer()
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

void class9::on_nextButton_clicked()
{
    checkAnswer();
    currentQuestionIndex++;
    if (currentQuestionIndex < questions.size()) {
        loadQuestion();
    } else {
        timer->stop();
        ui->timerLabel->setText(QString("Time Remaining: 00:00"));
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
void class9::updateTimer() {
    timeRemaining--;
    int minutes = timeRemaining / 60;
    int seconds = timeRemaining % 60;
    ui->timerLabel->setText(QString("Time Remaining: %1:%2").arg(minutes, 2, 10, QChar('0')).arg(seconds, 2, 10, QChar('0')));

    if (timeRemaining <= 0) {
        timerTimeout();
    }
}

void class9::timerTimeout() {
    timer->stop();
    checkAnswer();
    ui->questionLabel->setText(QString("Time's up! You got %1").arg(scoreRec));
    ui->option1->hide();
    ui->option2->hide();
}

void class9::on_homeButton_clicked()
{
    close();
    studentDashboard2 = new Student(studentId,studentFName,studentLName,studentEmail,studentDOB,studentBatch,studentGrade,this);
    studentDashboard2->showMaximized();
}
