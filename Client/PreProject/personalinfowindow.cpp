#include "personalinfowindow.h"
#include "ui_personalinfowindow.h"

PersonalInfoWindow::PersonalInfoWindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::PersonalInfoWindow)
{
    ui->setupUi(this);
}

PersonalInfoWindow::~PersonalInfoWindow()
{
    delete ui;
}
