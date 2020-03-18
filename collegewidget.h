#ifndef COLLEGEWIDGET_H
#define COLLEGEWIDGET_H

#include <QDialog>
#include "colleges.h"

namespace Ui {
class collegeWidget;
}

class collegeWidget : public QDialog
{
    Q_OBJECT

public:
    explicit collegeWidget(QWidget *parent = nullptr);
    ~collegeWidget();
    void showColleges(College str);
    void recursiveSort(QVector<College>&vC);
    double findRoute(QVector<College>&vC, int n);


    void recursiveDist(QVector<Distances>&v);
    double findRouteDist(QVector<Distances>&v, int n);

    bool containsCollege(QString n);
    void compareStore();
    QVector<Distances>testFunc();

private slots:
    void on_pushButtonClear_clicked();

private:
    Ui::collegeWidget *ui;
    QString startCollege;
    colleges co;
    QVector<College>efficientRoute;
    QVector<College>route;
    QVector<Distances> routeDist;
    QVector<Distances> fastestDist;
    QVector<Distances> finalFuckingVectorFUCK;
};

#endif // COLLEGEWIDGET_H
