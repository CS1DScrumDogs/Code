#include "mainwindow.h"
#include "ui_mainwindow.h"

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

void MainWindow::conClose()
{
    mySqLiteDb.close();
    mySqLiteDb.removeDatabase(QSqlDatabase::defaultConnection);
}

bool MainWindow::conOpen()
{
    mySqLiteDb = QSqlDatabase::addDatabase("QSQLITE");
    mySqLiteDb.setDatabaseName("C:/sqlite3/ScrumDogs.db");
    if(!mySqLiteDb.open())
    {
        qDebug() << ("Database Not connected");
        return false;
    }
    else
    {
        qDebug() << ("Database Connected Successfully");
        return true;
    }
}

void MainWindow::on_pushButton_clicked()
{
    if(!conOpen())
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
    conOpen();

    QSqlQuery *qry = new QSqlQuery(mySqLiteDb);
    qry->prepare("SELECT * FROM saddleback WHERE startingCollege=\"Saddleback College\"");
    qry->exec();
    modal->setQuery(*qry);
    ui->tableViewSaddleback->setModel(modal);
    ui->tableViewSaddleback->resizeColumnsToContents();
    conClose();
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
    else {
     QMessageBox::warning(this, "Login", "Username and password is not correct");

    }
}

void MainWindow::on_pushButton_ListSouvenirs_clicked()
{
    QSqlQueryModel *modal = new QSqlQueryModel();
    conOpen();

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

    qry->exec();
    modal->setQuery(*qry);
    ui->tableViewSouvenirs->setModel(modal);
    ui->tableViewSouvenirs->resizeColumnsToContents();
    conClose();
    qDebug()<<(modal->rowCount());
}
