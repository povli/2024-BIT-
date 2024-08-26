#include "bookwindow.h"
#include "ui_bookwindow.h"

BookWindow::BookWindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::BookWindow)
{
    ui->setupUi(this);
    QListWidgetItem *child= new QListWidgetItem("儿科");
    ui->listWidget->addItem(child);
    ui->listWidget->addItem(new QListWidgetItem("妇产科"));
    ui->listWidget->addItem(new QListWidgetItem("外科"));
    ui->listWidget->addItem(new QListWidgetItem("内科"));
    ui->listWidget->addItem(new QListWidgetItem("皮肤科"));

    connect(ui->listWidget,SIGNAL(itemClicked(QListWidgetItem*)),this,SLOT(onItemClicked(QListWidgetItem*)));

    ui->stackedWidget->addWidget(&childwd);
    ui->stackedWidget->addWidget(&womanwd);
    ui->stackedWidget->addWidget(&outwd);
    ui->stackedWidget->addWidget(&insidewd);
    ui->stackedWidget->addWidget(&skinwd);
}

BookWindow::~BookWindow()
{
    delete ui;
}

void BookWindow::onItemClicked(QListWidgetItem* item){
    if(item->text()=="儿科"){
        ui->stackedWidget->setCurrentIndex(0);
    }
    else if(item->text()=="妇产科"){
        ui->stackedWidget->setCurrentIndex(1);
    }
    else if(item->text()=="外科"){
        ui->stackedWidget->setCurrentIndex(2);
    }
    else if(item->text()=="内科"){
        ui->stackedWidget->setCurrentIndex(3);
    }
    else if(item->text()=="皮肤科"){
        ui->stackedWidget->setCurrentIndex(4);
    }
}
