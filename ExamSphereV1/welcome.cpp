#include "welcome.h"
#include "ui_welcome.h"
#include <QMessageBox>
#include <QPixmap>
#include <QComboBox>
#include <QFontDatabase>
using namespace std;

Welcome::Welcome(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Welcome)
{

    ui->setupUi(this);
    this->setWindowTitle("ExamSphere");
    this->setWindowIcon(QIcon(":/rec/assets/logo.png"));


    QPixmap logo(":/rec/assets/logo.png");
    ui->logo1->setPixmap(logo.scaled(200,200,Qt::KeepAspectRatio));
    ui->comboBox->addItem(QIcon(":/rec/assets/icons8-graduate-100.png"),"Student");
    ui->comboBox->addItem(QIcon(":/rec/assets/icons8-teacher-100.png"),"Examiner");

}



Welcome::~Welcome()
{
    delete ui;
}

void Welcome::on_pushGo_clicked()
{
    int x =  ui->comboBox->currentIndex();

    if(x == 0)
    {
        close();
        examWindow = new ExamSphere();
        examWindow->showMaximized();
        studentWindow = new Student();
        //studentWindow->showMaximized();
    }
    else
    {
        close();
        examinerWindow = new ExaminerLogin();
        examinerWindow->showMaximized();
    }

}
