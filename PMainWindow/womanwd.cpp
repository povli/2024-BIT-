#include "womanwd.h"
#include "ui_womanwd.h"
#include "GlobalData.h"
#include "WomanDoc.h"
#include <QLabel>
#include <vector>
#include <QVector>
#include <QPushButton>
using namespace std;
int GlobalData::WomanDocnum=3;
WomanWd::WomanWd(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::WomanWd)
{
    ui->setupUi(this);
    QVector<WomanDoc> womandoc(100);
    int i=0;
    while(i<GlobalData::WomanDocnum){  //condition
        womandoc[i].picturelabel=new QLabel("picture",this);
        womandoc[i].picturelabel->setPixmap(womandoc[i].picture);
        womandoc[i].picturelabel->move(0,70*i);
        womandoc[i].picturelabel->setText(womandoc[i].name);//设置显示的文本

        womandoc[i].namelabel=new QLabel(womandoc[i].name,this);
        womandoc[i].namelabel->move(100,70*i);
        womandoc[i].namelabel->setText(womandoc[i].name);//设置显示的文本

        womandoc[i].introducelabel=new QLabel(womandoc[i].introduce,this);
        womandoc[i].introducelabel->move(100,70*i+20);
        womandoc[i].introducelabel->setText(womandoc[i].introduce);//设置显示的文本

        womandoc[i].positionlabel=new QLabel(womandoc[i].position,this);
        womandoc[i].positionlabel->move(200,70*i);
        womandoc[i].positionlabel->setText(womandoc[i].position);//设置显示的文本

        QPushButton *tempBtn = new QPushButton(this);
        tempBtn->move(300,70*i+10);
        tempBtn->setText(womandoc[i].id);//到时候读取text就可以知道预约那个医生。

        i++;
    }
}

WomanWd::~WomanWd()
{
    delete ui;
}
