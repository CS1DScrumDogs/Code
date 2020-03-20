#include "collegewidget.h"
#include "ui_collegewidget.h"

collegeWidget::collegeWidget(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::collegeWidget)
{
    QStringList names;
    maxColleges = 10;
    names << "Begin" << "End" << "Distance";
    ui->setupUi(this);
    setWindowTitle("College Tour");
    ui->tableWidgetColleges->setColumnCount(3);
    ui->tableWidgetColleges->setHorizontalHeaderLabels(names);
}
// -----------------------------------------------------
collegeWidget::~collegeWidget()
{
    delete ui;
}
// -----------------------------------------------------
void collegeWidget::initializeStart(College str)
{
    startCollege = str.name;
    if (startCollege == "Arizona State University")
    {
        ui->push_EnterNum->setEnabled(true);
        ui->spinBox_NumCol->setEnabled(true);
    }
}
// -----------------------------------------------------
void collegeWidget::showColleges()
{
    int fill;
    double totalDist = 0.0;

    if (customPassed)
    {
        getCustomTour(routeDist, startCollege, maxColleges);
    }
    else
    {
        compareStore();
    }

    for (int i = 0; i < finalRoute.length(); i++)
    {
        totalDist += finalRoute[i].distance;

        ui->tableWidgetColleges->insertRow(ui->tableWidgetColleges->rowCount());
        fill = ui->tableWidgetColleges->rowCount() - 1;
        ui->tableWidgetColleges->setItem(fill, 0, new QTableWidgetItem(finalRoute[i].beg));

        if (i == finalRoute.length())
        {
            ui->tableWidgetColleges->setItem(fill, 1, new QTableWidgetItem("End"));
        }
        else
        {
            //QString next = efficientRoute[i+1].name;
            ui->tableWidgetColleges->setItem(fill, 1, new QTableWidgetItem(finalRoute[i].end));
        }
        ui->tableWidgetColleges->setItem(fill, 2, new QTableWidgetItem(QString::number(finalRoute[i].distance)));
    }

    ui->tableWidgetColleges->insertRow(ui->tableWidgetColleges->rowCount());
    fill = ui->tableWidgetColleges->rowCount() - 1;
    ui->tableWidgetColleges->setItem(fill, 0, new QTableWidgetItem(""));
    ui->tableWidgetColleges->setItem(fill, 1, new QTableWidgetItem("Total Distance"));
    ui->tableWidgetColleges->setItem(fill, 2, new QTableWidgetItem(QString::number(totalDist)));

    ui->tableWidgetColleges->resizeColumnsToContents();
}
// -----------------------------------------------------
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
// -----------------------------------------------------
double collegeWidget::findRouteDist(QVector<Distances>&v, int n)
{
    if (n == 1)
    {
        return v[0].distance;
    }
    return qMin(v[n-1].distance, findRouteDist(v, n-1));
}
// -----------------------------------------------------
void collegeWidget::compareStore()
{
    colleges col;
    Distances tt;
    QString dontGoBack;
    QVector<Distances>distancessss = col.getDistances();
    QVector<Distances>testingDist;

    // -----------------------------------------------------
    // inserts the staring college
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
            tt.beg = fastestDist[i].beg;
            tt.end = fastestDist[i].end;
            tt.distance = fastestDist[i].distance;
            finalRoute.push_back(tt);
            startCollege = tt.end;
            dontGoBack = tt.beg;
        }
    }
    // -----------------------------------------------------
    // inserts the following colleges in the most efficeint route
    while (finalRoute.length() < maxColleges)
    {
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
                int index = i;
                if (containsCollege(dontGoBack))
                {
                    while(containsCollege(dontGoBack)
                         || dontGoBack == finalRoute[0].beg)
                    {
                        dontGoBack = fastestDist[index].end;
                        index++;
                    }
                }
                if (fastestDist[i].end != finalRoute[0].beg)
                {
                    if (index > i)
                    {
                        tt.beg = fastestDist[i].beg;
                        tt.end = fastestDist[index-1].end;
                        tt.distance = fastestDist[index-1].distance;
                    }
                    else
                    {
                        tt.beg = fastestDist[i].beg;
                        tt.end = fastestDist[i].end;
                        tt.distance = fastestDist[i].distance;
                    }
                    finalRoute.push_back(tt);
                    startCollege = tt.end;
                }
            }
        }
    }
}
// -----------------------------------------------------
// Checks if finalRoute already contains a college that
// has already been inserted
bool collegeWidget::containsCollege(QString n)
{
    QString temp = n;

    for (int i = 0; i < finalRoute.length(); i++)
    {
        if (temp == finalRoute.at(i).end)
        {
            return true;
        }
    }
    return false;
}
// -----------------------------------------------------
void collegeWidget::getCustomTour(QVector<Distances>v, QString s, int n)
{
    maxColleges = n;
    startCollege = s;
    colleges col;
    QString dontgoback;
    QVector<Distances>temp = v;
    QVector<Distances>distancessss = col.getDistances();
    QVector<Distances>testingDist;
    Distances distObj;

    int index;
    for (int i = 0; i < temp.length() - 1; i++)
    {
        distObj.beg = startCollege;
        if (i < temp.length() - 1)
        {
            distObj.end = temp[i+1].beg;
        }
        distObj.distance = 0;
        startCollege = distObj.beg;
        temp.replace(i,distObj);
        index = i;
    }
    temp.removeAt(index+1);
    //----------------------------------------
    for (int i = 0; i < distancessss.length(); i++)
    {
        if (distancessss[i].beg == startCollege)
        {
            distObj.beg = distancessss[i].beg;
            distObj.end = distancessss[i].end;
            distObj.distance = distancessss[i].distance;
            testingDist.push_back(distObj);
        }
    }
    //----------------------------------------
    for (int i = 0; i < temp.length(); i++)
    {
        for (int j = 0; j < testingDist.length(); j++)
        {
            if (temp[i].beg == testingDist[j].beg && temp[i].end == testingDist[j].end)
            {
                distObj.beg = testingDist[j].beg;
                distObj.end = testingDist[j].end;
                distObj.distance = testingDist[j].distance;
                temp.replace(i,distObj);
            }
        }
    }

    recursiveDist(temp);
    //---------------------------------------------
    distObj.beg = fastestDist[0].beg;
    distObj.end = fastestDist[0].end;
    distObj.distance = fastestDist[0].distance;

    customRoute.push_back(distObj);
    startCollege = distObj.end;
    fastestDist.removeAt(0);
    //----------------------------------------------------------------------------------------------------
    temp = fastestDist;
    fastestDist.clear();
    qDebug() << "temp test";
    for(int i = 0; i < temp.length(); i++)
    qDebug() << temp[i].beg << " " << temp[i].end << " " << temp[i].distance;


    while (customRoute.length() < maxColleges - 1)
    {
        for (int i = 0; i < temp.length(); i++)
        {
            distObj.beg = startCollege;
            distObj.end = temp[i].end;
            distObj.distance = 0;
            temp.replace(i,distObj);
        }
        //--------
        for (int i = 0; i < distancessss.length(); i++)
        {
            if (distancessss[i].beg == startCollege)
            {
                distObj.beg = distancessss[i].beg;
                distObj.end = distancessss[i].end;
                distObj.distance = distancessss[i].distance;
                testingDist.push_back(distObj);
            }
        }
        //---------
        for (int i = 0; i < temp.length(); i++)
        {
            for (int j = 0; j < testingDist.length(); j++)
            {
                if (temp[i].beg == testingDist[j].beg && temp[i].end == testingDist[j].end)
                {
                    distObj.beg = testingDist[j].beg;
                    distObj.end = testingDist[j].end;
                    distObj.distance = testingDist[j].distance;
                    temp.replace(i,distObj);
                }
            }
        }
        recursiveDist(temp);
        //---------------
        distObj.beg = fastestDist[0].beg;
        distObj.end = fastestDist[0].end;
        distObj.distance = fastestDist[0].distance;

        customRoute.push_back(distObj);
        startCollege = distObj.end;
        fastestDist.removeAt(0);

        temp = fastestDist;
        fastestDist.clear();
    }
    //------------------------------------------------------------------------------

    finalRoute = customRoute;

//    qDebug() << "custom test";
//    for(int i = 0; i < finalRoute.length(); i++)
//    qDebug() << finalRoute[i].beg << " " << finalRoute[i].end << " " << finalRoute[i].distance;

}
void collegeWidget::setRoute(QVector<Distances>v, QString s, int n)
{
    maxColleges = n;
    startCollege = s;
    routeDist = v;
    customPassed = true;
}
QVector<Distances> collegeWidget::getRoute()
{
    return finalRoute;
}
// -----------------------------------------------------
void collegeWidget::on_pushButtonClear_clicked()
{
    ui->tableWidgetColleges->clear();
    ui->tableWidgetColleges->setShowGrid(false);

}
// -----------------------------------------------------
void collegeWidget::on_push_EnterNum_clicked()
{
    maxColleges = ui->spinBox_NumCol->value();
    if (maxColleges == 0)
    {
        maxColleges = 10;
    }
    qDebug() << "testing max: " << maxColleges;
}
// -----------------------------------------------------
void collegeWidget::on_pushButtonTour_clicked()
{
    showColleges();
    ui->pushButtonTour->setEnabled(false);
}
