#include "quizwd.h"
#include "ui_quizwd.h"
#include <QLabel>
#include <QVBoxLayout>
#include <QString>
#include <QUrl>
#include <QDebug>
#include <QDesktopServices>

quizWd::quizWd(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::quizWd)
{
    ui->setupUi(this);

    this->resize(500,500);
    this->setWindowTitle("linkLabelTest");

    //方法一
    QLabel *linkLabel1 = new QLabel(this);
    linkLabel1->setOpenExternalLinks(true);//设置为true才能打开网页
    linkLabel1->setText("<a style='color: green; text-decoration: none' href = https://apesk.com/xinliceshi/?type=lately>APESK经典心理测试题集");
    linkLabel1->setAlignment(Qt::AlignHCenter);//文字居中

    //方法二
    QLabel *linkLabel2 = new QLabel(this);
    linkLabel2->setText("<a style='color: red; text-decoration: none' href = https://testharo.com/cn?type=lately>Testharo心理测试");
    //linkLabel2->setAlignment(Qt::AlignHCenter);//文字居中
    linkLabel2->setAlignment(Qt::AlignCenter);
    //连接信号槽
    connect(linkLabel2, &QLabel::linkActivated, [=](QString url){
        QDesktopServices::openUrl(QUrl(url));
    });

    //使用垂直布局
    QVBoxLayout *layout = new QVBoxLayout(this);
    layout->addWidget(linkLabel1);

}

quizWd::~quizWd()
{
    delete ui;
}
