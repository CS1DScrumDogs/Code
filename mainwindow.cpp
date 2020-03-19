#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "collegewidget.h"
#include "customtour.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->comboBoxSouvenirsFColleges->addItem("Select College");
    ui->comboBoxSouvenirsFColleges->addItem("California State University, Fullerton");
    ui->comboBoxSouvenirsFColleges->addItem("Massachusetts Institute of Technology (MIT)");
    ui->comboBoxSouvenirsFColleges->addItem("Northwestern");
    ui->comboBoxSouvenirsFColleges->addItem("Ohio State University");
    ui->comboBoxSouvenirsFColleges->addItem("University of  Michigan");
    ui->comboBoxSouvenirsFColleges->addItem("University of California, Irvine (UCI)");
    ui->comboBoxSouvenirsFColleges->addItem("University of California, Los Angeles (UCLA)");
    ui->comboBoxSouvenirsFColleges->addItem("University of Oregon");
    ui->comboBoxSouvenirsFColleges->addItem("University of Texas");
    ui->comboBoxSouvenirsFColleges->addItem("University of the Pacific");
    ui->comboBoxSouvenirsFColleges->addItem("University of Wisconsin");
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    if(!myDb.conOpen())
    {
        QMessageBox::information(this, "Not Connected", "Database Not connected");
    }
    else
    {
        QMessageBox::information(this, "Connected", "Database Connected Successfully");
    }
}

void MainWindow::on_pushButton_Load_clicked()
{
    QSqlQueryModel *modal = new QSqlQueryModel();
    myDb.conOpen();

    QSqlQuery *qry = new QSqlQuery(mySqLiteDb);
    qry->prepare("SELECT * FROM saddleback WHERE startingCollege=\"Saddleback College\"");
    qry->exec();
    modal->setQuery(*qry);
    ui->tableViewSaddleback->setModel(modal);
    ui->tableViewSaddleback->resizeColumnsToContents();
    myDb.conClose();
    qDebug()<<(modal->rowCount());
}

void MainWindow::on_pushButton_Login_clicked()
{
    QString username = ui->lineEdit_UserName->text();
    QString password = ui->lineEdit_Password->text();
    if(username == "test" && password == "test")
    {
      QMessageBox::information(this, "Login", "Username and password is correct");
        hide();
        admin = new AdminWindow(this);
        admin->show();
    }
    else
    {
     QMessageBox::warning(this, "Login", "Username and password is not correct");

    }
}

void MainWindow::on_pushButton_ListSouvenirs_clicked()
{
    QSqlQueryModel *modal = new QSqlQueryModel();
    myDb.conOpen();

    QSqlQuery *qry = new QSqlQuery(mySqLiteDb);
    QString currentText = ui->comboBoxSouvenirsFColleges->currentText();
    if(currentText =="California State University, Fullerton")
    {
         qry->prepare("SELECT traditionalSouvenir, cost FROM souvenirs WHERE college=\"California State University, Fullerton\"");
    }
    else if(currentText =="Massachusetts Institute of Technology (MIT)")
    {
        qry->prepare("SELECT traditionalSouvenir, cost FROM souvenirs WHERE college=\"Massachusetts Institute of Technology (MIT)\"");
    }
    else if(currentText =="Northwestern")
    {
        qry->prepare("SELECT traditionalSouvenir, cost FROM souvenirs WHERE college=\"Northwestern\"");
    }
    else if(currentText =="Ohio State University")
    {
        qry->prepare("SELECT traditionalSouvenir, cost FROM souvenirs WHERE college=\"Ohio State University\"");
    }
    else if(currentText =="University of  Michigan")
    {
        qry->prepare("SELECT traditionalSouvenir, cost FROM souvenirs WHERE college=\"University of  Michigan\"");
    }
    else if(currentText =="University of California, Irvine (UCI)")
    {
        qry->prepare("SELECT traditionalSouvenir, cost FROM souvenirs WHERE college=\"University of California, Irvine (UCI)\"");
    }
    else if(currentText =="University of California, Los Angeles (UCLA)")
    {
        qry->prepare("SELECT traditionalSouvenir, cost FROM souvenirs WHERE college=\"University of California, Los Angeles (UCLA)\"");
    }
    else if(currentText =="University of Oregon")
    {
        qry->prepare("SELECT traditionalSouvenir, cost FROM souvenirs WHERE college=\"University of Oregon\"");
    }
    else if(currentText =="University of Texas")
    {
        qry->prepare("SELECT traditionalSouvenir, cost FROM souvenirs WHERE college=\"University of Texas\"");
    }
    else if(currentText =="University of the Pacific")
    {
        qry->prepare("SELECT traditionalSouvenir, cost FROM souvenirs WHERE college=\"University of the Pacific\"");
    }
    else if(currentText =="University of Wisconsin")
    {
        qry->prepare("SELECT traditionalSouvenir, cost FROM souvenirs WHERE college=\"University of Wisconsin\"");
    }

    qry->exec();
    modal->setQuery(*qry);
    ui->tableViewSaddleback->setModel(modal);
    ui->tableViewSaddleback->resizeColumnsToContents();
    myDb.conClose();
    qDebug()<<(modal->rowCount());
}

void MainWindow::on_pushButton_UCI_clicked()
{
    collegeWidget cw(this);
    College start;
    start.name = "University of California, Irvine (UCI)";
    start.distance = 16;

    cw.initializeStart(start);
    cw.exec();
}

void MainWindow::on_pushButton_ACU_clicked()
{
    collegeWidget cw(this);
    College start;
    start.name = "Arizona State University";
    start.distance = 379;

    cw.initializeStart(start);
    cw.exec();
}

void MainWindow::on_pushButton_CustomTrip_clicked()
{
    customTour cw(this);
    qDebug() << isActiveWindow();
    cw.exec();



    //ctWid.showMaximized();
}
