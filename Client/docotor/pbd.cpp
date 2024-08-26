#include "pbd.h"
#include "ui_pbd.h"
#include <QPainter>
#include <QResizeEvent>

pbd::pbd(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::pbd)
{
    ui->setupUi(this);
}

pbd::~pbd()
{
    delete ui;
}

void pbd::on_pushButton_return_clicked()
{
    emit goback();
}

void pbd::paintEvent(QPaintEvent *event)
{
    QWidget::paintEvent(event);

    QPainter painter(this);
    QPixmap background(":/images/pictures/患者主界面.jpg");
    painter.drawPixmap(rect(), background);
}
