/********************************************************************************
** Form generated from reading UI file 'pmainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PMAINWINDOW_H
#define UI_PMAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PMainWindow
{
public:
    QWidget *centralwidget;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QToolButton *book;
    QToolButton *personal;
    QToolButton *home;
    QToolButton *chattingroom;
    QToolButton *hospitalization;
    QStackedWidget *stackedWidget;

    void setupUi(QMainWindow *PMainWindow)
    {
        if (PMainWindow->objectName().isEmpty())
            PMainWindow->setObjectName(QString::fromUtf8("PMainWindow"));
        PMainWindow->resize(800, 672);
        centralwidget = new QWidget(PMainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayoutWidget = new QWidget(centralwidget);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(0, 587, 801, 81));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setSizeConstraint(QLayout::SetFixedSize);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        book = new QToolButton(gridLayoutWidget);
        book->setObjectName(QString::fromUtf8("book"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(book->sizePolicy().hasHeightForWidth());
        book->setSizePolicy(sizePolicy);
        book->setMinimumSize(QSize(70, 70));
        book->setMaximumSize(QSize(70, 70));
        book->setStyleSheet(QString::fromUtf8(""));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/clinic-health-icons.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        book->setIcon(icon);
        book->setIconSize(QSize(70, 70));
        book->setCheckable(false);

        gridLayout->addWidget(book, 0, 1, 1, 1);

        personal = new QToolButton(gridLayoutWidget);
        personal->setObjectName(QString::fromUtf8("personal"));
        sizePolicy.setHeightForWidth(personal->sizePolicy().hasHeightForWidth());
        personal->setSizePolicy(sizePolicy);
        personal->setMinimumSize(QSize(70, 70));
        personal->setMaximumSize(QSize(70, 70));
        personal->setStyleSheet(QString::fromUtf8("image: url(:/personal-profile-icon.jpg);"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/personal-profile-icon.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        personal->setIcon(icon1);
        personal->setIconSize(QSize(70, 70));

        gridLayout->addWidget(personal, 0, 2, 1, 1);

        home = new QToolButton(gridLayoutWidget);
        home->setObjectName(QString::fromUtf8("home"));
        sizePolicy.setHeightForWidth(home->sizePolicy().hasHeightForWidth());
        home->setSizePolicy(sizePolicy);
        home->setMinimumSize(QSize(70, 70));
        home->setMaximumSize(QSize(70, 70));
        home->setStyleSheet(QString::fromUtf8(""));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/redcross.jpeg"), QSize(), QIcon::Normal, QIcon::Off);
        home->setIcon(icon2);
        home->setIconSize(QSize(70, 70));

        gridLayout->addWidget(home, 0, 0, 1, 1);

        chattingroom = new QToolButton(gridLayoutWidget);
        chattingroom->setObjectName(QString::fromUtf8("chattingroom"));
        sizePolicy.setHeightForWidth(chattingroom->sizePolicy().hasHeightForWidth());
        chattingroom->setSizePolicy(sizePolicy);
        chattingroom->setMinimumSize(QSize(70, 70));
        chattingroom->setMaximumSize(QSize(70, 70));
        chattingroom->setStyleSheet(QString::fromUtf8(""));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/chat-icon.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        chattingroom->setIcon(icon3);
        chattingroom->setIconSize(QSize(70, 70));

        gridLayout->addWidget(chattingroom, 0, 3, 1, 1);

        hospitalization = new QToolButton(gridLayoutWidget);
        hospitalization->setObjectName(QString::fromUtf8("hospitalization"));
        sizePolicy.setHeightForWidth(hospitalization->sizePolicy().hasHeightForWidth());
        hospitalization->setSizePolicy(sizePolicy);
        hospitalization->setMinimumSize(QSize(70, 70));
        hospitalization->setMaximumSize(QSize(70, 70));

        gridLayout->addWidget(hospitalization, 0, 4, 1, 1);

        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setGeometry(QRect(-1, -2, 731, 591));
        sizePolicy.setHeightForWidth(stackedWidget->sizePolicy().hasHeightForWidth());
        stackedWidget->setSizePolicy(sizePolicy);
        PMainWindow->setCentralWidget(centralwidget);

        retranslateUi(PMainWindow);

        QMetaObject::connectSlotsByName(PMainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *PMainWindow)
    {
        PMainWindow->setWindowTitle(QApplication::translate("PMainWindow", "PMainWindow", nullptr));
        book->setText(QApplication::translate("PMainWindow", "Book", nullptr));
        personal->setText(QApplication::translate("PMainWindow", "Personal", nullptr));
        home->setText(QApplication::translate("PMainWindow", "Home", nullptr));
        chattingroom->setText(QApplication::translate("PMainWindow", "Chat", nullptr));
        hospitalization->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class PMainWindow: public Ui_PMainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PMAINWINDOW_H
