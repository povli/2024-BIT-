#include "insidewd.h"
#include "ui_insidewd.h"
#include "GlobalData.h"
#include "InsideDoc.h"
#include <QLabel>
#include <vector>
#include <QVector>
#include <QPushButton>
using namespace std;

int GlobalData::InsideDocnum=3;

InsideWd::InsideWd(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::InsideWd)
{
    ui->setupUi(this);
    QVector<InsideDoc> insidedoc(100);
    int i=0;
    while(i<GlobalData::InsideDocnum){  //condition
        insidedoc[i].picturelabel=new QLabel("picture",this);
        insidedoc[i].picturelabel->setPixmap(insidedoc[i].picture);
        insidedoc[i].picturelabel->move(0,70*i);
        insidedoc[i].picturelabel->setText(insidedoc[i].name);//设置显示的文本

        insidedoc[i].namelabel=new QLabel(insidedoc[i].name,this);
        insidedoc[i].namelabel->move(100,70*i);
        insidedoc[i].namelabel->setText(insidedoc[i].name);//设置显示的文本

        insidedoc[i].introducelabel=new QLabel(insidedoc[i].introduce,this);
        insidedoc[i].introducelabel->move(100,70*i+20);
        insidedoc[i].introducelabel->setText(insidedoc[i].introduce);//设置显示的文本

        insidedoc[i].positionlabel=new QLabel(insidedoc[i].position,this);
        insidedoc[i].positionlabel->move(200,70*i);
        insidedoc[i].positionlabel->setText(insidedoc[i].position);//设置显示的文本

        QPushButton *tempBtn = new QPushButton(this);
        tempBtn->move(300,70*i+10);
        tempBtn->setText(insidedoc[i].id);//到时候读取text就可以知道预约那个医生。

        i++;
    }
}

InsideWd::~InsideWd()
{
    delete ui;
}
