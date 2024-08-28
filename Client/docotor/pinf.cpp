#include "pinf.h"
#include "ui_pinf.h"
#include <QHeaderView>
#include <QStandardItemModel>
#include <qjsondocument.h>
#include"mainwindow.h"
#include"tcpmgr.h"

void pinf::setupTableViewStyle(QTableView *tableView)
{
    tableView->setShowGrid(true);  // 显示网格线

    // 自定义水平头部样式
    QHeaderView *horizontalHeader = tableView->horizontalHeader();
    horizontalHeader->setStyleSheet(
        "QHeaderView::section { "
        "border: 1px solid black; "         // 头部边框
        "background-color: #f0f0f0; "       // 头部背景色
        "padding: 5px; "                    // 头部内边距
        "}"
    );

    // 自定义垂直头部样式
    QHeaderView *verticalHeader = tableView->verticalHeader();
    verticalHeader->setStyleSheet(
        "QHeaderView::section { "
        "border: 1px solid black; "         // 头部边框
        "background-color: #f0f0f0; "       // 头部背景色
        "padding: 5px; "                    // 头部内边距
        "}"
    );

    // 自定义表格项样式
    tableView->setStyleSheet(
        "QTableView::item { "
        "border-right: 1px solid black; "   // 单元格右边框
        "border-bottom: 1px solid black; "  // 单元格底边框
        "padding: 5px; "                    // 单元格内边距
        "}"
        "QTableView::item:selected { "
        "background-color: lightblue; "    // 选中单元格背景色
        "}"
    );

    // 设置头部高度和宽度
    horizontalHeader->setFixedHeight(30); // 水平头部高度
    verticalHeader->setFixedWidth(70);    // 垂直头部宽度
}

pinf::pinf(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::pinf)
{
    ui->setupUi(this);
    ui->tableViewRecordation_2->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->tableViewUser_2->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->tableViewGoods_2->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->tableViewStatistics_2->setEditTriggers(QAbstractItemView::NoEditTriggers);

    this->setStyleSheet("background-color: skyblue;");
    this->windowp = new pbd;
    connect(windowp, &pbd::goback, this, [=]() {
        windowp->close();
        this->show();
    });
    connect(TcpMgr::GetInstance().get(),&TcpMgr::sig_make_first_list,this,&pinf::setRecordationData);
    //connect(MainWindow)

    // 初始化表格模型
    QStandardItemModel *recordationModel = new QStandardItemModel(0, 7, this);
    recordationModel->setHorizontalHeaderLabels({
        "患者编号", "患者姓名", "患者账号", "患者性别", "患者年龄",
        "患者预约日期", "患者信息资料"
    });
    ui->tableViewRecordation_2->setModel(recordationModel);
    setupTableViewStyle(ui->tableViewRecordation_2);

    QStandardItemModel *userModel = new QStandardItemModel(0, 8, this);
    userModel->setHorizontalHeaderLabels({
        "患者编号", "患者姓名", "患者账号", "患者性别", "患者年龄",
        "患者预约日期", "患者信息资料", "诊断结果"
    });
    ui->tableViewUser_2->setModel(userModel);
    setupTableViewStyle(ui->tableViewUser_2);

    QStandardItemModel *goodsModel = new QStandardItemModel(0, 9, this);
    goodsModel->setHorizontalHeaderLabels({
        "患者编号", "患者姓名", "患者账号", "患者性别", "患者年龄",
        "患者预约日期", "患者信息资料", "诊断结果", "处方"
    });
    ui->tableViewGoods_2->setModel(goodsModel);
    setupTableViewStyle(ui->tableViewGoods_2);

    QStandardItemModel *statisticsModel = new QStandardItemModel(0, 5, this);
    statisticsModel->setHorizontalHeaderLabels({
        "患者编号", "患者姓名", "病房号", "病床号", "住院日期"
    });
    ui->tableViewStatistics_2->setModel(statisticsModel);
    setupTableViewStyle(ui->tableViewStatistics_2);
}

void pinf::setRecordationData(const QVector<QVector<QString>> &data)
{
    QStandardItemModel *model = qobject_cast<QStandardItemModel*>(ui->tableViewRecordation_2->model());
    if (model) {
        model->clear();  // 清空现有数据
        model->setHorizontalHeaderLabels({
            "患者编号", "患者姓名", "患者账号", "患者性别", "患者年龄",
            "患者预约日期", "患者信息资料"
        });

        for (const QVector<QString> &row : data) {
            if (row.size() == 7) {
                for (int col = 0; col < row.size(); ++col) {
                    model->setItem(model->rowCount(), col, new QStandardItem(row[col]));
                }
            }
        }
    }
}

void pinf::setUserData(const QVector<QVector<QString>> &data)
{
    QStandardItemModel *model = qobject_cast<QStandardItemModel*>(ui->tableViewUser_2->model());
    if (model) {
        model->clear();  // 清空现有数据
        model->setHorizontalHeaderLabels({
            "患者编号", "患者姓名", "患者账号", "患者性别", "患者年龄",
            "患者预约日期", "患者信息资料", "诊断结果"
        });

        for (const QVector<QString> &row : data) {
            if (row.size() == 8 && !row[7].isEmpty()) {  // 诊断结果不为空
                for (int col = 0; col < row.size(); ++col) {
                    model->setItem(model->rowCount(), col, new QStandardItem(row[col]));
                }
            }
        }
    }
}

void pinf::setGoodsData(const QVector<QVector<QString>> &data)
{
    QStandardItemModel *model = qobject_cast<QStandardItemModel*>(ui->tableViewGoods_2->model());
    if (model) {
        model->clear();  // 清空现有数据
        model->setHorizontalHeaderLabels({
            "患者编号", "患者姓名", "患者账号", "患者性别", "患者年龄",
            "患者预约日期", "患者信息资料", "诊断结果", "处方"
        });

        for (const QVector<QString> &row : data) {
            if (row.size() == 9 && !row[8].isEmpty()) {  // 处方不为空
                for (int col = 0; col < row.size(); ++col) {
                    model->setItem(model->rowCount(), col, new QStandardItem(row[col]));
                }
            }
        }
    }
}

void pinf::setStatisticsData(const QVector<QVector<QString>> &data)
{
    QStandardItemModel *model = qobject_cast<QStandardItemModel*>(ui->tableViewStatistics_2->model());
    if (model) {
        model->clear();  // 清空现有数据
        model->setHorizontalHeaderLabels({
            "患者编号", "患者姓名", "病房号", "病床号", "住院日期"
        });

        for (const QVector<QString> &row : data) {
            if (row.size() == 5 && !row[2].isEmpty()) {  // 病房号不为空
                for (int col = 0; col < row.size(); ++col) {
                    model->setItem(model->rowCount(), col, new QStandardItem(row[col]));
                }
            }
        }
    }
}

pinf::~pinf()
{
    delete ui;
}

void pinf::on_pushButton_clicked()
{
    emit goback();
}

void pinf::on_tableViewRecordation_2_doubleClicked(const QModelIndex &index)
{
    if (index.column() == 0)
    {

        this->hide();
        windowp->show();
    }
}





void pinf::on_tabWidget_tabBarClicked(int index)
{
    setUserData(UserMgr::GetInstance()->getMdata());
}




