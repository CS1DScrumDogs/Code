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

void collegeWidget::showColleges()
{
    QVector<College>temp;
    QVector<Distances>tempD;
//    tempD = co.getDistances();
    temp = co.getColleges();
    int fill;


//    for (int i = 0; i < temp.length(); i++)
//    {
//        tempD[i].beg = temp[i].name;
//        if (i == 9)
//        {
//            tempD[i].end = "End";
//        }
//        else
//        {
//            tempD[i].end = temp[i+1].name;
//        }

//        tempD[i].distance = temp[i].distance;
//    }

//    qDebug() << "Testing vector distance";
//    for (int i = 0; i < tempD.size(); i++)
//    {
//        qDebug() << tempD[i].beg << " " << tempD.end() << " " << tempD[i].distance;
//    }


    recursiveSort(temp);

    for (int i = 0; i < temp.length(); i++)
    {

        ui->tableWidgetColleges->insertRow(ui->tableWidgetColleges->rowCount());
        fill = ui->tableWidgetColleges->rowCount() - 1;
        ui->tableWidgetColleges->setItem(fill, 0, new QTableWidgetItem(temp[i].name));

        if (i == 9)
        {
            ui->tableWidgetColleges->setItem(fill, 1, new QTableWidgetItem("End"));
        }
        else
        {
            QString next = temp[i+1].name;
            ui->tableWidgetColleges->setItem(fill, 1, new QTableWidgetItem(next));
        }
        ui->tableWidgetColleges->setItem(fill, 2, new QTableWidgetItem(QString::number(temp[i].distance)));
    }
    ui->tableWidgetColleges->resizeColumnsToContents();
}

void collegeWidget::recursiveSort(QVector<College>&vC)
{ 
    bool passed = true;
    College temp;

    for (int i = 0; i < vC.length() && passed; i++)
    {
        passed = false;
        for (int j = 0; j < vC.length() - 1; j++)
        {
            if (vC[j].distance > vC[j+1].distance)
            {
                temp.name = vC[j].name;
                temp.distance = vC[j].distance;

                vC[j].name =  vC[j+1].name;
                vC[j].distance = vC[j+1].distance;

                vC[j+1].name = temp.name;
                vC[j+1].distance = temp.distance;

                passed = true;
            }
        }
    }

    qDebug() << "Testing vector recursive";
    for (int i = 0; i < vC.size(); i++)
    {
        qDebug() << vC[i].name << " " << vC[i].distance;
    }





//    for (int i = 0; i < temp.size(); i++)
//    {
//        ui->tableWidgetColleges->insertRow(ui->tableWidgetColleges->rowCount());
//        fill = ui->tableWidgetColleges->rowCount() - 1;
//        beg = temp[i].name;
//        end = temp[i + 1].name;
//        if (i == 0)
//        {
//            ui->tableWidgetColleges->setItem(fill, 0, new QTableWidgetItem("Saddleback"));
//        }
//        else
//        {
//            ui->tableWidgetColleges->setItem(fill, 0, new QTableWidgetItem(temp[i].name));
//        }
//        ui->tableWidgetColleges->setItem(fill, 0, new QTableWidgetItem(temp[i].name));
//        ui->tableWidgetColleges->setItem(fill, 1, new QTableWidgetItem(temp[i].name));
//        ui->tableWidgetColleges->setItem(fill, 2, new QTableWidgetItem(QString::number(temp[i].distance)));
//    }
}
College collegeWidget::returnUci()
{
    College tempC;
    QVector<College>temp;
    QString s = "University of California, Irvine (UCI)";
    temp = co.getColleges();
    for (int i = 0; i < temp.size(); i++)
    {
        if (s == temp[i].name)
        {
            tempC.name = temp[i].name;
            tempC.distance = temp[i].distance;
        }
    }

    return tempC;
}
College collegeWidget::returnAsu()
{

}


void collegeWidget::on_pushButtonClear_clicked()
{
    ui->tableWidgetColleges->clear();
}
