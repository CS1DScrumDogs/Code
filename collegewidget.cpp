#include "collegewidget.h"
#include "ui_collegewidget.h"

collegeWidget::collegeWidget(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::collegeWidget)
{
    QStringList names;
    names << "Begin" << "End" << "Distance";
    ui->setupUi(this);
    setWindowTitle("College Tour");
    ui->tableWidgetColleges->setColumnCount(3);
    ui->tableWidgetColleges->setHorizontalHeaderLabels(names);
}

collegeWidget::~collegeWidget()
{
    delete ui;
}

void collegeWidget::showColleges(College str)
{
    startCollege = str.name;
    QVector<College>temp;
    temp = co.getColleges();
    int fill;
    double totalDist = 0.0;

    qDebug() << "Testing";
    for (int i = 0; i < temp.length(); i++)
    {
        qDebug() << temp[i].name << " " << temp[i].distance;
    }
    recursiveSort(temp);
    compareStore();

    for (int i = 0; i < finalFuckingVectorFUCK.length(); i++)
    {
        totalDist += finalFuckingVectorFUCK[i].distance;

        ui->tableWidgetColleges->insertRow(ui->tableWidgetColleges->rowCount());
        fill = ui->tableWidgetColleges->rowCount() - 1;
        ui->tableWidgetColleges->setItem(fill, 0, new QTableWidgetItem(finalFuckingVectorFUCK[i].beg));

        if (i == finalFuckingVectorFUCK.length())
        {
            ui->tableWidgetColleges->setItem(fill, 1, new QTableWidgetItem("End"));
        }
        else
        {
            //QString next = efficientRoute[i+1].name;
            ui->tableWidgetColleges->setItem(fill, 1, new QTableWidgetItem(finalFuckingVectorFUCK[i].end));
        }
        ui->tableWidgetColleges->setItem(fill, 2, new QTableWidgetItem(QString::number(finalFuckingVectorFUCK[i].distance)));
    }

    ui->tableWidgetColleges->insertRow(ui->tableWidgetColleges->rowCount());
    fill = ui->tableWidgetColleges->rowCount() - 1;
    ui->tableWidgetColleges->setItem(fill, 0, new QTableWidgetItem(""));
    ui->tableWidgetColleges->setItem(fill, 1, new QTableWidgetItem("Total Distance"));
    ui->tableWidgetColleges->setItem(fill, 2, new QTableWidgetItem(QString::number(totalDist)));

    ui->tableWidgetColleges->resizeColumnsToContents();
}

void collegeWidget::recursiveSort(QVector<College>&vC)
{ 
    College temp;

    while (!vC.empty())
    {
        double low = findRoute(vC, (int)vC.size());

        for (int i = 0; i < vC.size(); i++)
        {
            if (low == vC[i].distance)
            {
                temp.name = vC[i].name;
                temp.distance = vC[i].distance;
                efficientRoute.push_back(temp);

                vC.erase(vC.begin()+i);
            }
        }
    }
}

double collegeWidget::findRoute(QVector<College>&vC, int n)
{
    if (n == 1)
    {
        return vC[0].distance;
    }
    return qMin(vC[n-1].distance, findRoute(vC, n-1));
}

void collegeWidget::recursiveDist(QVector<Distances>&v)
{
    Distances temp;

    while (!v.empty())
    {
        double low = findRouteDist(v, (int)v.size());

        for (int i = 0; i < v.size(); i++)
        {
            if (low == v[i].distance)
            {
                temp.beg = v[i].beg;
                temp.end = v[i].end;
                temp.distance = v[i].distance;
                fastestDist.push_back(temp);

                v.erase(v.begin()+i);
            }
        }
    }
}
double collegeWidget::findRouteDist(QVector<Distances>&v, int n)
{
    if (n == 1)
    {
        return v[0].distance;
    }
    return qMin(v[n-1].distance, findRouteDist(v, n-1));
}

QVector<Distances> collegeWidget::testFunc()
{
    Distances dt;

    QVector<Distances>pushing;

    for (int i = 0; i < efficientRoute.length(); i++)
    {
        dt.beg = efficientRoute[i].name;
        if (i != efficientRoute.length() - 1)
        {
            QString next = efficientRoute[i+1].name;
            dt.end = next;
            dt.distance = efficientRoute[i].distance;
        }
        pushing.push_back(dt);
    }

    return pushing;
}

