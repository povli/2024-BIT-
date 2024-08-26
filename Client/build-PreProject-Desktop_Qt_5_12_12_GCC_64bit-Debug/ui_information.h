/********************************************************************************
** Form generated from reading UI file 'information.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INFORMATION_H
#define UI_INFORMATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_information
{
public:
    QPushButton *pushButton;
    QTabWidget *tabWidget;
    QWidget *tabGoods;
    QGridLayout *gridLayout_2;
    QLabel *label_2;
    QTextEdit *textEditSummary;
    QLabel *label;
    QLabel *label_6;
    QLineEdit *lineEditID;
    QLabel *label_5;
    QLabel *label_3;
    QLabel *label_4;
    QSpacerItem *horizontalSpacer_2;
    QLineEdit *lineEditName;
    QGroupBox *groupBox;
    QLabel *labelImg;
    QPushButton *pushButtonImage;
    QSpinBox *spinBoxCount;
    QPushButton *pushButtonCommit;
    QLineEdit *lineEditOwnerID;
    QDateTimeEdit *dateTimeEdit;

    void setupUi(QWidget *information)
    {
        if (information->objectName().isEmpty())
            information->setObjectName(QString::fromUtf8("information"));
        information->resize(810, 630);
        pushButton = new QPushButton(information);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(0, 0, 31, 31));
        tabWidget = new QTabWidget(information);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(0, 30, 811, 601));
        tabGoods = new QWidget();
        tabGoods->setObjectName(QString::fromUtf8("tabGoods"));
        tabGoods->setStyleSheet(QString::fromUtf8("background-color: skyblue;"));
        gridLayout_2 = new QGridLayout(tabGoods);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label_2 = new QLabel(tabGoods);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMinimumSize(QSize(0, 30));

        gridLayout_2->addWidget(label_2, 3, 1, 1, 1);

        textEditSummary = new QTextEdit(tabGoods);
        textEditSummary->setObjectName(QString::fromUtf8("textEditSummary"));

        gridLayout_2->addWidget(textEditSummary, 3, 2, 1, 2);

        label = new QLabel(tabGoods);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMinimumSize(QSize(0, 30));
        label->setMaximumSize(QSize(80, 16777215));

        gridLayout_2->addWidget(label, 0, 1, 1, 1);

        label_6 = new QLabel(tabGoods);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setMinimumSize(QSize(0, 30));

        gridLayout_2->addWidget(label_6, 4, 1, 1, 1);

        lineEditID = new QLineEdit(tabGoods);
        lineEditID->setObjectName(QString::fromUtf8("lineEditID"));
        lineEditID->setMinimumSize(QSize(160, 30));

        gridLayout_2->addWidget(lineEditID, 0, 2, 1, 2);

        label_5 = new QLabel(tabGoods);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setMinimumSize(QSize(0, 30));

        gridLayout_2->addWidget(label_5, 5, 1, 1, 1);

        label_3 = new QLabel(tabGoods);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setMinimumSize(QSize(0, 30));

        gridLayout_2->addWidget(label_3, 1, 1, 1, 1);

        label_4 = new QLabel(tabGoods);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setMinimumSize(QSize(0, 30));

        gridLayout_2->addWidget(label_4, 2, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(147, 37, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_2, 6, 1, 1, 2);

        lineEditName = new QLineEdit(tabGoods);
        lineEditName->setObjectName(QString::fromUtf8("lineEditName"));
        lineEditName->setMinimumSize(QSize(160, 30));

        gridLayout_2->addWidget(lineEditName, 1, 2, 1, 2);

        groupBox = new QGroupBox(tabGoods);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setMinimumSize(QSize(220, 0));
        labelImg = new QLabel(groupBox);
        labelImg->setObjectName(QString::fromUtf8("labelImg"));
        labelImg->setGeometry(QRect(10, 22, 200, 300));
        labelImg->setMinimumSize(QSize(200, 300));
        labelImg->setMaximumSize(QSize(400, 600));
        QFont font;
        font.setBold(false);
        font.setWeight(50);
        font.setKerning(true);
        labelImg->setFont(font);
        labelImg->setFrameShape(QFrame::Box);
        labelImg->setFrameShadow(QFrame::Raised);
        pushButtonImage = new QPushButton(groupBox);
        pushButtonImage->setObjectName(QString::fromUtf8("pushButtonImage"));
        pushButtonImage->setGeometry(QRect(10, 328, 80, 40));
        pushButtonImage->setMinimumSize(QSize(80, 40));
        pushButtonImage->setMaximumSize(QSize(80, 40));

        gridLayout_2->addWidget(groupBox, 0, 0, 7, 1);

        spinBoxCount = new QSpinBox(tabGoods);
        spinBoxCount->setObjectName(QString::fromUtf8("spinBoxCount"));

        gridLayout_2->addWidget(spinBoxCount, 5, 2, 1, 1);

        pushButtonCommit = new QPushButton(tabGoods);
        pushButtonCommit->setObjectName(QString::fromUtf8("pushButtonCommit"));
        pushButtonCommit->setMinimumSize(QSize(80, 40));
        pushButtonCommit->setMaximumSize(QSize(80, 40));

        gridLayout_2->addWidget(pushButtonCommit, 6, 3, 1, 1);

        lineEditOwnerID = new QLineEdit(tabGoods);
        lineEditOwnerID->setObjectName(QString::fromUtf8("lineEditOwnerID"));
        lineEditOwnerID->setMinimumSize(QSize(160, 30));

        gridLayout_2->addWidget(lineEditOwnerID, 2, 2, 1, 2);

        dateTimeEdit = new QDateTimeEdit(tabGoods);
        dateTimeEdit->setObjectName(QString::fromUtf8("dateTimeEdit"));

        gridLayout_2->addWidget(dateTimeEdit, 4, 2, 1, 2);

        tabWidget->addTab(tabGoods, QString());

        retranslateUi(information);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(information);
    } // setupUi

    void retranslateUi(QWidget *information)
    {
        information->setWindowTitle(QApplication::translate("information", "Form", nullptr));
        pushButton->setText(QApplication::translate("information", "<", nullptr));
        label_2->setText(QApplication::translate("information", "\345\214\273\347\224\237\344\277\241\346\201\257\350\265\204\346\226\231", nullptr));
        label->setText(QApplication::translate("information", "\345\214\273\347\224\237\345\247\223\345\220\215", nullptr));
        label_6->setText(QApplication::translate("information", "\344\270\212\347\217\255\346\227\266\351\227\264", nullptr));
        label_5->setText(QApplication::translate("information", "\345\215\225\346\227\245\346\202\243\350\200\205\344\270\212\351\231\220\346\225\260", nullptr));
        label_3->setText(QApplication::translate("information", "\346\211\200\345\261\236\347\247\221\345\256\244", nullptr));
        label_4->setText(QApplication::translate("information", "\345\214\273\347\224\237\350\264\246\345\217\267", nullptr));
        groupBox->setTitle(QApplication::translate("information", "\347\205\247\347\211\207", nullptr));
        labelImg->setText(QString());
        pushButtonImage->setText(QApplication::translate("information", "\344\270\212\344\274\240\347\205\247\347\211\207", nullptr));
        pushButtonCommit->setText(QApplication::translate("information", "\347\241\256\345\256\232", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabGoods), QApplication::translate("information", "\345\235\220\350\257\212\345\256\211\346\216\222\344\277\241\346\201\257", nullptr));
    } // retranslateUi

};

namespace Ui {
    class information: public Ui_information {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INFORMATION_H
