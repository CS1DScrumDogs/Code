#include "colleges.h"

colleges::colleges()
{
    myCollege.name = "";
    myCollege.distance = 0.0;
    myDistances.beg = "";
    myDistances.end = "";
    myDistances.distance = 0.0;
    myDb.conOpen();
}

colleges::~colleges()
{
    myDb.conClose();
}

QVector<College> colleges::getColleges()
{
    QSqlQuery qry;
    qry.prepare("SELECT endingCollege, distanceBetween FROM saddleback");
    QVector<College> campusList;

    College cc;
    if (qry.exec())
    {
        while (qry.next())
        {
            cc.name = qry.value(0).toString();
            cc.distance = qry.value(1).toDouble();

            campusList.push_back(cc);
        }
    }
    else
    {
       qDebug() << "Failed!";
    }

    cc.name = "Saddleback College";
    cc.distance =  17;
    campusList.push_back(cc);

    return campusList;
}

QVector<Distances> colleges::getDistances()
{
    QSqlQuery qry;
    qry.prepare("SELECT *FROM distances");
    QVector<Distances> distanceList;

    if (qry.exec())
    {
        while (qry.next())
        {
            Distances dd;
            dd.beg = qry.value(0).toString();
            dd.end = qry.value(1).toString();
            dd.distance = qry.value(2).toDouble();

            distanceList.push_back(dd);
        }
    }
    else
    {
       qDebug() << "Failed! to get distances.";
    }

    return distanceList;
}

