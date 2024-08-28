#include "ownwindow.h"
#include "owndeal.h"
#include "ownillness.h"
#include "ownmessage.h"
#include <QPushButton>
#include <QVBoxLayout>
#include <QHBoxLayout>

OwnWindow::OwnWindow() {
    resize(600, 400);
    setStyleSheet("background-color: lightblue;");

    QVBoxLayout *mainLayout = new QVBoxLayout;
    this->illnessWindow = new OwnIllness;
    this->dealWindow = new OwnDeal;
    this->messageWindow = new OwnMessage;
    QPushButton *illnessButton = new QPushButton("我的预约", this);
    QPushButton *dealButton = new QPushButton("我的病例", this);
    QPushButton *messageButton = new QPushButton("个人信息", this);

    connect(illnessWindow,&OwnIllness::back,this,[=](){
        illnessWindow->close();
        this->show();
    });
    connect(dealWindow,&OwnDeal::back,this,[=](){
        dealWindow->close();
        this->show();
    });
    connect(messageWindow,&OwnMessage::back,this,[=](){
        messageWindow->close();
        this->show();
    });

    connect(illnessButton, &QPushButton::clicked, this, &OwnWindow::showOwnIllness);
    connect(dealButton, &QPushButton::clicked, this, &OwnWindow::showOwnDeal);
    connect(messageButton, &QPushButton::clicked, this, &OwnWindow::showOwnMessage);

    QHBoxLayout *buttonLayout = new QHBoxLayout;
    buttonLayout->addWidget(illnessButton);
    buttonLayout->addWidget(dealButton);
    buttonLayout->addWidget(messageButton);

    mainLayout->addLayout(buttonLayout);
    setLayout(mainLayout);

}
void OwnWindow::showOwnIllness()
{
//    this->hide();
    illnessWindow->show();
    illnessWindow->initializeTable();
}
void OwnWindow::showOwnDeal()
{
//    this->hide();
    dealWindow->show();
}
void OwnWindow::showOwnMessage()
{
//    this->hide();
    messageWindow->show();
}
OwnWindow::~OwnWindow()
{
}
