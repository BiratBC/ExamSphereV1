#ifndef STUDENT9LOGIN_H
#define STUDENT9LOGIN_H

#include <QDialog>
#include "class9.h"
#include <QMainWindow>
#include <QDebug>
#include <QtSql>
#include <QFileInfo>
#include <QSqlDatabase>

#include <QMainWindow>

namespace Ui {
class student9login;
}

class student9login : public QDialog
{
    Q_OBJECT

public:
    explicit student9login(QWidget *parent = nullptr);
    ~student9login();

private:
    Ui::student9login *ui;
    class9 *class9Window;
};

#endif // STUDENT9LOGIN_H
