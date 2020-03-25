/********************************************************************************
** Form generated from reading UI file 'CollegeTour.ui'
**
** Created by: Qt User Interface Compiler version 5.12.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COLLEGETOUR_H
#define UI_COLLEGETOUR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CollegeTour
{
public:
    QStackedWidget *CollegeTourStackedWidget;
    QWidget *CollegeTourPage;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *TotalPricelabel;
    QPushButton *ViewCheckoutButton;
    QLabel *CollegeNamelabel;
    QPushButton *NextCollegeButton;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QListWidget *ShoppingCartList;
    QPushButton *DeleteItemButton;
    QLabel *TripDistancelabel;
    QGroupBox *SouvenirsGroupBox;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout_3;
    QPushButton *BackTMainButton;

    void setupUi(QWidget *CollegeTour)
    {
        if (CollegeTour->objectName().isEmpty())
            CollegeTour->setObjectName(QString::fromUtf8("CollegeTour"));
        CollegeTour->resize(1076, 685);
        CollegeTourStackedWidget = new QStackedWidget(CollegeTour);
        CollegeTourStackedWidget->setObjectName(QString::fromUtf8("CollegeTourStackedWidget"));
        CollegeTourStackedWidget->setGeometry(QRect(9, 9, 1061, 661));
        CollegeTourStackedWidget->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 217, 159);"));
        CollegeTourPage = new QWidget();
        CollegeTourPage->setObjectName(QString::fromUtf8("CollegeTourPage"));
        verticalLayoutWidget = new QWidget(CollegeTourPage);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(430, 400, 201, 111));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        TotalPricelabel = new QLabel(verticalLayoutWidget);
        TotalPricelabel->setObjectName(QString::fromUtf8("TotalPricelabel"));
        TotalPricelabel->setStyleSheet(QString::fromUtf8("background-color: rgb(83, 167, 124);"));

        verticalLayout->addWidget(TotalPricelabel);

        ViewCheckoutButton = new QPushButton(verticalLayoutWidget);
        ViewCheckoutButton->setObjectName(QString::fromUtf8("ViewCheckoutButton"));
        ViewCheckoutButton->setStyleSheet(QString::fromUtf8("background-color: rgb(83, 167, 124);"));

        verticalLayout->addWidget(ViewCheckoutButton);

        CollegeNamelabel = new QLabel(CollegeTourPage);
        CollegeNamelabel->setObjectName(QString::fromUtf8("CollegeNamelabel"));
        CollegeNamelabel->setGeometry(QRect(230, 10, 551, 71));
        QFont font;
        font.setPointSize(10);
        CollegeNamelabel->setFont(font);
        CollegeNamelabel->setStyleSheet(QString::fromUtf8("background-color: rgb(83, 167, 124);"));
        NextCollegeButton = new QPushButton(CollegeTourPage);
        NextCollegeButton->setObjectName(QString::fromUtf8("NextCollegeButton"));
        NextCollegeButton->setGeometry(QRect(330, 580, 411, 61));
        NextCollegeButton->setStyleSheet(QString::fromUtf8("background-color: rgb(83, 167, 124);"));
        verticalLayoutWidget_2 = new QWidget(CollegeTourPage);
        verticalLayoutWidget_2->setObjectName(QString::fromUtf8("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(10, 140, 411, 431));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        ShoppingCartList = new QListWidget(verticalLayoutWidget_2);
        ShoppingCartList->setObjectName(QString::fromUtf8("ShoppingCartList"));
        ShoppingCartList->setStyleSheet(QString::fromUtf8("background-color: rgb(83, 167, 124);"));

        verticalLayout_2->addWidget(ShoppingCartList);

        DeleteItemButton = new QPushButton(verticalLayoutWidget_2);
        DeleteItemButton->setObjectName(QString::fromUtf8("DeleteItemButton"));
        DeleteItemButton->setStyleSheet(QString::fromUtf8("background-color: rgb(83, 167, 124);"));

        verticalLayout_2->addWidget(DeleteItemButton);

        TripDistancelabel = new QLabel(CollegeTourPage);
        TripDistancelabel->setObjectName(QString::fromUtf8("TripDistancelabel"));
        TripDistancelabel->setGeometry(QRect(20, 90, 431, 41));
        TripDistancelabel->setStyleSheet(QString::fromUtf8("background-color: rgb(83, 167, 124);"));
        SouvenirsGroupBox = new QGroupBox(CollegeTourPage);
        SouvenirsGroupBox->setObjectName(QString::fromUtf8("SouvenirsGroupBox"));
        SouvenirsGroupBox->setGeometry(QRect(640, 120, 411, 451));
        SouvenirsGroupBox->setStyleSheet(QString::fromUtf8("background-color: rgb(83, 167, 124);"));
        gridLayoutWidget = new QWidget(SouvenirsGroupBox);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(10, 20, 391, 421));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));

        gridLayout->addLayout(verticalLayout_3, 0, 0, 1, 1);

        BackTMainButton = new QPushButton(CollegeTourPage);
        BackTMainButton->setObjectName(QString::fromUtf8("BackTMainButton"));
        BackTMainButton->setGeometry(QRect(790, 30, 201, 61));
        BackTMainButton->setStyleSheet(QString::fromUtf8("background-color: rgb(83, 167, 124);"));
        CollegeTourStackedWidget->addWidget(CollegeTourPage);

        retranslateUi(CollegeTour);

        QMetaObject::connectSlotsByName(CollegeTour);
    } // setupUi

    void retranslateUi(QWidget *CollegeTour)
    {
        CollegeTour->setWindowTitle(QApplication::translate("CollegeTour", "Form", nullptr));
        TotalPricelabel->setText(QApplication::translate("CollegeTour", "Total $0", nullptr));
        ViewCheckoutButton->setText(QApplication::translate("CollegeTour", "View Shopping Cart", nullptr));
        CollegeNamelabel->setText(QApplication::translate("CollegeTour", "Collge Name", nullptr));
        NextCollegeButton->setText(QApplication::translate("CollegeTour", "Next College", nullptr));
        DeleteItemButton->setText(QApplication::translate("CollegeTour", "Delete Item", nullptr));
        TripDistancelabel->setText(QApplication::translate("CollegeTour", "Trip Distance: 0 miles", nullptr));
        SouvenirsGroupBox->setTitle(QApplication::translate("CollegeTour", "Souvenirs:", nullptr));
        BackTMainButton->setText(QApplication::translate("CollegeTour", "Main Page", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CollegeTour: public Ui_CollegeTour {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COLLEGETOUR_H
