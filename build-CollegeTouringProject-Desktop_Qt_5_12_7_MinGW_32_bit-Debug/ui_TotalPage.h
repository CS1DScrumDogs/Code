/********************************************************************************
** Form generated from reading UI file 'TotalPage.ui'
**
** Created by: Qt User Interface Compiler version 5.12.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TOTALPAGE_H
#define UI_TOTALPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QListWidget>

QT_BEGIN_NAMESPACE

class Ui_TotalPage
{
public:
    QListWidget *TotalPagelist;

    void setupUi(QDialog *TotalPage)
    {
        if (TotalPage->objectName().isEmpty())
            TotalPage->setObjectName(QString::fromUtf8("TotalPage"));
        TotalPage->resize(476, 364);
        TotalPage->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 217, 159);"));
        TotalPagelist = new QListWidget(TotalPage);
        TotalPagelist->setObjectName(QString::fromUtf8("TotalPagelist"));
        TotalPagelist->setGeometry(QRect(10, 10, 461, 341));
        TotalPagelist->setStyleSheet(QString::fromUtf8("background-color: rgb(83, 167, 124);"));

        retranslateUi(TotalPage);

        QMetaObject::connectSlotsByName(TotalPage);
    } // setupUi

    void retranslateUi(QDialog *TotalPage)
    {
        TotalPage->setWindowTitle(QApplication::translate("TotalPage", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TotalPage: public Ui_TotalPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TOTALPAGE_H
