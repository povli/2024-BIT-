#include "medicalexpensewd.h"
#include "ui_medicalexpensewd.h"

MedicalExpenseWd::MedicalExpenseWd(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MedicalExpenseWd)
{
    ui->setupUi(this);
    this->setWindowTitle("医疗缴费");
}

MedicalExpenseWd::~MedicalExpenseWd()
{
    delete ui;
}
