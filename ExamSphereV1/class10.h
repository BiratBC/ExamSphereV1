#ifndef CLASS10_H
#define CLASS10_H

#include <QDialog>

namespace Ui {
class class10;
}

class class10 : public QDialog
{
    Q_OBJECT

public:
    explicit class10(QWidget *parent = nullptr);
    ~class10();

private:
    Ui::class10 *ui;
};

#endif // CLASS10_H
