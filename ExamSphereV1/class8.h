#ifndef CLASS8_H
#define CLASS8_H

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
    explicit class8(QWidget *parent = nullptr);
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

    int currentQuestionIndex;
    int scoreRec;

    void loadQuestion();
    void checkAnswer();
    QVector<QVariantMap> questions;
    QVector<QVariantMap> getRandomQuestions(QVector<QVariantMap> questions, int numberOfQuestions = 4);
};

#endif // CLASS8_H
