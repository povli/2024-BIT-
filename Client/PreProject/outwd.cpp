#include "outwd.h"
#include "ui_outwd.h"
#include "GlobalData.h"
#include <QLabel>
#include <vector>
#include <QVector>
#include <QPushButton>
#include "timetablewd.h"
using namespace std;

int GlobalData::OutDocnum=0;

OutWd::OutWd(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::OutWd)
{
    ui->setupUi(this);

    //请在此处调用datatrans()

    int i=0;
    while(i<GlobalData::OutDocnum){  //condition
        outdoc[i].picturelabel=new QLabel("picture",this);
        outdoc[i].picturelabel->setPixmap(outdoc[i].picture);
        outdoc[i].picturelabel->move(0,70*i);
        outdoc[i].picturelabel->setText(outdoc[i].name);//设置显示的文本

        outdoc[i].namelabel=new QLabel(outdoc[i].name,this);
        outdoc[i].namelabel->move(100,70*i);
        outdoc[i].namelabel->setText(outdoc[i].name);//设置显示的文本

        outdoc[i].introducelabel=new QLabel(outdoc[i].introduce,this);
        outdoc[i].introducelabel->move(100,70*i+20);
        outdoc[i].introducelabel->setText(outdoc[i].introduce);//设置显示的文本

        outdoc[i].positionlabel=new QLabel(outdoc[i].position,this);
        outdoc[i].positionlabel->move(200,70*i);
        outdoc[i].positionlabel->setText(outdoc[i].position);//设置显示的文本

        str=outdoc[i].name;

        QPushButton *tempBtn = new QPushButton(this);
        tempBtn->move(300,70*i+10);
        tempBtn->setText(outdoc[i].id);//到时候读取text就可以知道预约那个医生。
        connect(tempBtn,SIGNAL(clicked()),this,SLOT(showdate()));
        i++;
    }
}

OutWd::~OutWd()
{
    delete ui;
}
void OutWd::showdate(){
    TimetableWd *ttWd=new TimetableWd;
    ttWd->resize(500,300);
    ttWd->showdoc("外科",str);
    ttWd->show();
}
//封装借口，数据传输用
//num是数据库里医生数量,其余请传入对应的数组：工号，姓名，介绍，职位。
void OutWd::datatrans(int num,QString *id,QString *name,QString *introduce,QString *position){
    GlobalData::OutDocnum=num;
    while(num--){
        OutDoc temp;
        temp.id=id[num];
        temp.name=name[num];
        temp.introduce=introduce[num];
        temp.position=position[num];
        outdoc.append(temp);
    }
}
