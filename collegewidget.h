#ifndef COLLEGEWIDGET_H
#define COLLEGEWIDGET_H

#include <QDialog>
#include <QSpinBox>
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
    void showColleges();
    void initializeStart(College str);
    void recursiveDist(QVector<Distances>&v);
    double findRouteDist(QVector<Distances>&v, int n);

    bool containsCollege(QString n);
    void compareStore();
    QVector<Distances>testFunc();
    void printColleges(bool done);

private slots:
    void on_pushButtonClear_clicked();
    void on_push_EnterNum_clicked();

private:
    Ui::collegeWidget *ui;
    QString startCollege;
    int maxColleges;
    colleges co;
    QVector<Distances> routeDist;
    QVector<Distances> fastestDist;
    QVector<Distances> finalRoute;
};

#endif // COLLEGEWIDGET_H
