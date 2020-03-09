#ifndef DATABASE_H
#define DATABASE_H

#include <QtSql>
#include <QSqlQuery>
#include<QMessageBox>
#include<QSqlDatabase>
class Database : public QSqlDatabase
{
public:
    // Constructor
    Database();
    void conClose();
    bool conOpen();
                // Add Souvenirs
                // Note: This will convert empty values to null too
    bool AddSouvenirs(QString college, QString traditionalSouvenir, QString cost);

            // Edit Souvenirs Data
    bool UpdateSouvenirs(QString college, QString traditionalSouvenir, QString cost);

            // Remove Souvenirs
    bool DeleteSouvenirs(QString traditionalSouvenir);

    // Destructor
    ~Database();
private:
    QSqlDatabase mySqLiteDb;
};
#endif // DATABASE_H
