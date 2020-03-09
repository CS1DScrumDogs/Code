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
    void showColleges();
    void recursiveSort(QVector<College>&vC);
    College returnUci();
    College returnAsu();

private slots:
    void on_pushButtonClear_clicked();

private:
    Ui::collegeWidget *ui;
    colleges co;
    QVector<College>efficientRoute;
};

#endif // COLLEGEWIDGET_H
