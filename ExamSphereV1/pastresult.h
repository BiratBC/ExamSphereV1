#ifndef PASTRESULT_H
#define PASTRESULT_H

#include <QDialog>

namespace Ui {
class PastResult;
}

class PastResult : public QDialog
{
    Q_OBJECT

public:
    PastResult(){}
    //explicit PastResult(const QString &id, const QString &grade, QWidget *parent = nullptr);
    //explicit PastResult(const QString &exam_type);
    explicit PastResult(const QString &exam_type, const QString &id, const QString &grade, const QString &total, const QString &obtained, QWidget *parent = nullptr);
    ~PastResult();
private slots:
    void on_checkResult_clicked();

private:
    Ui::PastResult *ui;

};

#endif // PASTRESULT_H
