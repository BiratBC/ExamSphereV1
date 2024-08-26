#ifndef CLASS8_H
#define CLASS8_H

#include "qdatetime.h"
#include <QDialog>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QVariantMap>
#include <QVector>

namespace Ui {
class class8;
}

class class8 : public QDialog
{
    Q_OBJECT

public:
    class8(){}
    explicit class8(const QString &id, const QString &fname, const QString &lname, const QString &email, const QDate &dob,
                    const QString &batch, const QString &grade, QWidget *parent = nullptr);
    ~class8();

private slots:
    void on_prevButton_clicked();

    void on_nextButton_clicked();

    void on_homeButton_clicked();

    void on_start_clicked();

    void updateTimer();

    void timerTimeout();


private:
    Ui::class8 *ui;
    QSqlDatabase db;
    QSqlQuery query;

    QString studentId;
    QString studentFName;
    QString studentLName;
    QString studentEmail;
    QDate studentDOB;
    QString studentBatch;
    QString studentGrade;

    QString examType;
    QString totalMarks;

    int currentQuestionIndex;
    int scoreRec;

    QTimer *timer;
    int timeRemaining;

    void loadQuestion();
    void checkAnswer();
    void saveCurrentAnswer();
    QVector<QVariantMap> questions;
    QVector<QVariantMap> getRandomQuestions(QVector<QVariantMap> questions, int numberOfQuestions = 4);
    QVector<QString> selectedAnswers;
};

#endif // CLASS8_H
