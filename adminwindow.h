#ifndef ADMINWINDOW_H
#define ADMINWINDOW_H

#include <QtSql>
#include <QDialog>
#include <QtDebug>
#include <QFileInfo>
#include <QSqlQuery>
#include <QMessageBox>
#include<QSqlDatabase>
namespace Ui {class AdminWindow;}
class AdminWindow : public QDialog
{
    Q_OBJECT

public:
    explicit AdminWindow(QWidget *parent = nullptr);
    ~AdminWindow();
public:
    QSqlDatabase mySqLiteDb;
    void conClose();
    bool conOpen();
private slots:
    void on_pushButton_BackToMainWindow_clicked();
    void on_pushButton_AddNewSouvenir_clicked();

    void on_pushButton_DeleteOldSouvenir_clicked();

    void on_pushButton_DisplayCurrentSouvenirs_clicked();

    void on_pushButton__UpdateSouvenir_clicked();

private:
    Ui::AdminWindow *ui;
};

#endif // ADMINWINDOW_H
