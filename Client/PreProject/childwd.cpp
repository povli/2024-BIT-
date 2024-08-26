#include "childwd.h"
#include "ui_childwd.h"
#include "GlobalData.h"
#include "ChildDoc.h"
#include <QLabel>
#include <vector>
#include <QVector>
#include <QPushButton>
using namespace std;

int GlobalData::ChildDocnum =3;//全局静态

ChildWd::ChildWd(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ChildWd)
{
    ui->setupUi(this);
    QVector<ChildDoc> childdoc(100);
    int i=0;
    while(i<GlobalData::ChildDocnum){  //condition
        childdoc[i].picturelabel=new QLabel("picture",this);
        childdoc[i].picturelabel->setPixmap(childdoc[i].picture);
        childdoc[i].picturelabel->move(0,70*i);
        childdoc[i].picturelabel->setText(childdoc[i].name);//设置显示的文本

        childdoc[i].namelabel=new QLabel(childdoc[i].name,this);
        childdoc[i].namelabel->move(100,70*i);
        childdoc[i].namelabel->setText(childdoc[i].name);//设置显示的文本

        childdoc[i].introducelabel=new QLabel(childdoc[i].introduce,this);
        childdoc[i].introducelabel->move(100,70*i+20);
        childdoc[i].introducelabel->setText(childdoc[i].introduce);//设置显示的文本

        childdoc[i].positionlabel=new QLabel(childdoc[i].position,this);
        childdoc[i].positionlabel->move(200,70*i);
        childdoc[i].positionlabel->setText(childdoc[i].position);//设置显示的文本

        QPushButton *tempBtn = new QPushButton(this);
        tempBtn->move(300,70*i+10);
        tempBtn->setText(childdoc[i].id);//到时候读取text就可以知道预约那个医生。

        i++;
    }

}

ChildWd::~ChildWd()
{
    delete ui;
}
