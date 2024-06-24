#include "examsphere.h"
#include <iostream>
#include <QApplication>
#include <QSqlDatabase>
#include <QDebug>
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlError>
#include <QtSql/QSqlQuery>
#include <QApplication>

using namespace std;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    ExamSphere w;
    w.show();
    return a.exec();
}
