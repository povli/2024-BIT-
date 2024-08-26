#include "pmainwindowhome.h"
#include "ui_pmainwindowhome.h"

PMainWindowHome::PMainWindowHome(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::PMainWindowHome)
{
    ui->setupUi(this);
}

PMainWindowHome::~PMainWindowHome()
{
    delete ui;
}
