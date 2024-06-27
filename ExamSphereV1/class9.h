#ifndef CLASS9_H
#define CLASS9_H

#include <QDialog>

namespace Ui {
class class9;
}

class class9 : public QDialog
{
    Q_OBJECT

public:
    explicit class9(QWidget *parent = nullptr);
    ~class9();

private:
    Ui::class9 *ui;
};

#endif // CLASS9_H
