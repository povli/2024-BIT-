/********************************************************************************
** Form generated from reading UI file 'showdetails.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SHOWDETAILS_H
#define UI_SHOWDETAILS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_showdetails
{
public:

    void setupUi(QWidget *showdetails)
    {
        if (showdetails->objectName().isEmpty())
            showdetails->setObjectName(QString::fromUtf8("showdetails"));
        showdetails->resize(400, 300);

        retranslateUi(showdetails);

        QMetaObject::connectSlotsByName(showdetails);
    } // setupUi

    void retranslateUi(QWidget *showdetails)
    {
        showdetails->setWindowTitle(QApplication::translate("showdetails", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class showdetails: public Ui_showdetails {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHOWDETAILS_H
