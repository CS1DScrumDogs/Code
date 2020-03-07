#include "adminwindow.h"
#include "ui_adminwindow.h"
#include "mainwindow.h"
AdminWindow::AdminWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AdminWindow)
{
    ui->setupUi(this);
    ui->comboBoxADSouvenirsColleges->addItem("Select College");
    ui->comboBoxADSouvenirsColleges->addItem("California State University, Fullerton");
    ui->comboBoxADSouvenirsColleges->addItem("Massachusetts Institute of Technology (MIT)");
    ui->comboBoxADSouvenirsColleges->addItem("Northwestern");
    ui->comboBoxADSouvenirsColleges->addItem("Ohio State University");
    ui->comboBoxADSouvenirsColleges->addItem("University of  Michigan");
    ui->comboBoxADSouvenirsColleges->addItem("University of California, Irvine (UCI)");
    ui->comboBoxADSouvenirsColleges->addItem("University of California, Los Angeles (UCLA)");
    ui->comboBoxADSouvenirsColleges->addItem("University of Oregon");
    ui->comboBoxADSouvenirsColleges->addItem("University of Texas");
    ui->comboBoxADSouvenirsColleges->addItem("University of the Pacific");
    ui->comboBoxADSouvenirsColleges->addItem("University of Wisconsin");
}

AdminWindow::~AdminWindow()
{
    delete ui;
}
void AdminWindow::conClose()
{
    mySqLiteDb.close();
    mySqLiteDb.removeDatabase(QSqlDatabase::defaultConnection);
}

bool AdminWindow::conOpen()
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
void AdminWindow::on_pushButton_BackToMainWindow_clicked()
{
    hide();
    // Show the MainWindow (i.e. the parent window)
    MainWindow *newmain= new MainWindow();
    newmain->show();
}

void AdminWindow::on_pushButton_AddNewSouvenir_clicked()
{
    QSqlQueryModel *modal = new QSqlQueryModel();
    conOpen();
    QSqlQuery *qry = new QSqlQuery(mySqLiteDb);
    QString currentText = ui->comboBoxADSouvenirsColleges->currentText();
    if(currentText =="California State University, Fullerton")
    {
         qry->prepare("SELECT traditionalSouvenir, cost FROM souvenirs WHERE college=\"California State University, Fullerton\"");
    }
    this->ui->comboBoxADSouvenirsColleges->clearEditText();
    this->ui->lineEdit_ADTraditionalSouvenirs->setText("");
    this->ui->lineEdit_ADCost->setText("");
    qry->exec();
    modal->setQuery(*qry);
     conClose();
}

void AdminWindow::on_pushButton_DeleteOldSouvenir_clicked()
{
    this->ui->comboBoxADSouvenirsColleges->clearEditText();
    this->ui->lineEdit_ADTraditionalSouvenirs->setText("");
    this->ui->lineEdit_ADCost->setText("");
}

void AdminWindow::on_pushButton_DisplayCurrentSouvenirs_clicked()
{
    QSqlQueryModel *modal = new QSqlQueryModel();
    conOpen();

    QSqlQuery *qry = new QSqlQuery(mySqLiteDb);
    QString currentText = ui->comboBoxADSouvenirsColleges->currentText();
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
    else if(currentText =="University of Wisconsiny")
    {
        qry->prepare("SELECT traditionalSouvenir, cost FROM souvenirs WHERE college=\"University of Wisconsin\"");
    }
    qry->exec();
    modal->setQuery(*qry);
    ui->tableViewCurrentTraditionalSouvenirs->setModel(modal);
    ui->tableViewCurrentTraditionalSouvenirs->resizeColumnsToContents();
    qDebug()<<(modal->rowCount());
    conClose();
}

void AdminWindow::on_pushButton__UpdateSouvenir_clicked()
{
    this->ui->comboBoxADSouvenirsColleges->clearEditText();
    this->ui->lineEdit_UTraditionalSouvenirs->setText("");
    this->ui->lineEdit_UCost->setText("");
}
