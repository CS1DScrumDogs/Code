#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtSql>
#include<QSqlDatabase>
#include<QMessageBox>
#include <QSqlQuery>

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
    QSqlDatabase mySqLiteDb;
    void conClose();
    bool conOpen();
private slots:
    void on_pushButton_clicked();

    void on_pushButton_Load_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
