/********************************************************************************
** Form generated from reading UI file 'homewindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HOMEWINDOW_H
#define UI_HOMEWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HomeWindow
{
public:
    QLabel *label_image;
    QLabel *head1;
    QLabel *medicalexpense;
    QLabel *medicalexpenseText;
    QLineEdit *lineEdit;
    QPushButton *btnsearch;
    QPushButton *medicalexpenseBtn;
    QPushButton *quizBtn;
    QLabel *quizText;
    QLabel *quiz;

    void setupUi(QWidget *HomeWindow)
    {
        if (HomeWindow->objectName().isEmpty())
            HomeWindow->setObjectName(QString::fromUtf8("HomeWindow"));
        HomeWindow->resize(800, 600);
        label_image = new QLabel(HomeWindow);
        label_image->setObjectName(QString::fromUtf8("label_image"));
        label_image->setGeometry(QRect(0, 0, 800, 600));
        label_image->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        head1 = new QLabel(HomeWindow);
        head1->setObjectName(QString::fromUtf8("head1"));
        head1->setGeometry(QRect(40, 200, 67, 17));
        medicalexpense = new QLabel(HomeWindow);
        medicalexpense->setObjectName(QString::fromUtf8("medicalexpense"));
        medicalexpense->setGeometry(QRect(140, 230, 121, 101));
        medicalexpense->setStyleSheet(QString::fromUtf8("image: url(:/chat-icon.jpg);"));
        medicalexpenseText = new QLabel(HomeWindow);
        medicalexpenseText->setObjectName(QString::fromUtf8("medicalexpenseText"));
        medicalexpenseText->setGeometry(QRect(160, 390, 67, 17));
        lineEdit = new QLineEdit(HomeWindow);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(200, 70, 113, 25));
        btnsearch = new QPushButton(HomeWindow);
        btnsearch->setObjectName(QString::fromUtf8("btnsearch"));
        btnsearch->setGeometry(QRect(330, 70, 41, 25));
        medicalexpenseBtn = new QPushButton(HomeWindow);
        medicalexpenseBtn->setObjectName(QString::fromUtf8("medicalexpenseBtn"));
        medicalexpenseBtn->setGeometry(QRect(150, 330, 89, 51));
        quizBtn = new QPushButton(HomeWindow);
        quizBtn->setObjectName(QString::fromUtf8("quizBtn"));
        quizBtn->setGeometry(QRect(338, 334, 91, 51));
        quizText = new QLabel(HomeWindow);
        quizText->setObjectName(QString::fromUtf8("quizText"));
        quizText->setGeometry(QRect(350, 390, 67, 17));
        quiz = new QLabel(HomeWindow);
        quiz->setObjectName(QString::fromUtf8("quiz"));
        quiz->setGeometry(QRect(340, 250, 91, 71));
        quiz->setStyleSheet(QString::fromUtf8("image: url(:/chat-icon.jpg);"));

        retranslateUi(HomeWindow);

        QMetaObject::connectSlotsByName(HomeWindow);
    } // setupUi

    void retranslateUi(QWidget *HomeWindow)
    {
        HomeWindow->setWindowTitle(QApplication::translate("HomeWindow", "Form", nullptr));
        label_image->setText(QString());
        head1->setText(QApplication::translate("HomeWindow", "\346\231\272\346\205\247\345\214\273\347\226\227", nullptr));
        medicalexpense->setText(QString());
        medicalexpenseText->setText(QApplication::translate("HomeWindow", "\345\214\273\347\226\227\347\274\264\350\264\271", nullptr));
        btnsearch->setText(QApplication::translate("HomeWindow", "?", nullptr));
        medicalexpenseBtn->setText(QApplication::translate("HomeWindow", "\345\214\273\347\226\227\347\274\264\350\264\271", nullptr));
        quizBtn->setText(QApplication::translate("HomeWindow", "\351\227\256\345\215\267\350\207\252\346\265\213", nullptr));
        quizText->setText(QApplication::translate("HomeWindow", "\351\227\256\345\215\267\350\207\252\346\265\213", nullptr));
        quiz->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class HomeWindow: public Ui_HomeWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HOMEWINDOW_H
