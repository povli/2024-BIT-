#include "diagnostic.h"
#include "ui_diagnostic.h"
#include <QMessageBox>

DiagnosticDialog::DiagnosticDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DiagnosticDialog)
{
    ui->setupUi(this);

    // Connect buttons to slots
    connect(ui->buttonConfirm, &QPushButton::clicked, this, &DiagnosticDialog::on_buttonConfirm_clicked);
    connect(ui->buttonCancel, &QPushButton::clicked, this, &DiagnosticDialog::on_buttonCancel_clicked);
}

DiagnosticDialog::~DiagnosticDialog()
{
    delete ui;
}

void DiagnosticDialog::on_buttonConfirm_clicked()
{
    QString resultText = ui->textEditResult->toPlainText();
    QMessageBox::information(this, "确认诊断", "您输入的诊断结果是：\n" + resultText);
    accept(); // Close the dialog with accepted status
}

void DiagnosticDialog::on_buttonCancel_clicked()
{
    reject(); // Close the dialog with rejected status
}
