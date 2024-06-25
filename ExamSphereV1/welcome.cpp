#include "welcome.h"
#include "ui_welcome.h"
#include <QMessageBox>
#include <QPixmap>


Welcome::Welcome(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Welcome)
{
    this->setWindowTitle("ExamSphere");
    ui->setupUi(this);
    QPixmap logo("C:/Users/khatr/OneDrive/Documents/QtProjects/ExamSphereV1/ExamSphereV1/assets/logo.png");

    ui->logo1->setPixmap(logo.scaled(200,200,Qt::KeepAspectRatio));
    ui->comboBox->addItem("Student");
    ui->comboBox->addItem("Examiner");
}

Welcome::~Welcome()
{
    delete ui;
}

void Welcome::on_pushGo_clicked()
{
    hide();
    examWindow = new ExamSphere();
    examWindow->showMaximized();

}

