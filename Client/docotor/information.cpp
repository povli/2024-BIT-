#include "information.h"
#include "ui_information.h"
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
