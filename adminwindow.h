#ifndef ADMINWINDOW_H
#define ADMINWINDOW_H

#include <QtSql>
#include <QDialog>
#include <QtDebug>
#include <QFileInfo>
#include <QSqlQuery>
#include <QTableView>
#include <QMessageBox>
#include<QSqlDatabase>
#include "Database.h"
namespace Ui {class AdminWindow;}
class AdminWindow : public QDialog
{
    Q_OBJECT

public:
    explicit AdminWindow(QWidget *parent = nullptr);
    ~AdminWindow();
public:
    QSqlDatabase mySqLiteDb;
    void InitializeTableView(QTableView *tableView);
    bool IsAnyEmptyField();
private slots:
    void on_pushButton_BackToMainWindow_clicked();

    void on_pushButton_AddNewSouvenir_clicked();

    void on_pushButton_DeleteOldSouvenir_clicked();

    void on_pushButton_DisplayCurrentSouvenirs_clicked();

    void on_pushButton_UpdateSouvenir_clicked();

    void on_tableViewCurrentTraditionalSouvenirs_activated(const QModelIndex &index);

private:
    Ui::AdminWindow *ui;
    QSqlDatabase db;
    Database database;
};

#endif // ADMINWINDOW_H