#include "adminwindow.h"
#include "ui_adminwindow.h"
#include "mainwindow.h"
AdminWindow::AdminWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AdminWindow)
{
    ui->setupUi(this);
}

AdminWindow::~AdminWindow()
{
    delete ui;
}

void AdminWindow::on_pushButton_BackToMainWindow_clicked()
{
    MainWindow *newmain= new MainWindow();
    newmain->show();
}