void collegeWidget::compareStore()
{
    colleges col;
    Distances tt;
    QVector<Distances>shortDist = testFunc();
    QVector<Distances>distancessss = col.getDistances();
    QVector<Distances>testingDist;

    for (int i = 0; i < shortDist.length(); i++)
    {
        for (int j = 0; j < distancessss.length(); j++)
        {
            if (shortDist[i].beg == distancessss[j].beg)
            {
                if (shortDist[i].end == distancessss[j].end)
                {
                    tt.beg = distancessss[j].beg;
                    tt.end = distancessss[j].end;
                    tt.distance = distancessss[j].distance;
                    routeDist.push_back(tt);
                }
            }
        }
    }
    qDebug() << "testing compare";

    //-----------------------------------------------------------
    QString dontGoBack;

    for (int i = 0; i < distancessss.length(); i++)
    {
        if (distancessss[i].beg == startCollege)
        {
            tt.beg = distancessss[i].beg;
            tt.end = distancessss[i].end;
            tt.distance = distancessss[i].distance;
            testingDist.push_back(tt);
        }
    }
    recursiveDist(testingDist);
    for (int i = 0; i < fastestDist.length(); i++)
    if (startCollege == fastestDist[i].beg)
    {
        tt.beg = fastestDist[i].beg;
        tt.end = fastestDist[i].end;
        tt.distance = fastestDist[i].distance;
        finalFuckingVectorFUCK.push_back(tt);
        startCollege = fastestDist[i].end;
        dontGoBack = tt.beg;
    }

    // 1st iteration --------------------------------------

    for (int i = 0; i < distancessss.length(); i++)
    {
        if (distancessss[i].beg == startCollege)
        {
            tt.beg = distancessss[i].beg;
            tt.end = distancessss[i].end;
            tt.distance = distancessss[i].distance;
            testingDist.push_back(tt);
        }
    }
    recursiveDist(testingDist);
    for (int i = 0; i < fastestDist.length(); i++)
    if (startCollege == fastestDist[i].beg && fastestDist[i].end != dontGoBack)
    {
        tt.beg = fastestDist[i].beg;
        tt.end = fastestDist[i].end;
        tt.distance = fastestDist[i].distance;
        finalFuckingVectorFUCK.push_back(tt);
        startCollege = fastestDist[i].end;
        dontGoBack = tt.beg;
    }

    // 2nd iteration --------------------------------------

    for (int i = 0; i < distancessss.length(); i++)
    {
        if (distancessss[i].beg == startCollege)
        {
            tt.beg = distancessss[i].beg;
            tt.end = distancessss[i].end;
            tt.distance = distancessss[i].distance;
            testingDist.push_back(tt);
        }
    }
    recursiveDist(testingDist);

    for (int i = 0; i < fastestDist.length(); i++)
    {
        if (startCollege == fastestDist[i].beg)
        {
            dontGoBack = fastestDist[i].end;
            if (containsCollege(dontGoBack))
            {
                int index = i;
                while(containsCollege(dontGoBack))
                {
                    dontGoBack = fastestDist[index].end;
                    index++;
                    qDebug() << dontGoBack;
                }
                if (fastestDist[i].end != finalFuckingVectorFUCK[0].beg)
                {
                    tt.beg = fastestDist[i].beg;
                    tt.end = fastestDist[index-1].end;
                    tt.distance = fastestDist[index-1].distance;
                    finalFuckingVectorFUCK.push_back(tt);
                    startCollege = tt.end;
                }
            }
        }
    }

    // 3rd iteration --------------------------------------

    for (int i = 0; i < distancessss.length(); i++)
    {
        if (distancessss[i].beg == startCollege)
        {
            tt.beg = distancessss[i].beg;
            tt.end = distancessss[i].end;
            tt.distance = distancessss[i].distance;
            testingDist.push_back(tt);
        }
    }
    recursiveDist(testingDist);

    qDebug() << dontGoBack;
    for (int i = 0; i < fastestDist.length(); i++)
    {
        if (startCollege == fastestDist[i].beg)
        {
            dontGoBack = fastestDist[i].end;
            if (containsCollege(dontGoBack))
            {
                int index = i;
                while(containsCollege(dontGoBack) || dontGoBack == finalFuckingVectorFUCK[0].beg)
                {
                    dontGoBack = fastestDist[index].end;
                    index++;
                    qDebug() << dontGoBack;
                }
                if (fastestDist[i].end != finalFuckingVectorFUCK[0].beg)
                {
                    tt.beg = fastestDist[i].beg;
                    tt.end = fastestDist[index-1].end;
                    tt.distance = fastestDist[index-1].distance;
                    finalFuckingVectorFUCK.push_back(tt);
                    startCollege = tt.end;
                }
            }
        }
    }

    // 4th iteration --------------------------------------

    for (int i = 0; i < distancessss.length(); i++)
    {
        if (distancessss[i].beg == startCollege)
        {
            tt.beg = distancessss[i].beg;
            tt.end = distancessss[i].end;
            tt.distance = distancessss[i].distance;
            testingDist.push_back(tt);
        }
    }
    recursiveDist(testingDist);

    qDebug() << dontGoBack;
    for (int i = 0; i < fastestDist.length(); i++)
    {
        if (startCollege == fastestDist[i].beg)
        {
            dontGoBack = fastestDist[i].end;
            if (containsCollege(dontGoBack))
            {
                int index = i;
                while(containsCollege(dontGoBack) || dontGoBack == finalFuckingVectorFUCK[0].beg)
                {
                    dontGoBack = fastestDist[index].end;
                    index++;
                }
                if (fastestDist[i].end != finalFuckingVectorFUCK[0].beg)
                {
                    tt.beg = fastestDist[i].beg;
                    tt.end = fastestDist[index-1].end;
                    tt.distance = fastestDist[index-1].distance;
                    finalFuckingVectorFUCK.push_back(tt);
                    startCollege = tt.end;
                }
            }
        }
    }

    // 5th iteration --------------------------------------

    for (int i = 0; i < distancessss.length(); i++)
    {
        if (distancessss[i].beg == startCollege)
        {
            tt.beg = distancessss[i].beg;
            tt.end = distancessss[i].end;
            tt.distance = distancessss[i].distance;
            testingDist.push_back(tt);
        }
    }
    recursiveDist(testingDist);

    qDebug() << dontGoBack;
    for (int i = 0; i < fastestDist.length(); i++)
    {
        if (startCollege == fastestDist[i].beg)
        {
            dontGoBack = fastestDist[i].end;
            if (containsCollege(dontGoBack))
            {
                int index = i;
                while(containsCollege(dontGoBack) || dontGoBack == finalFuckingVectorFUCK[0].beg)
                {
                    dontGoBack = fastestDist[index].end;
                    index++;
                }
                if (fastestDist[i].end != finalFuckingVectorFUCK[0].beg)
                {
                    tt.beg = fastestDist[i].beg;
                    tt.end = fastestDist[index-1].end;
                    tt.distance = fastestDist[index-1].distance;
                    finalFuckingVectorFUCK.push_back(tt);
                    startCollege = tt.end;
                }
            }
        }
    }

    // -----------------
    for (int i = 0; i < distancessss.length(); i++)
    {
        if (distancessss[i].beg == startCollege)
        {
            tt.beg = distancessss[i].beg;
            tt.end = distancessss[i].end;
            tt.distance = distancessss[i].distance;
            testingDist.push_back(tt);
        }
    }

    //qDebug() << "err";
    recursiveDist(testingDist);

    qDebug() << dontGoBack;
    for (int i = 0; i < fastestDist.length(); i++)
    {
        if (startCollege == fastestDist[i].beg)
        {
            qDebug() << "err" << fastestDist[i].end;
            dontGoBack = fastestDist[i].end;
            int index = i;
            if (containsCollege(dontGoBack))
            {
                while(containsCollege(dontGoBack) || dontGoBack == finalFuckingVectorFUCK[0].beg)
                {
                    dontGoBack = fastestDist[index].end;
                    index++;
                }
//                if (fastestDist[i].end != finalFuckingVectorFUCK[0].beg)
//                {
//                    tt.beg = fastestDist[i].beg;
//                    tt.end = fastestDist[index-1].end;
//                    tt.distance = fastestDist[index-1].distance;
//                    finalFuckingVectorFUCK.push_back(tt);
//                    startCollege = tt.end;
//                }
            }
            if (fastestDist[i].end != finalFuckingVectorFUCK[0].beg)
            {
                tt.beg = fastestDist[i].beg;
                tt.end = fastestDist[index].end;
                tt.distance = fastestDist[index].distance;
                finalFuckingVectorFUCK.push_back(tt);
                startCollege = tt.end;
            }
        }
    }

    // --------------------
    for (int i = 0; i < distancessss.length(); i++)
    {
        if (distancessss[i].beg == startCollege)
        {
            tt.beg = distancessss[i].beg;
            tt.end = distancessss[i].end;
            tt.distance = distancessss[i].distance;
            testingDist.push_back(tt);
        }
    }

    recursiveDist(testingDist);

    qDebug() << dontGoBack;
    for (int i = 0; i < fastestDist.length(); i++)
    {
        if (startCollege == fastestDist[i].beg)
        {
            dontGoBack = fastestDist[i].end;
            int index = i;
            if (containsCollege(dontGoBack))
            {
                while(containsCollege(dontGoBack) || dontGoBack == finalFuckingVectorFUCK[0].beg)
                {
                    dontGoBack = fastestDist[index].end;
                    index++;
                }
            }
            if (fastestDist[i].end != finalFuckingVectorFUCK[0].beg)
            {
                tt.beg = fastestDist[i].beg;
                tt.end = fastestDist[index-1].end;
                tt.distance = fastestDist[index-1].distance;
                finalFuckingVectorFUCK.push_back(tt);
                startCollege = tt.end;
            }
        }
    }
    // ----------------------
    for (int i = 0; i < distancessss.length(); i++)
    {
        if (distancessss[i].beg == startCollege)
        {
            tt.beg = distancessss[i].beg;
            tt.end = distancessss[i].end;
            tt.distance = distancessss[i].distance;
            testingDist.push_back(tt);
        }
    }

    recursiveDist(testingDist);
//    for (int i = 0; i < fastestDist.length(); i++)
//    {
//        qDebug() << fastestDist[i].beg << " " << fastestDist[i].end << " " << fastestDist[i].distance;
//    }

    qDebug() << dontGoBack;
    for (int i = 0; i < fastestDist.length(); i++)
    {
        if (startCollege == fastestDist[i].beg)
        {
            qDebug() << "err" << fastestDist[i].end;
            dontGoBack = fastestDist[i].end;
            int index = i;
            if (containsCollege(dontGoBack))
            {
                while(containsCollege(dontGoBack) || dontGoBack == finalFuckingVectorFUCK[0].beg)
                {
                    dontGoBack = fastestDist[index].end;
                    index++;
                }
            }
            if (fastestDist[i].end != finalFuckingVectorFUCK[0].beg)
            {
                tt.beg = fastestDist[i].beg;
                if (containsCollege(dontGoBack))
                {
                    index -=1;
                }
                tt.end = fastestDist[index].end;
                tt.distance = fastestDist[index].distance;
                finalFuckingVectorFUCK.push_back(tt);
                startCollege = tt.end;
            }
        }
    }
    //-------------------

    for (int i = 0; i < distancessss.length(); i++)
    {
        if (distancessss[i].beg == startCollege)
        {
            tt.beg = distancessss[i].beg;
            tt.end = distancessss[i].end;
            tt.distance = distancessss[i].distance;
            testingDist.push_back(tt);
        }
    }

    recursiveDist(testingDist);
    for (int i = 0; i < fastestDist.length(); i++)
    {
        qDebug() << fastestDist[i].beg << " " << fastestDist[i].end << " " << fastestDist[i].distance;
    }

    qDebug() << dontGoBack;
    for (int i = 0; i < fastestDist.length(); i++)
    {
        if (startCollege == fastestDist[i].beg)
        {
            qDebug() << "err" << fastestDist[i].end;
            dontGoBack = fastestDist[i].end;
            int index = i;
            if (containsCollege(dontGoBack))
            {
                while(containsCollege(dontGoBack) || dontGoBack == finalFuckingVectorFUCK[0].beg)
                {
                    dontGoBack = fastestDist[index].end;
                    index++;
                }
//                if (fastestDist[i].end != finalFuckingVectorFUCK[0].beg)
//                {
//                    tt.beg = fastestDist[i].beg;
//                    tt.end = fastestDist[index-1].end;
//                    tt.distance = fastestDist[index-1].distance;
//                    finalFuckingVectorFUCK.push_back(tt);
//                    startCollege = tt.end;
//                }
            }
            if (fastestDist[i].end != finalFuckingVectorFUCK[0].beg)
            {
                tt.beg = fastestDist[i].beg;
                tt.end = fastestDist[index-1].end;
                tt.distance = fastestDist[index-1].distance;
                finalFuckingVectorFUCK.push_back(tt);
                startCollege = tt.end;
            }
        }
    }

    qDebug() << "\ntesting fastest";
    for (int i = 0; i < finalFuckingVectorFUCK.length(); i++)
    {
        qDebug() << finalFuckingVectorFUCK[i].beg << " " << finalFuckingVectorFUCK[i].end << " " << finalFuckingVectorFUCK[i].distance;
    }
//    for (int i = 0; i < fastestDist.length(); i++)
//    {
//        qDebug() << fastestDist[i].beg << " " << fastestDist[i].end << " " << fastestDist[i].distance;
//    }

}

bool collegeWidget::containsCollege(QString n)
{
    QString temp = n;

    for (int i = 0; i < finalFuckingVectorFUCK.length(); i++)
    {
        if (temp == finalFuckingVectorFUCK.at(i).end)
        {
            return true;
        }
    }
    return false;
}

void collegeWidget::on_pushButtonClear_clicked()
{
    ui->tableWidgetColleges->clear();
    //QVector<Distances> pp = testFunc();
    //compareStore();
}
