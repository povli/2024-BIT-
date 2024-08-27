#include "advice.h"
#include "ui_advice.h"
#include <QMessageBox>

advice::advice(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::advice)
{
    ui->setupUi(this);

    // 连接按钮点击信号到槽函数
    connect(ui->buttonConfirm, &QPushButton::clicked, this, &advice::on_buttonConfirm_clicked);
    connect(ui->buttonCancel, &QPushButton::clicked, this, &advice::on_buttonCancel_clicked);
}

advice::~advice()
{
    delete ui;
}

void advice::on_buttonConfirm_clicked()
{
    // 获取文本框中的内容
    QString adviceText = ui->textEditResult->toPlainText();

    // 显示确认消息
    QMessageBox::information(this, "确认", QString("确认医嘱:\n%1").arg(adviceText));

    // 关闭对话框
    this->accept(); // 使用 QDialog 的 accept() 方法关闭对话框并接受操作
}

void advice::on_buttonCancel_clicked()
{
    this->reject(); // 使用 QDialog 的 reject() 方法关闭对话框而不接受操作
}
