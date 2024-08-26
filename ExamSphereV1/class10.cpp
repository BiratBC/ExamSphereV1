#include "class10.h"
#include "ui_class10.h"
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
Student *studentDashboard3;

class10::class10(const QString &id, const QString &fname, const QString &lname, const QString &email, const QDate &dob,
                 const QString &batch, const QString &grade, QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::class10)
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
    this->setWindowTitle("Class 10");
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
    connect(timer, &QTimer::timeout, this, &class10::updateTimer);

}

class10::~class10()
{
    delete ui;
}
void class10::saveCurrentAnswer()
{
    QString selectedAnswer;
    if (ui->option1->isChecked()) {
        selectedAnswer = ui->option1->text();
    } else if (ui->option2->isChecked()) {
        selectedAnswer = ui->option2->text();
    } else if (ui->option3->isChecked()) {
        selectedAnswer = ui->option3->text();
    } else if (ui->option4->isChecked()) {
        selectedAnswer = ui->option4->text();
    } else {
        selectedAnswer = "";
    }

    selectedAnswers[currentQuestionIndex] = selectedAnswer;
}
void class10::on_start_clicked()
{
    ui->nextButton->show();
    ui->prevButton->show();
    ui->groupBox_2->show();

    int a = ui->subject->currentIndex();

    if(a == 0)
    {
        query = QSqlQuery(db);
        if (!query.exec("SELECT * FROM questions WHERE subject_code = '1001' AND class_code = '10'")) {
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
        if (!query.exec("SELECT * FROM questions WHERE subject_code = '1002' AND class_code = '10'")) {
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
        if (!query.exec("SELECT * FROM questions WHERE subject_code = '1003' AND class_code = '10'")) {
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
    }
    // Initialize selectedAnswers with an empty string for each question
    selectedAnswers.fill("", questions.size());

    loadQuestion();
    timer->start(1000);

}

void class10::on_prevButton_clicked()
{
    saveCurrentAnswer();
    if (currentQuestionIndex > 0) {
        currentQuestionIndex--;
        loadQuestion();
    }

}
QVector<QVariantMap> class10::getRandomQuestions(QVector<QVariantMap> questions, int numberOfQuestions) {
    random_device rd;
    mt19937 g(rd());
    shuffle(questions.begin(), questions.end(), g);
    return questions.mid(0, numberOfQuestions);
}
void class10::loadQuestion()
{
    if (currentQuestionIndex < questions.size()) {
        QVariantMap question = questions[currentQuestionIndex];
        ui->questionLabel->setText(question["question"].toString());
        ui->option1->setText(question["option1"].toString());
        ui->option2->setText(question["option2"].toString());
        ui->option3->setText(question["option3"].toString());
        ui->option4->setText(question["option4"].toString());

        // Load previously selected answer
        QString selectedAnswer = selectedAnswers[currentQuestionIndex];
        if (selectedAnswer == ui->option1->text()) {
            ui->option1->setChecked(true);
        } else if (selectedAnswer == ui->option2->text()) {
            ui->option2->setChecked(true);
        } else if (selectedAnswer == ui->option3->text()) {
            ui->option3->setChecked(true);
        } else if (selectedAnswer == ui->option4->text()) {
            ui->option4->setChecked(true);
        } else {
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
    }
    else
    {
        qDebug() << "Query seek failed";
    }
}
void class10::checkAnswer()
{

    scoreRec = 0; // Reset score
    for (int i = 0; i < selectedAnswers.size(); ++i) {
        QVariantMap question = questions[i];
        QString correctAnswer = question["correct"].toString();
        if (selectedAnswers[i] == correctAnswer) {
            scoreRec++;
        }
    }
}

void class10::on_nextButton_clicked()
{
    saveCurrentAnswer();
    QString sub = ui->subject->currentText();
    QString subjectCode;
    if (sub == "Maths") {
        subjectCode = "1001";
    } else if (sub == "Computer") {
        subjectCode = "1002";
    } else if (sub == "Science") {
        subjectCode = "1003";
    }
    QSqlQuery qry1(db);
    if (!qry1.exec(QString("SELECT exam_type, total_marks FROM questions WHERE subject_code = '%1' AND class_code = '8'").arg(subjectCode))) {
        qDebug() << "Error fetching exam details:" << qry1.lastError();
        return;
    }

    QString exam_Type;
    QString fullMarks;
    if (qry1.next()) {
        exam_Type = qry1.value("exam_type").toString();
        fullMarks = qry1.value("total_marks").toString();
    }

    checkAnswer();
    currentQuestionIndex++;
    if (currentQuestionIndex < questions.size()) {
        loadQuestion();
    } else {
        timer->stop();
        checkAnswer();
        ui->timerLabel->setText(QString("Time Remaining: 00:00"));
        ui->questionLabel->setText(QString("Congratulations!!! You got %1").arg(scoreRec));
        ui->option1->hide();
        ui->option2->hide();
        ui->option3->hide();
        ui->option4->hide();
        ui->nextButton->hide();
        ui->prevButton->hide();
        ui->homeButton->show();

        QSqlQuery qry(db);
        qry.prepare("INSERT INTO results(exam_type, id, grade, subject, total_marks, obtained_marks)"
                    "VALUES(:exam_type, :id, :grade, :subject, :total_marks, :obtained_marks)");

        qry.bindValue(":exam_type", exam_Type);
        qry.bindValue(":id", studentId);
        qry.bindValue(":grade", studentGrade);
        qry.bindValue(":subject", sub);
        qry.bindValue(":total_marks", fullMarks);
        qry.bindValue(":obtained_marks", QString::number(scoreRec));

        qDebug() << "Executing query:" << qry.executedQuery();
        qDebug() << "Bound values:" << exam_Type << studentId << studentGrade << sub << fullMarks << scoreRec;

        if (!qry.exec()) {
            QMessageBox::warning(this, "Not Recorded", "Failed to record data of this examination");
            qDebug() << "Error: " << qry.lastError();
        }

    }
}
void class10::updateTimer() {
    timeRemaining--;
    int minutes = timeRemaining / 60;
    int seconds = timeRemaining % 60;
    ui->timerLabel->setText(QString("Time Remaining: %1:%2").arg(minutes, 2, 10, QChar('0')).arg(seconds, 2, 10, QChar('0')));

    if (timeRemaining <= 0) {
        timerTimeout();
    }
}

void class10::timerTimeout() {
    timer->stop();
    checkAnswer();
    ui->questionLabel->setText(QString("Time's up! You got %1").arg(scoreRec));
    ui->option1->hide();
    ui->option2->hide();
}



void class10::on_homeButton_clicked()
{
    close();
    studentDashboard3 = new Student(studentId,studentFName,studentLName,studentEmail,studentDOB,studentBatch,studentGrade,this);
    studentDashboard3->showMaximized();
}

