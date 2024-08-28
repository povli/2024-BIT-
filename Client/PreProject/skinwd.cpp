#include "skinwd.h"
#include "ui_skinwd.h"
#include "GlobalData.h"
#include <QLabel>
#include <vector>
#include <QVector>
#include <QPushButton>
#include "timetablewd.h"
using namespace std;

int GlobalData::SkinDocnum=0;

SkinWd::SkinWd(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::SkinWd)
{
    ui->setupUi(this);

    //此处调用datatrans()

    int i=0;
    while(i<GlobalData::SkinDocnum){  //condition
        skindoc[i].picturelabel=new QLabel("picture",this);
        skindoc[i].picturelabel->setPixmap(skindoc[i].picture);
        skindoc[i].picturelabel->move(0,70*i);
        skindoc[i].picturelabel->setText(skindoc[i].name);//设置显示的文本

        skindoc[i].namelabel=new QLabel(skindoc[i].name,this);
        skindoc[i].namelabel->move(100,70*i);
        skindoc[i].namelabel->setText(skindoc[i].name);//设置显示的文本

        skindoc[i].introducelabel=new QLabel(skindoc[i].introduce,this);
        skindoc[i].introducelabel->move(100,70*i+20);
        skindoc[i].introducelabel->setText(skindoc[i].introduce);//设置显示的文本

        skindoc[i].positionlabel=new QLabel(skindoc[i].position,this);
        skindoc[i].positionlabel->move(200,70*i);
        skindoc[i].positionlabel->setText(skindoc[i].position);//设置显示的文本

        str=skindoc[i].name;

        QPushButton *tempBtn = new QPushButton(this);
        tempBtn->move(300,70*i+10);
        tempBtn->setText(skindoc[i].id);//到时候读取text就可以知道预约那个医生。
        connect(tempBtn,SIGNAL(clicked()),this,SLOT(showdate()));
        i++;
    }
}

SkinWd::~SkinWd()
{
    delete ui;
}
void SkinWd::showdate(){
    TimetableWd *ttWd=new TimetableWd;
    ttWd->resize(500,300);
    ttWd->showdoc("皮肤科",str);
    ttWd->show();
}
//封装借口，数据传输用
//num是数据库里医生数量,其余请传入对应的数组：工号，姓名，介绍，职位。
void SkinWd::datatrans(int num,QString *id,QString *name,QString *introduce,QString *position){
    GlobalData::SkinDocnum=num;
    while(num--){
        SkinDoc temp;
        temp.id=id[num];
        temp.name=name[num];
        temp.introduce=introduce[num];
        temp.position=position[num];
        skindoc.append(temp);
    }
}
