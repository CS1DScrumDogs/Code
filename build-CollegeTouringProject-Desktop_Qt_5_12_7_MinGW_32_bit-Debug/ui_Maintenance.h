/********************************************************************************
** Form generated from reading UI file 'Maintenance.ui'
**
** Created by: Qt User Interface Compiler version 5.12.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINTENANCE_H
#define UI_MAINTENANCE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Maintenance
{
public:
    QStackedWidget *MaintenanceWidget;
    QWidget *AddSouvenirWidget;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *AddCollegeNamelabel;
    QComboBox *AddCollegeNameComboBox;
    QHBoxLayout *horizontalLayout;
    QLabel *AddSouvenirNamelabel;
    QLineEdit *AddSouvenirNameLine;
    QHBoxLayout *horizontalLayout_3;
    QLabel *AddSouvenirPriceLabel;
    QDoubleSpinBox *AddPriceSpinBox;
    QPushButton *AddSouvenirButton;
    QPushButton *AddCancelButton;
    QLabel *AddSouvenirlabel;
    QWidget *EditSouvenirWidget;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_5;
    QLabel *EditSouvenirNamelabel;
    QLineEdit *EditSouvenirNameLine;
    QHBoxLayout *horizontalLayout_6;
    QLabel *EditSouvenirPriceLabel;
    QDoubleSpinBox *EditPriceSpinBox;
    QPushButton *EditSouvenirButton;
    QPushButton *EditCancelButton;
    QWidget *verticalLayoutWidget_3;
    QVBoxLayout *verticalLayout_3;
    QLabel *EditSouvenirelabel;
    QLabel *EditCollegeName;

    void setupUi(QWidget *Maintenance)
    {
        if (Maintenance->objectName().isEmpty())
            Maintenance->setObjectName(QString::fromUtf8("Maintenance"));
        Maintenance->resize(687, 515);
        MaintenanceWidget = new QStackedWidget(Maintenance);
        MaintenanceWidget->setObjectName(QString::fromUtf8("MaintenanceWidget"));
        MaintenanceWidget->setGeometry(QRect(10, 10, 661, 491));
        MaintenanceWidget->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 217, 159);"));
        AddSouvenirWidget = new QWidget();
        AddSouvenirWidget->setObjectName(QString::fromUtf8("AddSouvenirWidget"));
        verticalLayoutWidget = new QWidget(AddSouvenirWidget);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(20, 90, 621, 341));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        AddCollegeNamelabel = new QLabel(verticalLayoutWidget);
        AddCollegeNamelabel->setObjectName(QString::fromUtf8("AddCollegeNamelabel"));
        AddCollegeNamelabel->setStyleSheet(QString::fromUtf8("background-color: rgb(83, 167, 124);"));

        horizontalLayout_2->addWidget(AddCollegeNamelabel);

        AddCollegeNameComboBox = new QComboBox(verticalLayoutWidget);
        AddCollegeNameComboBox->setObjectName(QString::fromUtf8("AddCollegeNameComboBox"));
        AddCollegeNameComboBox->setStyleSheet(QString::fromUtf8("background-color: rgb(83, 167, 124);"));

        horizontalLayout_2->addWidget(AddCollegeNameComboBox);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        AddSouvenirNamelabel = new QLabel(verticalLayoutWidget);
        AddSouvenirNamelabel->setObjectName(QString::fromUtf8("AddSouvenirNamelabel"));
        AddSouvenirNamelabel->setStyleSheet(QString::fromUtf8("background-color: rgb(83, 167, 124);"));

        horizontalLayout->addWidget(AddSouvenirNamelabel);

        AddSouvenirNameLine = new QLineEdit(verticalLayoutWidget);
        AddSouvenirNameLine->setObjectName(QString::fromUtf8("AddSouvenirNameLine"));
        AddSouvenirNameLine->setStyleSheet(QString::fromUtf8("background-color: rgb(83, 167, 124);"));

        horizontalLayout->addWidget(AddSouvenirNameLine);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        AddSouvenirPriceLabel = new QLabel(verticalLayoutWidget);
        AddSouvenirPriceLabel->setObjectName(QString::fromUtf8("AddSouvenirPriceLabel"));
        AddSouvenirPriceLabel->setStyleSheet(QString::fromUtf8("background-color: rgb(83, 167, 124);"));

        horizontalLayout_3->addWidget(AddSouvenirPriceLabel);

        AddPriceSpinBox = new QDoubleSpinBox(verticalLayoutWidget);
        AddPriceSpinBox->setObjectName(QString::fromUtf8("AddPriceSpinBox"));
        AddPriceSpinBox->setStyleSheet(QString::fromUtf8("background-color: rgb(83, 167, 124);"));

        horizontalLayout_3->addWidget(AddPriceSpinBox);


        verticalLayout->addLayout(horizontalLayout_3);

        AddSouvenirButton = new QPushButton(verticalLayoutWidget);
        AddSouvenirButton->setObjectName(QString::fromUtf8("AddSouvenirButton"));
        AddSouvenirButton->setStyleSheet(QString::fromUtf8("background-color: rgb(83, 167, 124);"));

        verticalLayout->addWidget(AddSouvenirButton);

        AddCancelButton = new QPushButton(verticalLayoutWidget);
        AddCancelButton->setObjectName(QString::fromUtf8("AddCancelButton"));
        AddCancelButton->setStyleSheet(QString::fromUtf8("background-color: rgb(83, 167, 124);"));

        verticalLayout->addWidget(AddCancelButton);

        AddSouvenirlabel = new QLabel(AddSouvenirWidget);
        AddSouvenirlabel->setObjectName(QString::fromUtf8("AddSouvenirlabel"));
        AddSouvenirlabel->setGeometry(QRect(50, 20, 521, 51));
        QFont font;
        font.setPointSize(10);
        AddSouvenirlabel->setFont(font);
        AddSouvenirlabel->setStyleSheet(QString::fromUtf8("background-color: rgb(83, 167, 124);"));
        MaintenanceWidget->addWidget(AddSouvenirWidget);
        EditSouvenirWidget = new QWidget();
        EditSouvenirWidget->setObjectName(QString::fromUtf8("EditSouvenirWidget"));
        verticalLayoutWidget_2 = new QWidget(EditSouvenirWidget);
        verticalLayoutWidget_2->setObjectName(QString::fromUtf8("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(20, 190, 621, 281));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        EditSouvenirNamelabel = new QLabel(verticalLayoutWidget_2);
        EditSouvenirNamelabel->setObjectName(QString::fromUtf8("EditSouvenirNamelabel"));
        EditSouvenirNamelabel->setStyleSheet(QString::fromUtf8("background-color: rgb(83, 167, 124);"));

        horizontalLayout_5->addWidget(EditSouvenirNamelabel);

        EditSouvenirNameLine = new QLineEdit(verticalLayoutWidget_2);
        EditSouvenirNameLine->setObjectName(QString::fromUtf8("EditSouvenirNameLine"));
        EditSouvenirNameLine->setStyleSheet(QString::fromUtf8("background-color: rgb(83, 167, 124);"));

        horizontalLayout_5->addWidget(EditSouvenirNameLine);


        verticalLayout_2->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        EditSouvenirPriceLabel = new QLabel(verticalLayoutWidget_2);
        EditSouvenirPriceLabel->setObjectName(QString::fromUtf8("EditSouvenirPriceLabel"));
        EditSouvenirPriceLabel->setStyleSheet(QString::fromUtf8("background-color: rgb(83, 167, 124);"));

        horizontalLayout_6->addWidget(EditSouvenirPriceLabel);

        EditPriceSpinBox = new QDoubleSpinBox(verticalLayoutWidget_2);
        EditPriceSpinBox->setObjectName(QString::fromUtf8("EditPriceSpinBox"));
        EditPriceSpinBox->setStyleSheet(QString::fromUtf8("background-color: rgb(83, 167, 124);"));

        horizontalLayout_6->addWidget(EditPriceSpinBox);


        verticalLayout_2->addLayout(horizontalLayout_6);

        EditSouvenirButton = new QPushButton(verticalLayoutWidget_2);
        EditSouvenirButton->setObjectName(QString::fromUtf8("EditSouvenirButton"));
        EditSouvenirButton->setStyleSheet(QString::fromUtf8("background-color: rgb(83, 167, 124);"));

        verticalLayout_2->addWidget(EditSouvenirButton);

        EditCancelButton = new QPushButton(verticalLayoutWidget_2);
        EditCancelButton->setObjectName(QString::fromUtf8("EditCancelButton"));
        EditCancelButton->setStyleSheet(QString::fromUtf8("background-color: rgb(83, 167, 124);"));

        verticalLayout_2->addWidget(EditCancelButton);

        verticalLayoutWidget_3 = new QWidget(EditSouvenirWidget);
        verticalLayoutWidget_3->setObjectName(QString::fromUtf8("verticalLayoutWidget_3"));
        verticalLayoutWidget_3->setGeometry(QRect(40, 20, 581, 161));
        verticalLayout_3 = new QVBoxLayout(verticalLayoutWidget_3);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        EditSouvenirelabel = new QLabel(verticalLayoutWidget_3);
        EditSouvenirelabel->setObjectName(QString::fromUtf8("EditSouvenirelabel"));
        EditSouvenirelabel->setFont(font);
        EditSouvenirelabel->setStyleSheet(QString::fromUtf8("background-color: rgb(83, 167, 124);"));

        verticalLayout_3->addWidget(EditSouvenirelabel);

        EditCollegeName = new QLabel(verticalLayoutWidget_3);
        EditCollegeName->setObjectName(QString::fromUtf8("EditCollegeName"));
        EditCollegeName->setStyleSheet(QString::fromUtf8("background-color: rgb(83, 167, 124);"));

        verticalLayout_3->addWidget(EditCollegeName);

        MaintenanceWidget->addWidget(EditSouvenirWidget);

        retranslateUi(Maintenance);

        MaintenanceWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(Maintenance);
    } // setupUi

    void retranslateUi(QWidget *Maintenance)
    {
        Maintenance->setWindowTitle(QApplication::translate("Maintenance", "Form", nullptr));
        AddCollegeNamelabel->setText(QApplication::translate("Maintenance", "College Name:", nullptr));
        AddSouvenirNamelabel->setText(QApplication::translate("Maintenance", "Souvenir Name:", nullptr));
        AddSouvenirNameLine->setText(QApplication::translate("Maintenance", "Sourvenir Name", nullptr));
        AddSouvenirPriceLabel->setText(QApplication::translate("Maintenance", "Price(USD):", nullptr));
        AddSouvenirButton->setText(QApplication::translate("Maintenance", "Add Souvenir", nullptr));
        AddCancelButton->setText(QApplication::translate("Maintenance", "Cancel", nullptr));
        AddSouvenirlabel->setText(QApplication::translate("Maintenance", "Add A New Souvenir", nullptr));
        EditSouvenirNamelabel->setText(QApplication::translate("Maintenance", "Souvenir Name:", nullptr));
        EditSouvenirNameLine->setText(QApplication::translate("Maintenance", "Sourvenir Name", nullptr));
        EditSouvenirPriceLabel->setText(QApplication::translate("Maintenance", "Price(USD):", nullptr));
        EditSouvenirButton->setText(QApplication::translate("Maintenance", "Update Souvenir", nullptr));
        EditCancelButton->setText(QApplication::translate("Maintenance", "Cancel", nullptr));
        EditSouvenirelabel->setText(QApplication::translate("Maintenance", "Change Souvenir Infomation", nullptr));
        EditCollegeName->setText(QApplication::translate("Maintenance", "College Name:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Maintenance: public Ui_Maintenance {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINTENANCE_H
