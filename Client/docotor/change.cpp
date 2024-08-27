#include "change.h"
#include "ui_change.h"
#include <QMessageBox>

change::change(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::change)
{
    ui->setupUi(this);
    connect(ui->pushButtonCommit, &QPushButton::clicked, this, &change::on_pushButtonCommit_clicked);
}

change::~change()
{
    delete ui;
}

void change::on_pushButtonCommit_clicked()
{
    // 在这里处理数据更新逻辑
    // 例如：保存数据或进行其他操作

    // 发射数据更新信号
    emit dataUpdated();

    // 显示提示框
    QMessageBox::information(this, "修改成功", "数据已成功修改。");

    // 关闭当前窗口
    close();
}
