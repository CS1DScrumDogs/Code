#include "Database.h"

// Constructor
// Parameterized constructor
Database::Database(){}

// Add Souvenirs (all fields at once)
bool Database::AddSouvenirs(QString college, QString traditionalSouvenir, QString cost)
{
    QSqlQuery query;

    // Prep "Add Souvenirs" Query
    query.prepare("INSERT INTO souvenirs (college, traditionalSouvenir, cost) VALUES (:college, :traditionalSouvenir, :cost )");

    // Bind safe values
    query.bindValue(":college", college);
    query.bindValue(":traditionalSouvenir", traditionalSouvenir);
    query.bindValue(":cost", cost);

    // Execute query and return status
    return query.exec();
}

// Edit Souvenirs Data (individual fields)
bool Database::UpdateSouvenirs(QString college, QString traditionalSouvenir, QString cost)
{
    QSqlQuery query;

    // Prepare query to update customer listing
    query.prepare("UPDATE souvenirs "
                  "SET college = college, "
                  "cost = :cost "
                  "WHERE traditionalSouvenir = :traditionalSouvenir;");

    // Bind safe values
    query.bindValue(":college", college);
    query.bindValue(":traditionalSouvenir", traditionalSouvenir);
    query.bindValue(":cost", cost);

    // Execute query and return status
    return query.exec();
}

// Remove Souvenirs
// Note: This needs to convert the input to uppercase
bool Database::DeleteSouvenirs(QString traditionalSouvenir)
{
    QSqlQuery query;

    // Prepare query to delete listing
    query.prepare("DELETE from souvenirs "
                  "WHERE traditionalSouvenir = :traditionalSouvenir;");

    // Bind safe values
    query.bindValue(":traditionalSouvenir", traditionalSouvenir);

    return query.exec();
}

// Destructor
Database::~Database() {}
