#include "pbd.h"
#include "ui_pbd.h"
#include "diagnostic.h"
#include "advice.h"
#include "hospital.h"
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

void pbd::on_pushButton_2_clicked()
{
    DiagnosticDialog *diagnosticWindow = new DiagnosticDialog(this);
    diagnosticWindow->show();
}


void pbd::on_pushButton_4_clicked()
{
    advice *adviceWindow = new advice(this);
    adviceWindow->show();
}


void pbd::on_pushButton_3_clicked()
{
    Hospital *hospitalWindow = new Hospital(this);
    hospitalWindow->show();
}

