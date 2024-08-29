/********************************************************************************
** Form generated from reading UI file 'topaopao.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TOPAOPAO_H
#define UI_TOPAOPAO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ToPaoPao
{
public:

    void setupUi(QWidget *ToPaoPao)
    {
        if (ToPaoPao->objectName().isEmpty())
            ToPaoPao->setObjectName(QString::fromUtf8("ToPaoPao"));
        ToPaoPao->resize(400, 300);

        retranslateUi(ToPaoPao);

        QMetaObject::connectSlotsByName(ToPaoPao);
    } // setupUi

    void retranslateUi(QWidget *ToPaoPao)
    {
        ToPaoPao->setWindowTitle(QApplication::translate("ToPaoPao", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ToPaoPao: public Ui_ToPaoPao {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TOPAOPAO_H
