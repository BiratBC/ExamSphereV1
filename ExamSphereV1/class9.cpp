#include "class9.h"
#include "ui_class9.h"

class9::class9(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::class9)
{
    ui->setupUi(this);
}

class9::~class9()
{
    delete ui;
}
