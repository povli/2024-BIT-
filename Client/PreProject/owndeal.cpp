#include "owndeal.h"
#include <QVBoxLayout>
#include <QStandardItem>
#include <QStandardItemModel>
#include <QCloseEvent>
#include <QMessageBox>

OwnDeal::OwnDeal(QWidget *parent) : QWidget(parent) {
    resize(600, 400);  // 设置与主窗口相同的大小
    QVBoxLayout *layout = new QVBoxLayout;

    backButton = new QPushButton("返回");
    layout->addWidget(backButton);

    tableView = new QTableView;
    initializeTable();
    layout->addWidget(tableView);

    connect(backButton, &QPushButton::clicked, this, &OwnDeal::goBack);

    setLayout(layout);
}

void OwnDeal::initializeTable() {
    model = new QStandardItemModel(10, 6, this);
    tableView->setModel(model);

    model->setHorizontalHeaderLabels({"医生", "临床诊断", "处方", "医嘱", "列5", "操作"});

    for (int row = 0; row < 10; ++row) {
        for (int column = 0; column < 5; ++column) {
            QStandardItem *item = new QStandardItem(QString("数据 %1,%2").arg(row).arg(column));
            model->setItem(row, column, item);
        }
        QPushButton *viewButton = new QPushButton("查看");
        connect(viewButton, &QPushButton::clicked, this, &OwnDeal::showDetails);
        model->setItem(row, 5, new QStandardItem());
        tableView->setIndexWidget(model->index(row, 5), viewButton);
    }
}

void OwnDeal::showDetails() {
    QMessageBox::information(this, "详细信息", "这是详细信息！");
}

void OwnDeal::goBack()
{
    emit back();
}
