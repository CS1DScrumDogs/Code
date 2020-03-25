/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QStackedWidget *MainPageWidget;
    QWidget *MainPage;
    QPushButton *CustomTripButton;
    QPushButton *ASUTripButton;
    QPushButton *ShortestTripButton;
    QPushButton *AdminPageButton;
    QLabel *WelcomeLabel;
    QPushButton *SaddlebackTripButton;
    QWidget *StartingCollegePage;
    QLabel *StartingCollegeLabel;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QPushButton *BackTMainButton_3;
    QPushButton *AdminPageButton_2;
    QWidget *AdminPage;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QLabel *label_UserName;
    QLineEdit *lineEdit_UserName;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_Password;
    QLineEdit *lineEdit_Password;
    QPushButton *pushButton_Login;
    QPushButton *BackTMainButton_2;
    QLabel *label;
    QWidget *MaintenancePage;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *AddSouvenirButton;
    QPushButton *UploadCollegeButton;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QListWidget *DisplaySouvenirWidget;
    QLabel *MaintenancePageLabel;
    QWidget *verticalLayoutWidget_3;
    QVBoxLayout *verticalLayout_4;
    QPushButton *BackTMainButton;
    QPushButton *AdminPageButton_3;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(806, 608);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        MainPageWidget = new QStackedWidget(centralwidget);
        MainPageWidget->setObjectName(QString::fromUtf8("MainPageWidget"));
        MainPageWidget->setGeometry(QRect(0, 10, 801, 581));
        MainPageWidget->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 217, 159);"));
        MainPage = new QWidget();
        MainPage->setObjectName(QString::fromUtf8("MainPage"));
        CustomTripButton = new QPushButton(MainPage);
        CustomTripButton->setObjectName(QString::fromUtf8("CustomTripButton"));
        CustomTripButton->setGeometry(QRect(20, 330, 171, 41));
        CustomTripButton->setStyleSheet(QString::fromUtf8("background-color: rgb(83, 167, 124);"));
        ASUTripButton = new QPushButton(MainPage);
        ASUTripButton->setObjectName(QString::fromUtf8("ASUTripButton"));
        ASUTripButton->setGeometry(QRect(390, 330, 151, 41));
        ASUTripButton->setStyleSheet(QString::fromUtf8("background-color: rgb(83, 167, 124);"));
        ShortestTripButton = new QPushButton(MainPage);
        ShortestTripButton->setObjectName(QString::fromUtf8("ShortestTripButton"));
        ShortestTripButton->setGeometry(QRect(200, 330, 151, 41));
        ShortestTripButton->setStyleSheet(QString::fromUtf8("background-color: rgb(83, 167, 124);"));
        AdminPageButton = new QPushButton(MainPage);
        AdminPageButton->setObjectName(QString::fromUtf8("AdminPageButton"));
        AdminPageButton->setGeometry(QRect(550, 330, 151, 41));
        AdminPageButton->setStyleSheet(QString::fromUtf8("background-color: rgb(83, 167, 124);"));
        WelcomeLabel = new QLabel(MainPage);
        WelcomeLabel->setObjectName(QString::fromUtf8("WelcomeLabel"));
        WelcomeLabel->setGeometry(QRect(160, 80, 501, 111));
        WelcomeLabel->setStyleSheet(QString::fromUtf8("background-color: rgb(83, 167, 124);"));
        SaddlebackTripButton = new QPushButton(MainPage);
        SaddlebackTripButton->setObjectName(QString::fromUtf8("SaddlebackTripButton"));
        SaddlebackTripButton->setGeometry(QRect(290, 260, 171, 41));
        SaddlebackTripButton->setStyleSheet(QString::fromUtf8("background-color: rgb(83, 167, 124);"));
        MainPageWidget->addWidget(MainPage);
        StartingCollegePage = new QWidget();
        StartingCollegePage->setObjectName(QString::fromUtf8("StartingCollegePage"));
        StartingCollegeLabel = new QLabel(StartingCollegePage);
        StartingCollegeLabel->setObjectName(QString::fromUtf8("StartingCollegeLabel"));
        StartingCollegeLabel->setGeometry(QRect(100, 50, 621, 91));
        StartingCollegeLabel->setStyleSheet(QString::fromUtf8("background-color: rgb(83, 167, 124);"));
        gridLayoutWidget = new QWidget(StartingCollegePage);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(19, 169, 761, 371));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        BackTMainButton_3 = new QPushButton(StartingCollegePage);
        BackTMainButton_3->setObjectName(QString::fromUtf8("BackTMainButton_3"));
        BackTMainButton_3->setGeometry(QRect(10, 10, 101, 31));
        BackTMainButton_3->setStyleSheet(QString::fromUtf8("background-color: rgb(83, 167, 124);"));
        AdminPageButton_2 = new QPushButton(StartingCollegePage);
        AdminPageButton_2->setObjectName(QString::fromUtf8("AdminPageButton_2"));
        AdminPageButton_2->setGeometry(QRect(630, 10, 111, 31));
        AdminPageButton_2->setStyleSheet(QString::fromUtf8("background-color: rgb(83, 167, 124);"));
        MainPageWidget->addWidget(StartingCollegePage);
        AdminPage = new QWidget();
        AdminPage->setObjectName(QString::fromUtf8("AdminPage"));
        layoutWidget = new QWidget(AdminPage);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(180, 240, 381, 201));
        verticalLayout_3 = new QVBoxLayout(layoutWidget);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_UserName = new QLabel(layoutWidget);
        label_UserName->setObjectName(QString::fromUtf8("label_UserName"));
        QFont font;
        font.setPointSize(14);
        label_UserName->setFont(font);
        label_UserName->setStyleSheet(QString::fromUtf8("background-color: rgb(83, 167, 124);"));

        horizontalLayout->addWidget(label_UserName);

        lineEdit_UserName = new QLineEdit(layoutWidget);
        lineEdit_UserName->setObjectName(QString::fromUtf8("lineEdit_UserName"));
        lineEdit_UserName->setFont(font);
        lineEdit_UserName->setStyleSheet(QString::fromUtf8("background-color: rgb(83, 167, 124);"));

        horizontalLayout->addWidget(lineEdit_UserName);


        verticalLayout_3->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_Password = new QLabel(layoutWidget);
        label_Password->setObjectName(QString::fromUtf8("label_Password"));
        label_Password->setFont(font);
        label_Password->setStyleSheet(QString::fromUtf8("background-color: rgb(83, 167, 124);"));

        horizontalLayout_2->addWidget(label_Password);

        lineEdit_Password = new QLineEdit(layoutWidget);
        lineEdit_Password->setObjectName(QString::fromUtf8("lineEdit_Password"));
        lineEdit_Password->setFont(font);
        lineEdit_Password->setStyleSheet(QString::fromUtf8("background-color: rgb(83, 167, 124);"));
        lineEdit_Password->setEchoMode(QLineEdit::Password);

        horizontalLayout_2->addWidget(lineEdit_Password);


        verticalLayout_3->addLayout(horizontalLayout_2);

        pushButton_Login = new QPushButton(layoutWidget);
        pushButton_Login->setObjectName(QString::fromUtf8("pushButton_Login"));
        pushButton_Login->setFont(font);
        pushButton_Login->setStyleSheet(QString::fromUtf8("background-color: rgb(83, 167, 124);"));

        verticalLayout_3->addWidget(pushButton_Login);

        BackTMainButton_2 = new QPushButton(layoutWidget);
        BackTMainButton_2->setObjectName(QString::fromUtf8("BackTMainButton_2"));
        BackTMainButton_2->setFont(font);
        BackTMainButton_2->setStyleSheet(QString::fromUtf8("background-color: rgb(83, 167, 124);"));

        verticalLayout_3->addWidget(BackTMainButton_2);

        label = new QLabel(AdminPage);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(150, 90, 461, 101));
        label->setStyleSheet(QString::fromUtf8("background-color: rgb(83, 167, 124);"));
        MainPageWidget->addWidget(AdminPage);
        MaintenancePage = new QWidget();
        MaintenancePage->setObjectName(QString::fromUtf8("MaintenancePage"));
        verticalLayoutWidget = new QWidget(MaintenancePage);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(30, 200, 251, 131));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        AddSouvenirButton = new QPushButton(verticalLayoutWidget);
        AddSouvenirButton->setObjectName(QString::fromUtf8("AddSouvenirButton"));
        AddSouvenirButton->setStyleSheet(QString::fromUtf8("background-color: rgb(83, 167, 124);"));

        verticalLayout->addWidget(AddSouvenirButton);

        UploadCollegeButton = new QPushButton(verticalLayoutWidget);
        UploadCollegeButton->setObjectName(QString::fromUtf8("UploadCollegeButton"));
        UploadCollegeButton->setStyleSheet(QString::fromUtf8("background-color: rgb(83, 167, 124);"));

        verticalLayout->addWidget(UploadCollegeButton);

        verticalLayoutWidget_2 = new QWidget(MaintenancePage);
        verticalLayoutWidget_2->setObjectName(QString::fromUtf8("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(300, 120, 471, 431));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        DisplaySouvenirWidget = new QListWidget(verticalLayoutWidget_2);
        DisplaySouvenirWidget->setObjectName(QString::fromUtf8("DisplaySouvenirWidget"));
        DisplaySouvenirWidget->setStyleSheet(QString::fromUtf8("background-color: rgb(83, 167, 124);"));

        verticalLayout_2->addWidget(DisplaySouvenirWidget);

        MaintenancePageLabel = new QLabel(MaintenancePage);
        MaintenancePageLabel->setObjectName(QString::fromUtf8("MaintenancePageLabel"));
        MaintenancePageLabel->setGeometry(QRect(150, 40, 471, 61));
        MaintenancePageLabel->setStyleSheet(QString::fromUtf8("background-color: rgb(83, 167, 124);"));
        verticalLayoutWidget_3 = new QWidget(MaintenancePage);
        verticalLayoutWidget_3->setObjectName(QString::fromUtf8("verticalLayoutWidget_3"));
        verticalLayoutWidget_3->setGeometry(QRect(40, 360, 160, 80));
        verticalLayout_4 = new QVBoxLayout(verticalLayoutWidget_3);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        BackTMainButton = new QPushButton(verticalLayoutWidget_3);
        BackTMainButton->setObjectName(QString::fromUtf8("BackTMainButton"));
        BackTMainButton->setStyleSheet(QString::fromUtf8("background-color: rgb(83, 167, 124);"));

        verticalLayout_4->addWidget(BackTMainButton);

        AdminPageButton_3 = new QPushButton(verticalLayoutWidget_3);
        AdminPageButton_3->setObjectName(QString::fromUtf8("AdminPageButton_3"));
        AdminPageButton_3->setStyleSheet(QString::fromUtf8("background-color: rgb(83, 167, 124);"));

        verticalLayout_4->addWidget(AdminPageButton_3);

        MainPageWidget->addWidget(MaintenancePage);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 806, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        MainPageWidget->setCurrentIndex(3);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        CustomTripButton->setText(QApplication::translate("MainWindow", "Start Custom Trip", nullptr));
        ASUTripButton->setText(QApplication::translate("MainWindow", "ASU Trip", nullptr));
        ShortestTripButton->setText(QApplication::translate("MainWindow", "Shortest Trip", nullptr));
        AdminPageButton->setText(QApplication::translate("MainWindow", "Admin Page", nullptr));
        WelcomeLabel->setText(QApplication::translate("MainWindow", "Welcome to College Tour Planner!", nullptr));
        SaddlebackTripButton->setText(QApplication::translate("MainWindow", "SaddlebackTrip", nullptr));
        StartingCollegeLabel->setText(QApplication::translate("MainWindow", "Choose Your Starting College!", nullptr));
        BackTMainButton_3->setText(QApplication::translate("MainWindow", "Main Page", nullptr));
        AdminPageButton_2->setText(QApplication::translate("MainWindow", "Admin Page", nullptr));
        label_UserName->setText(QApplication::translate("MainWindow", "UserName", nullptr));
        label_Password->setText(QApplication::translate("MainWindow", "Password", nullptr));
        pushButton_Login->setText(QApplication::translate("MainWindow", "Login", nullptr));
        BackTMainButton_2->setText(QApplication::translate("MainWindow", "Back", nullptr));
        label->setText(QApplication::translate("MainWindow", "Login to Access the Maintenance Page", nullptr));
        AddSouvenirButton->setText(QApplication::translate("MainWindow", "Add Souvenir", nullptr));
        UploadCollegeButton->setText(QApplication::translate("MainWindow", "Upload College From File", nullptr));
        MaintenancePageLabel->setText(QApplication::translate("MainWindow", "Welcome to the Maintenance Page", nullptr));
        BackTMainButton->setText(QApplication::translate("MainWindow", "Exit", nullptr));
        AdminPageButton_3->setText(QApplication::translate("MainWindow", "Admin Page", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
