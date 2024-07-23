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
    explicit class8(const QString &id, const QString &fname, const QString &lname, const QString &email,const QDate &dob, const QString &batch,
                    const QString &grade, QWidget *parent = nullptr);
    ~class8();

private slots:
    void on_prevButton_clicked();

    void on_nextButton_clicked();

    void on_homeButton_clicked();

    void on_start_clicked();

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

    int currentQuestionIndex;
    int scoreRec;

    void loadQuestion();
    void checkAnswer();
    QVector<QVariantMap> questions;
    QVector<QVariantMap> getRandomQuestions(QVector<QVariantMap> questions, int numberOfQuestions = 4);
};

#endif // CLASS8_H
