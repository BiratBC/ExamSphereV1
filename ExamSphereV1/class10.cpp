#include "class10.h"
#include "ui_class10.h"

class10::class10(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::class10)
{
    ui->setupUi(this);
}

class10::~class10()
{
    delete ui;
}
