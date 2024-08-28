/********************************************************************************
** Form generated from reading UI file 'medicinesearchwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MEDICINESEARCHWINDOW_H
#define UI_MEDICINESEARCHWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MedicineSearchWindow
{
public:
    QPushButton *backbtn;
    QLineEdit *lineEdit;
    QPushButton *searchBtn;
    QLabel *label_image;

    void setupUi(QWidget *MedicineSearchWindow)
    {
        if (MedicineSearchWindow->objectName().isEmpty())
            MedicineSearchWindow->setObjectName(QString::fromUtf8("MedicineSearchWindow"));
        MedicineSearchWindow->resize(320, 167);
        MedicineSearchWindow->setStyleSheet(QString::fromUtf8(""));
        backbtn = new QPushButton(MedicineSearchWindow);
        backbtn->setObjectName(QString::fromUtf8("backbtn"));
        backbtn->setGeometry(QRect(20, 10, 51, 31));
        lineEdit = new QLineEdit(MedicineSearchWindow);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(20, 60, 191, 31));
        searchBtn = new QPushButton(MedicineSearchWindow);
        searchBtn->setObjectName(QString::fromUtf8("searchBtn"));
        searchBtn->setGeometry(QRect(210, 60, 41, 31));
        label_image = new QLabel(MedicineSearchWindow);
        label_image->setObjectName(QString::fromUtf8("label_image"));
        label_image->setGeometry(QRect(0, -10, 321, 191));
        label_image->setStyleSheet(QString::fromUtf8("image: url(:/res/medicalsearchpage.jpg);"));
        label_image->raise();
        backbtn->raise();
        lineEdit->raise();
        searchBtn->raise();

        retranslateUi(MedicineSearchWindow);

        QMetaObject::connectSlotsByName(MedicineSearchWindow);
    } // setupUi

    void retranslateUi(QWidget *MedicineSearchWindow)
    {
        MedicineSearchWindow->setWindowTitle(QApplication::translate("MedicineSearchWindow", "Form", nullptr));
        backbtn->setText(QApplication::translate("MedicineSearchWindow", "back", nullptr));
        lineEdit->setPlaceholderText(QApplication::translate("MedicineSearchWindow", "\350\257\267\350\276\223\345\205\245\346\203\263\350\246\201\346\237\245\346\211\276\347\232\204\345\206\205\345\256\271", nullptr));
        searchBtn->setText(QApplication::translate("MedicineSearchWindow", "?", nullptr));
        label_image->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MedicineSearchWindow: public Ui_MedicineSearchWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MEDICINESEARCHWINDOW_H
