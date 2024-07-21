#include "examiner.h"
#include "ui_examiner.h"

examiner::examiner(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::examiner)
{
    ui->setupUi(this);
}

examiner::~examiner()
{
    delete ui;
}

void examiner::on_pushButton_clicked()
{


}


void examiner::on_pushButton_2_clicked()
{
    //gKDDHJA
    close();
    addWindow =  new addStudents();
    addWindow->showMaximized();
}

