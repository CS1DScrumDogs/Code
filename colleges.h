#ifndef COLLEGES_H
#define COLLEGES_H

#include <QSqlDatabase>
#include <QSqlQuery>
#include <QtSql>
#include <QVector>
#include "database.h"

struct College
{
    QString name;
    double distance;
};
struct Distances
{
    QString beg;
    QString end;
    double distance;
};

namespace Ui
{
    class MainWindow;
}

class colleges
{
private:
    QSqlDatabase mySqLiteDb;
    dataBase myDb;
    College myCollege;
    Distances myDistances;
public:
    colleges();
    ~colleges();
    QVector<College> getColleges();
    QVector<Distances> getDistances();
};

#endif // COLLEGES_H
