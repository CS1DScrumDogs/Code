#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtSql>
#include <QSqlDatabase>
#include <QMessageBox>
#include <QSqlQuery>
#include "adminwindow.h"
#include "database.h"
#include "colleges.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
public:
    Database myDb;
    QSqlDatabase mySqLiteDb;
    colleges college;

private slots:
    void on_pushButton_clicked();

    void on_pushButton_Load_clicked();

    void on_pushButton_Login_clicked();

    void on_pushButton_ListSouvenirs_clicked();

    void on_pushButton_UCI_clicked();

    void on_pushButton_ACU_clicked();

    void on_pushButton_CustomTrip_clicked();

private:
    Ui::MainWindow *ui;
    AdminWindow *admin;
};
#endif // MAINWINDOW_H
