#ifndef CLASS10_H
#define CLASS10_H

#include "qdatetime.h"
#include <QDialog>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QVariantMap>
#include <QVector>

namespace Ui {
class class10;
}

class class10 : public QDialog
{
    Q_OBJECT

public:
    class10(){}
    explicit class10(const QString &id, const QString &fname, const QString &lname, const QString &email,const QDate &dob, const QString &batch,
                     const QString &grade, QWidget *parent = nullptr);
    ~class10();

private slots:
    void on_prevButton_clicked();

    void on_nextButton_clicked();

    void on_homeButton_clicked();

    void on_start_clicked();

private:
    Ui::class10 *ui;
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

    void loadQuestion();
    void checkAnswer();
    QVector<QVariantMap> questions;
    QVector<QVariantMap> getRandomQuestions(QVector<QVariantMap> questions, int numberOfQuestions = 4);
};

#endif // CLASS10_H
