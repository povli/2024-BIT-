#include "medicinesearchwindow.h"
#include "ui_medicinesearchwindow.h"
#include "pmainwindow.h"
#include "MedicineItem.h"
#include <QLineEdit>
#include <QVector>
#include <QMessageBox>
using namespace std;

MedicineSearchWindow::MedicineSearchWindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MedicineSearchWindow)
{
    ui->setupUi(this);
    QVector<MedicineItem> medicineitem(100);
    MIsqlite_Init();
    int sum=0;
    int i=0;
    //(id integer primary key autoincrement,"
    //"miname nametext unique not NULL,"
    //"miintro contenttext not NULL)"
    QSqlQuery query;

    ui->lineEdit->setText("abc");//先后问题,先主文件，然后响应

    qDebug()<<ui->lineEdit->text();
    QString selectmi=QString("select * from mitable where miname='%1';").arg(ui->lineEdit->text());
    query.exec(selectmi);
    while(query.next()){//把数据库找到的内容填进QVector
        medicineitem[i].pictureid=query.value(0).toString().toInt();
        medicineitem[i].name=query.value(1).toString();
        medicineitem[i].introduce=query.value(2).toString();
        i++;
    }
    sum=i;
    i=0;
    while(i<sum){
        medicineitem[i].picturelabel=new QLabel("picture",this);
        medicineitem[i].picturelabel->setPixmap(medicineitem[i].picture);
        medicineitem[i].picturelabel->move(0,70*i);
        medicineitem[i].picturelabel->setText(medicineitem[i].name);//设置显示的文本

        medicineitem[i].namelabel=new QLabel(medicineitem[i].name,this);
        medicineitem[i].namelabel->move(100,70*i);
        medicineitem[i].namelabel->setText(medicineitem[i].name);//设置显示的文本

        medicineitem[i].introducelabel=new QLabel(medicineitem[i].introduce,this);
        medicineitem[i].introducelabel->move(100,70*i+20);
        medicineitem[i].introducelabel->setText(medicineitem[i].introduce);//设置显示的文本
        i++;
    }
}

MedicineSearchWindow::~MedicineSearchWindow()
{
    delete ui;
}

void MedicineSearchWindow::on_backbtn_clicked()
{
    PMainWindow *w=new PMainWindow;
    w->show();
    this->close();
}
void MedicineSearchWindow::sendText(QString str)
{
    ui->lineEdit->setText(str);
    //database conduct
}


void MedicineSearchWindow::on_searchBtn_clicked()
{
    QString strText = ui->lineEdit->text();
    if (!strText.isEmpty()){
        //QMessageBox::information(this, QStringLiteral("搜索"), QStringLiteral("搜索内容为%1").arg(strText));
        int sum=3;
        int i=0;
        //把数据库找到的内容填进QVector
        i=0;
        QVector<MedicineItem> medicineitem(100);
        while(i<sum){
            medicineitem[i].picturelabel=new QLabel("picture",this);
            medicineitem[i].picturelabel->setPixmap(medicineitem[i].picture);
            medicineitem[i].picturelabel->move(0,70*i);
            medicineitem[i].picturelabel->setText(medicineitem[i].name);//设置显示的文本
            //medicineitem[i].picturelabel->setText("123123");

            medicineitem[i].namelabel=new QLabel(medicineitem[i].name,this);
            medicineitem[i].namelabel->move(100,70*i);
            medicineitem[i].namelabel->setText(medicineitem[i].name);//设置显示的文本
            medicineitem[i].namelabel->setText("2392834239");

            medicineitem[i].introducelabel=new QLabel(medicineitem[i].introduce,this);
            medicineitem[i].introducelabel->move(100,70*i+20);
            medicineitem[i].introducelabel->setText(medicineitem[i].introduce);//设置显示的文本
            i++;
        }
        update();
    }
}

