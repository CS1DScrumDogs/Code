#include "customtour.h"
#include "ui_customtour.h"
#include "collegewidget.h"

customTour::customTour(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::customTour)
{
    count = 0;
    numCollege = 10;
    ui->setupUi(this);
    setWindowTitle("Custom Tour");

    QVector<College> campusList = testC.getColleges();
    ui->comboBoxNames->addItem("Select College");
    for (int i = 0; i < campusList.length(); i++)
    {
        ui->comboBoxNames->addItem(campusList[i].name);
    }
}
// -----------------------------------------------------
customTour::~customTour()
{
    delete ui;
}
// -----------------------------------------------------
void customTour::on_pushButtonNum_clicked()
{
    QString n = "Saved";
    numCollege = ui->spinBoxNum->value();
    QMessageBox::information(this, n, "Number of college's saved.");

    ui->pushButtonNum->setEnabled(false);
}
// -----------------------------------------------------
void customTour::on_pushButtonNames_clicked()
{
    bool notAdded = true;
    bool lessThen = true;
    Distances dd;

    qDebug() << count << " " << numCollege;
    collegeName = ui->comboBoxNames->currentText();

    for (int i = 0; i < colleges.length(); i++)
    {
        if (collegeName == colleges[i].beg)
        {
            notAdded = false;
        }
    }

    if (count >= numCollege)
    {
        lessThen = false;
    }
    if ((notAdded && lessThen) && collegeName != "Select College")
    {
        ui->listWidgetTour->addItem(collegeName);
        dd.beg = collegeName;
        dd.distance = 0;
        colleges.push_back(dd);
        count++;
        QMessageBox::information(this, "Saved", collegeName + " Saved!");
    }
    else
    {
        if (!lessThen)
        {
            QMessageBox::warning(this, tr("Error!"), "College exceeds entered limit!");
        }
        else if(collegeName == "Select College")
        {
            QMessageBox::warning(this, tr("Error!"), collegeName + " not Valid!");
        }
        else
        {
            QMessageBox::warning(this, tr("Error!"), collegeName + " already exists!");
        }
    }
}
// -----------------------------------------------------
void customTour::on_pushButtonTour_clicked()
{
    for(int i = 0; i < colleges.length(); i++)
    qDebug() << colleges[i].beg << " " << colleges[i].end << " " << colleges[i].distance;
    passColleges();
    collegeWidget cw(this);
    cw.exec();
}
// -----------------------------------------------------
// sets the start college
void customTour::on_pushButtonStart_clicked()
{
    Distances dd;
    startCollege = ui->comboBoxNames->currentText();
    if (count == 0 && startCollege != "Select College")
    {
        dd.beg = startCollege;
        dd.distance = 0;
        colleges.push_back(dd);
        ui->listWidgetTour->addItem(startCollege);
        count++;
        ui->pushButtonStart->setEnabled(false);
        ui->pushButtonNames->setEnabled(true);
    }
}
// -----------------------------------------------------
// used to pass the vector to collegewidget
void customTour::passColleges()
{
    collegeWidget temp;
    temp.setRoute(colleges, startCollege, numCollege);
}
