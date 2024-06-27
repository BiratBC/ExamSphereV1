#ifndef CLASS8_H
#define CLASS8_H

#include <QDialog>

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
    void on_pushButton_clicked();

private:
    Ui::class8 *ui;
};

#endif // CLASS8_H
