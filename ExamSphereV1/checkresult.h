#ifndef CHECKRESULT_H
#define CHECKRESULT_H

#include <QDialog>

namespace Ui {
class CheckResult;
}

class CheckResult : public QDialog
{
    Q_OBJECT

public:
    CheckResult(){}
    //explicit CheckResult(QWidget *parent = nullptr);
    explicit CheckResult(const QString &marks, QWidget *parent = nullptr);
    ~CheckResult();

private slots:
    void on_checkResult_clicked();

private:
    Ui::CheckResult *ui;
    QString studentMarks;
};

#endif // CHECKRESULT_H
