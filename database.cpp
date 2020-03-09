#include "database.h"

dataBase::dataBase()
{

}

void dataBase::conClose()
{
    mySqLiteDb.close();
    mySqLiteDb.removeDatabase(QSqlDatabase::defaultConnection);
}

bool dataBase::conOpen()
{
    mySqLiteDb = QSqlDatabase::addDatabase("QSQLITE");
    mySqLiteDb.setDatabaseName("/Users/alvarohernandez/ScrumDogs.db");
    if(!mySqLiteDb.open())
    {
        qDebug() << ("Database Not connected");
        return false;
    }
    else
    {
        qDebug() << ("Database Connected Successfully");
        return true;
    }
}
