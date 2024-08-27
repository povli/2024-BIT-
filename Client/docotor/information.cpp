#include "information.h"
#include "ui_information.h"
#include "change.h"
#include <QPainter>
#include <QPaintEvent>

information::information(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::information)
{
    ui->setupUi(this);

    // 设置控件背景透明
    setAttribute(Qt::WA_TranslucentBackground);
}

information::~information()
{
    delete ui;
}

void information::paintEvent(QPaintEvent *event)
{
    QPainter painter(this);

    // 绘制浅蓝色背景
    painter.fillRect(rect(), QColor(173, 216, 230)); // Light blue color

    // 调用基类的 paintEvent 方法以确保其他绘制操作正常进行
    QWidget::paintEvent(event);
}

void information::on_pushButton_clicked()
{
    emit goback();
}

void information::on_pushButtonCommit_2_clicked()
{
    change *changeWindow = new change(this);

    // 连接数据更新信号到槽函数
    connect(changeWindow, &change::dataUpdated, this, &information::handleDataUpdated);

    changeWindow->show();
}

void information::handleDataUpdated()
{
    // 刷新当前界面的数据或状态
    // 此处不要显示提示框
}
