#include "medicalexpensewd.h"
#include "ui_medicalexpensewd.h"

MedicalExpenseWd::MedicalExpenseWd(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MedicalExpenseWd)
{
    ui->setupUi(this);
}

MedicalExpenseWd::~MedicalExpenseWd()
{
    delete ui;
}
