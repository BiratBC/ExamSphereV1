#ifndef PASTRESULT_H
#define PASTRESULT_H

#include "qdatetime.h"
#include <QDialog>

namespace Ui {
class PastResult;
}

class PastResult : public QDialog
{
    Q_OBJECT

public:
    PastResult(){}
    //explicit PastResult(const QString &exam_type);
    explicit PastResult(const QString &id, const QString &fname, const QString &lname, const QString &email,const QDate &dob, const QString &batch,
                  const QString &grade, QWidget *parent = nullptr);
    ~PastResult();
private slots:
    void on_checkResult_clicked();

    void on_pushButton_clicked();

private:
    Ui::PastResult *ui;
    QString studentId;
    QString studentFName;
    QString studentLName;
    QString studentEmail;
    QDate studentDOB;
    QString studentBatch;
    QString studentGrade;

};

#endif // PASTRESULT_H
