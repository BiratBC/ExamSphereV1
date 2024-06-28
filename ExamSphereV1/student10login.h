#ifndef STUDENT10LOGIN_H
#define STUDENT10LOGIN_H

#include <QDialog>
#include "class10.h"
#include <QMainWindow>
#include <QDebug>
#include <QtSql>
#include <QFileInfo>
#include <QSqlDatabase>

#include <QMainWindow>

namespace Ui {
class student10login;
}

class student10login : public QDialog
{
    Q_OBJECT

public:
    explicit student10login(QWidget *parent = nullptr);
    ~student10login();

private:
    Ui::student10login *ui;
    class10 *class10Window;
};

#endif // STUDENT10LOGIN_H
