#include "score.h"
#include "ui_score.h"

score::score(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::score)
{
    ui->setupUi(this);
}

score::~score()
{
    delete ui;
}
