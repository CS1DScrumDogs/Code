#ifndef DATABASE_H
#define DATABASE_H

#include <QtSql>
#include<QSqlDatabase>

class dataBase
{
public:
    dataBase();
    void conClose();
    bool conOpen();
private:
    QSqlDatabase mySqLiteDb;
};

#endif // DATABASE_H
