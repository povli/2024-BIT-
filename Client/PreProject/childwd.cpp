#include "childwd.h"
#include "ui_childwd.h"
#include "GlobalData.h"
#include <QLabel>
#include <vector>
#include <QVector>
#include <QPushButton>
#include "timetablewd.h"

using namespace std;

int GlobalData::ChildDocnum =0;//全局静态

ChildWd::ChildWd(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ChildWd)
{
    ui->setupUi(this);

    //请在此处调用datatrans();!!!!!!!!!!!!!!!!!!!!!!!看这里！！！！
    /*int j=5;
    while(j--){
        QLabel *temp=new QLabel(this);
        QString pixmapstring=QString(":/res/doc%1.jpeg").arg(j);
        QPixmap pixmap(pixmapstring);
        temp->setPixmap(pixmap.scaled(QSize(100,100),
                                       Qt::IgnoreAspectRatio,
                                       Qt::SmoothTransformation));
        temp->resize(100,100);
        temp->move(0,100*j);
    }*/

    int i=0;
    while(i<GlobalData::ChildDocnum){  //condition
        QLabel *temp=new QLabel(this);
        QString pixmapstring=QString(":/res/doc%1.jpeg").arg(i+1);
        QPixmap pixmap(pixmapstring);
        temp->setPixmap(pixmap.scaled(QSize(100,100),
                                       Qt::IgnoreAspectRatio,
                                       Qt::SmoothTransformation));
        temp->resize(100,100);
        temp->move(0,100*i);
        //childdoc[i].picturelabel=new QLabel("picture",this);
        //childdoc[i].picturelabel->setPixmap(childdoc[i].picture);
        //childdoc[i].picturelabel->move(0,70*i);
        //childdoc[i].picturelabel->setText(childdoc[i].name);//设置显示的文本

        childdoc[i].namelabel=new QLabel(childdoc[i].name,this);
        childdoc[i].namelabel->move(100,100*i);
        childdoc[i].namelabel->setText(childdoc[i].name);//设置显示的文本

        childdoc[i].introducelabel=new QLabel(childdoc[i].introduce,this);
        childdoc[i].introducelabel->move(100,100*i+60);
        childdoc[i].introducelabel->setText(childdoc[i].introduce);//设置显示的文本

        childdoc[i].positionlabel=new QLabel(childdoc[i].position,this);
        childdoc[i].positionlabel->move(200,100*i);
        childdoc[i].positionlabel->setText(childdoc[i].position);//设置显示的文本
        str=childdoc[i].name;
        QPushButton *tempBtn = new QPushButton(this);
        tempBtn->move(300,100*i+30);
        tempBtn->setText(childdoc[i].id);//到时候读取text就可以知道预约那个医生。
        connect(tempBtn,SIGNAL(clicked()),this,SLOT(showdate()));

        i++;
    }

}

ChildWd::~ChildWd()
{
    delete ui;
}
void ChildWd::showdate(){
    TimetableWd *ttWd=new TimetableWd;
    ttWd->resize(500,300);
    ttWd->showdoc("儿科",str);
    ttWd->show();
}
//封装借口，数据传输用
//num是数据库里医生数量,其余请传入对应的数组：工号，姓名，介绍，职位。
void ChildWd::datatrans(int num,QString *id,QString *name,QString *introduce,QString *position){
    GlobalData::ChildDocnum=num;
    while(num--){
        ChildDoc temp;
        temp.id=id[num];
        temp.name=name[num];
        temp.introduce=introduce[num];
        temp.position=position[num];
        childdoc.append(temp);
    }
}

