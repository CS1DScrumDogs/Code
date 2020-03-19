#ifndef CUSTOMTOUR_H
#define CUSTOMTOUR_H

#include <QDialog>
#include <QWidget>
#include <QSpinBox>
#include "colleges.h"


namespace Ui {
class customTour;
}

class customTour : public QDialog
{
    Q_OBJECT

public:
    explicit customTour(QWidget *parent = nullptr);
    ~customTour();

private slots:
    void on_pushButtonNum_clicked();

    void on_pushButtonNames_clicked();

    void on_pushButtonTour_clicked();

    void on_pushButtonStart_clicked();

private:
    Ui::customTour *ui;
    int numCollege;
    int count;
    QString collegeName;
    QString startCollege;
    colleges testC;
    QVector<Distances> colleges;

};

#endif // CUSTOMTOUR_H
