#include "studentlogin.h"

#include "welcome.h"
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
    Welcome w;
    w.showMaximized();
    return a.exec();
}
