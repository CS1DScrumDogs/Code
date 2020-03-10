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
    hide();
    // Show the MainWindow (i.e. the parent window)
    MainWindow *newmain= new MainWindow();
    newmain->show();
}
// Initialize Tableview
void AdminWindow::InitializeTableView(QTableView *tableView)
{
    //    // Hide numerical vertical header
    tableView->verticalHeader()->setVisible(false);
    // Make fields uneditable
    tableView->setEditTriggers(QTableView::NoEditTriggers);
}

// Check for empty fields
bool AdminWindow::IsAnyEmptyField()
{
    return  ui->lineEdit_CollegeName->text().isEmpty()         ||
            ui->lineEdit_TraditionalSouvenir->text().isEmpty() ||
            ui->lineEdit_Cost->text().isEmpty() ;
}
void AdminWindow::on_tableViewCurrentTraditionalSouvenirs_activated(const QModelIndex &index)
{
    // Customer Listing Attributes
    QString college;
    QString traditionalSouvenir;
    QString cost;

    // Assign Customer Listing Attributes to Intermediate Variables
    college = ui->tableViewCurrentTraditionalSouvenirs->model()->index(index.row(),0).data().toString();
    traditionalSouvenir = ui->tableViewCurrentTraditionalSouvenirs->model()->index(index.row(),1).data().toString();
    cost = ui->tableViewCurrentTraditionalSouvenirs->model()->index(index.row(),2).data().toString();


    // Assign Customer Listing Attribute Variables to Input Fields
    this->ui->lineEdit_CollegeName->setText(college);
    this->ui->lineEdit_TraditionalSouvenir->setText(traditionalSouvenir);
    this->ui->lineEdit_Cost->setText(cost);
}
void AdminWindow::on_pushButton_DisplayCurrentSouvenirs_clicked()
{
    QSqlQueryModel *modal = new QSqlQueryModel();
    database.conOpen();
    QSqlQuery *qry = new QSqlQuery(mySqLiteDb);
    qry->prepare("SELECT * FROM souvenirs");
    qry->exec();
    modal->setQuery(*qry);
    ui->tableViewCurrentTraditionalSouvenirs->setModel(modal);
    ui->tableViewCurrentTraditionalSouvenirs->resizeColumnsToContents();
    qDebug()<<(modal->rowCount());
    database.conClose();
}
void AdminWindow::on_pushButton_AddNewSouvenir_clicked()
{
    QSqlQueryModel *modal = new QSqlQueryModel();
    database.conOpen();
    bool querySuccess = false;
    QSqlQuery qry(mySqLiteDb);
    QString college = "";
    QString traditionalSouvenir = "";
    QString cost = "";
    // Execute if no NULL values exist in fields
    if(!IsAnyEmptyField())
    {
        // If no NULL values, assign to intermediate variables
        college = ui->lineEdit_CollegeName->text();
        traditionalSouvenir = ui->lineEdit_TraditionalSouvenir->text();
        cost = ui->lineEdit_Cost->text();

        // Execute 'Add Customer' Query
        querySuccess = database.AddSouvenirs(college, traditionalSouvenir, cost);
        // Execute query. If it works, update the tableview to display new entry
        if(querySuccess)
        {
            // Initialize basic view for customers list
            ui->tableViewCurrentTraditionalSouvenirs->setModel(modal);

            // Initialize table view
            InitializeTableView(ui->tableViewCurrentTraditionalSouvenirs);
        }
        else // If it doesn't work, prompt the user with instruction
        {
            QMessageBox::warning(this, "ERROR", "Souvenirs already exists! "
                                                "Please enter unique souvenir data.");
        }
    }
    else // If any NULL values, prompt user with instruction
    {
        QMessageBox::warning(this, "ERROR",
                             "Please enter ALL souvenirs attributes");
    }
    database.conClose();
}

void AdminWindow::on_pushButton_DeleteOldSouvenir_clicked()
{
    // Declaration
    QSqlQueryModel *modal = new QSqlQueryModel();
    database.conOpen();
    bool querySuccess = false;
    int rowIndex = 0;
    QSqlQuery qry(mySqLiteDb);
    QString traditionalSouvenir = "";
    // Access Index
    rowIndex = ui->tableViewCurrentTraditionalSouvenirs->currentIndex().row();

    // Assign customerID
    traditionalSouvenir = ui->tableViewCurrentTraditionalSouvenirs->model()->index(rowIndex,1).data().toString();

    querySuccess = database.DeleteSouvenirs(traditionalSouvenir);

    // Execute query. If it works, update the tableview to display new entry
    if(querySuccess)
    {
        // Refresh tableview with updated model
        ui->tableViewCurrentTraditionalSouvenirs->setModel(modal);
    }
    else
    {
        qDebug() << qry.lastError().text();
    }
    database.conClose();
}


void AdminWindow::on_pushButton_UpdateSouvenir_clicked()
{
     // Declaration
    QSqlQueryModel *modal = new QSqlQueryModel();
    database.conOpen();
     bool querySuccess = false;
     QSqlQuery qry(mySqLiteDb);
    int index = 0;
    QString college = "";
    QString traditionalSouvenir = "";
    QString cost = "";

    // Execute if no NULL values
    if(!IsAnyEmptyField())
    {
        // Access Index
            index = ui->tableViewCurrentTraditionalSouvenirs->currentIndex().row();

            // Assign customerID
        college = ui->lineEdit_CollegeName->text();
        traditionalSouvenir = ui->lineEdit_TraditionalSouvenir->text();
        cost = ui->lineEdit_Cost->text();

        querySuccess = database.UpdateSouvenirs(college, traditionalSouvenir, cost);

        // Execute query. If it works, update the tableview to display new entry
        if(querySuccess)
        {
            // Initialize basic view for customers list
            ui->tableViewCurrentTraditionalSouvenirs->setModel(modal);

            // Initialize table view
            InitializeTableView(ui->tableViewCurrentTraditionalSouvenirs);
        }
        else
        {
            qDebug() << qry.lastError().text();
        }
    }
    else // If any NULL values, prompt user with instruction
    {
        QMessageBox::warning(this, "ERROR", "Please enter ALL customer attributes");
    }
    database.conClose();
}