#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->comboBox->addItem("Select College");
    ui->comboBox->addItem("California State University, Fullerton");
    ui->comboBox->addItem("Massachusetts Institute of Technology (MIT)");
    ui->comboBox->addItem("Northwestern");
    ui->comboBox->addItem("Ohio State University");
    ui->comboBox->addItem("University of  Michigan");
    ui->comboBox->addItem("University of California, Irvine (UCI)");
    ui->comboBox->addItem("University of California, Los Angeles (UCLA)");
    ui->comboBox->addItem("University of Oregon");
    ui->comboBox->addItem("University of Texas");
    ui->comboBox->addItem("University of the Pacific");
    ui->comboBox->addItem("University of Wisconsin");
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    QSqlDatabase sqlitedb = QSqlDatabase::addDatabase("QSQLITE");
    sqlitedb.setDatabaseName("/Users/alvarohernandez/ScrumDogs.db");
    if(!sqlitedb.open()) {

        QMessageBox::information(this, "Not Connected", "Database Not connected");
    }
    else {

        QMessageBox::information(this, "Connected", "Database Connected Successfully");
    }

}

void MainWindow::on_showColeges_clicked()
{
    QSqlQueryModel *modal = new QSqlQueryModel();

    QSqlDatabase sqlitedb = QSqlDatabase::addDatabase("QSQLITE");
    sqlitedb.setDatabaseName("/Users/alvarohernandez/ScrumDogs.db");
    sqlitedb.open();

    QSqlQuery *test = new QSqlQuery(sqlitedb);
    test->prepare("select * from saddleback");

    test->exec();
    modal->setQuery(*test);
    ui->tableView->setModel(modal);

    sqlitedb.close();
    qDebug()<<(modal->rowCount());

}
