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
    QLabel *medicalexpenseText;
    QLineEdit *lineEdit;
    QPushButton *btnsearch;
    QPushButton *medicalexpenseBtn;
    QPushButton *quizBtn;
    QLabel *quizText;

    void setupUi(QWidget *HomeWindow)
    {
        if (HomeWindow->objectName().isEmpty())
            HomeWindow->setObjectName(QString::fromUtf8("HomeWindow"));
        HomeWindow->resize(800, 600);
        label_image = new QLabel(HomeWindow);
        label_image->setObjectName(QString::fromUtf8("label_image"));
        label_image->setGeometry(QRect(0, 0, 800, 600));
        label_image->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"background-color: rgb(114, 159, 207);"));
        head1 = new QLabel(HomeWindow);
        head1->setObjectName(QString::fromUtf8("head1"));
        head1->setGeometry(QRect(140, 130, 421, 51));
        head1->setStyleSheet(QString::fromUtf8("font: 34pt \"Ubuntu\";\n"
"color: rgb(255, 255, 255);"));
        medicalexpenseText = new QLabel(HomeWindow);
        medicalexpenseText->setObjectName(QString::fromUtf8("medicalexpenseText"));
        medicalexpenseText->setGeometry(QRect(220, 420, 67, 17));
        lineEdit = new QLineEdit(HomeWindow);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(130, 40, 450, 41));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lineEdit->sizePolicy().hasHeightForWidth());
        lineEdit->setSizePolicy(sizePolicy);
        QFont font;
        font.setPointSize(15);
        lineEdit->setFont(font);
        lineEdit->setLayoutDirection(Qt::LeftToRight);
        lineEdit->setAlignment(Qt::AlignCenter);
        btnsearch = new QPushButton(HomeWindow);
        btnsearch->setObjectName(QString::fromUtf8("btnsearch"));
        btnsearch->setGeometry(QRect(200, 470, 100, 70));
        medicalexpenseBtn = new QPushButton(HomeWindow);
        medicalexpenseBtn->setObjectName(QString::fromUtf8("medicalexpenseBtn"));
        medicalexpenseBtn->setGeometry(QRect(200, 350, 100, 70));
        quizBtn = new QPushButton(HomeWindow);
        quizBtn->setObjectName(QString::fromUtf8("quizBtn"));
        quizBtn->setGeometry(QRect(400, 350, 100, 70));
        quizText = new QLabel(HomeWindow);
        quizText->setObjectName(QString::fromUtf8("quizText"));
        quizText->setGeometry(QRect(420, 420, 67, 17));

        retranslateUi(HomeWindow);

        QMetaObject::connectSlotsByName(HomeWindow);
    } // setupUi

    void retranslateUi(QWidget *HomeWindow)
    {
        HomeWindow->setWindowTitle(QApplication::translate("HomeWindow", "Form", nullptr));
        label_image->setText(QString());
        head1->setText(QApplication::translate("HomeWindow", "\346\231\272\346\205\247\345\214\273\347\226\227,\351\200\240\347\246\217\344\275\240\346\210\221\344\273\226", nullptr));
        medicalexpenseText->setText(QApplication::translate("HomeWindow", "\345\214\273\347\226\227\347\274\264\350\264\271", nullptr));
        btnsearch->setText(QApplication::translate("HomeWindow", "\350\215\257\345\223\201\346\220\234\347\264\242", nullptr));
        medicalexpenseBtn->setText(QApplication::translate("HomeWindow", "\345\214\273\347\226\227\347\274\264\350\264\271", nullptr));
        quizBtn->setText(QApplication::translate("HomeWindow", "\351\227\256\345\215\267\350\207\252\346\265\213", nullptr));
        quizText->setText(QApplication::translate("HomeWindow", "\351\227\256\345\215\267\350\207\252\346\265\213", nullptr));
    } // retranslateUi

};

namespace Ui {
    class HomeWindow: public Ui_HomeWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HOMEWINDOW_H
