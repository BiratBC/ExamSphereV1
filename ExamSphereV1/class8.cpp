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
#include <QTimer>
#include <QDate>


using namespace std;
Student *studentDashboard1;

class8::class8(const QString &id, const QString &fname, const QString &lname, const QString &email, const QDate &dob,
               const QString &batch, const QString &grade, QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::class8)
    ,studentId(id)
    ,studentFName(fname)
    ,studentLName(lname)
    ,studentEmail(email)
    ,studentDOB(dob)
    ,studentBatch(batch)
    ,studentGrade(grade)
    ,currentQuestionIndex(0)
    ,scoreRec(0)
    ,timeRemaining(100)
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
    QMessageBox messageIntro;
    messageIntro.resize(800,800);
    messageIntro.setStyleSheet(
        "QMessageBox {"
        "    background-color: #f0f0f0;"
        "    color: #333333;"
        "}"
        );
    /*QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("C:/Users/khatr/OneDrive/Documents/qtDatabase/admin.db");
    if (!db.open()) {
        qDebug() << "Error: unable to connect to database";
        return;
    }*/
    QSqlDatabase dab = QSqlDatabase::addDatabase("QMYSQL");
    dab.setHostName("localhost");
    dab.setUserName("root");
    dab.setPassword("");
    dab.setDatabaseName("examsphere");
    dab.setPort(3377);
    dab.open();
    if (!dab.open()) {
        qDebug() << "Error: " << dab.lastError().text();
        messageIntro.setWindowTitle("Database Error");
        messageIntro.setText("Failed to connect to database: " + dab.lastError().text());
        messageIntro.exec();
    }

    timer = new QTimer(this);
    connect(timer, &QTimer::timeout, this, &class8::updateTimer);

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
    ui->start->hide();
    ui->subject->hide();
    ui->label->hide();

    int a = ui->subject->currentIndex();

    if(a == 0)
    {
        query = QSqlQuery(db);
        if (!query.exec("SELECT * FROM questions WHERE subject_code = '1001' AND class_code = '8'")) {
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
        if (!query.exec("SELECT * FROM questions WHERE subject_code = '1002' AND class_code = '8'")) {
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
        if (!query.exec("SELECT * FROM questions WHERE subject_code = '1003' AND class_code = '8'")) {
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

void class8::on_prevButton_clicked()
{

}
QVector<QVariantMap> class8::getRandomQuestions(QVector<QVariantMap> questions, int numberOfQuestions) {
    random_device rd;
    mt19937 g(rd());
    shuffle(questions.begin(), questions.end(), g);
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
    QString sub = ui->subject->currentText();
    QSqlQuery qry1(db);
    if (!qry1.exec("SELECT exam_type, total_marks FROM questions WHERE subject_code = '1001' AND class_code = '8'")) {
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

void class8::updateTimer() {
    timeRemaining--;
    int minutes = timeRemaining / 60;
    int seconds = timeRemaining % 60;
    ui->timerLabel->setText(QString("Time Remaining: %1:%2").arg(minutes, 2, 10, QChar('0')).arg(seconds, 2, 10, QChar('0')));

    if (timeRemaining <= 0) {
        timerTimeout();
    }
}

void class8::timerTimeout() {
    timer->stop();
    checkAnswer();
    ui->questionLabel->setText(QString("Time's up! You got %1").arg(scoreRec));
    ui->option1->hide();
    ui->option2->hide();
}

void class8::on_homeButton_clicked()
{
    close();
    studentDashboard1 = new Student(studentId,studentFName,studentLName,studentEmail,studentDOB,studentBatch,studentGrade,this);
    studentDashboard1->showMaximized();
}




