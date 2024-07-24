#ifndef CLASS9_H
#define CLASS9_H

#include "qdatetime.h"
#include <QDialog>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QVariantMap>
#include <QVector>
namespace Ui {
class class9;
}

class class9 : public QDialog
{
    Q_OBJECT

public:
    class9(){}
    explicit class9(const QString &id, const QString &fname, const QString &lname, const QString &email,const QDate &dob, const QString &batch,
                    const QString &grade, QWidget *parent = nullptr);
    ~class9();

private slots:
    void on_prevButton_clicked();

    void on_nextButton_clicked();

    void on_homeButton_clicked();

    void on_start_clicked();

    void updateTimer();

    void timerTimeout();

private:
    Ui::class9 *ui;
    QSqlDatabase db;
    QSqlQuery query;

    QString studentId;
    QString studentFName;
    QString studentLName;
    QString studentEmail;
    QDate studentDOB;
    QString studentBatch;
    QString studentGrade;

    int currentQuestionIndex;
    int scoreRec;

    QTimer *timer;
    int timeRemaining;

    void loadQuestion();
    void checkAnswer();
    QVector<QVariantMap> questions;
    QVector<QVariantMap> getRandomQuestions(QVector<QVariantMap> questions, int numberOfQuestions = 4);
};

#endif // CLASS9_H
