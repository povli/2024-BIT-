#include "ownmessage.h"
#include <QLineEdit>
#include <QPushButton>
#include <QVBoxLayout>
#include <QFormLayout>
#include <QMessageBox>

OwnMessage::OwnMessage(QWidget *parent) : QWidget(parent) {
    resize(400, 300);

    QVBoxLayout *mainLayout = new QVBoxLayout;

    // 创建表单布局
    QFormLayout *formLayout = new QFormLayout;

    nameEdit = new QLineEdit;
    dobEdit = new QLineEdit;
    idEdit = new QLineEdit;
    phoneEdit = new QLineEdit;
    emailEdit = new QLineEdit;

    formLayout->addRow("姓名:", nameEdit);
    formLayout->addRow("出生年月日:", dobEdit);
    formLayout->addRow("身份证号:", idEdit);
    formLayout->addRow("手机号:", phoneEdit);
    formLayout->addRow("邮箱:", emailEdit);

    mainLayout->addLayout(formLayout);

    // 创建按钮
    QPushButton *confirmButton = new QPushButton("确认");
    QPushButton *backButton = new QPushButton("返回");

    connect(confirmButton, &QPushButton::clicked, this, &OwnMessage::confirm);
    connect(backButton, &QPushButton::clicked, this, &OwnMessage::goBack);

    QHBoxLayout *buttonLayout = new QHBoxLayout;
    buttonLayout->addWidget(confirmButton);
    buttonLayout->addWidget(backButton);

    mainLayout->addLayout(buttonLayout);

    setLayout(mainLayout);
}

void OwnMessage::confirm() {
    QMessageBox::information(this, "确认", "信息已提交！");
}

void OwnMessage::goBack() {
    close();  // 关闭当前窗口
}
