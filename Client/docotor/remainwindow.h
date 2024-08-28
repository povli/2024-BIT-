#ifndef REMAINWINDOW_H
#define REMAINWINDOW_H

#include <QMainWindow>
#include <QtNetwork/QtNetwork>
#include "circularbuf.h"
#include "wavescene.h"
#include "DataType.h"
#include "tcpserver.h"
#include <QSqlQuery>
#include <QStandardItemModel>
#include "register.h"
#include "openuser.h"
#include <QDateTime>
#include "historydata.h"
#include <QTextCursor>
#include "questionnaire.h"
#include "medicalrecord.h"

namespace Ui {
class reMainWindow;
}

class reMainWindow : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit reMainWindow(QWidget *parent = 0);
    ~reMainWindow();

    void creatVar();
    void openSocket();
    void currentUser();
    void drawWave();
    CircularBuf* comboAdapter(int index);
    int speedAdapter(int index);
    int scaleAdapter(int index);

    void savehistory(QString fileName,CircularBuf *buf,QString dore);

    
private:
    Ui::reMainWindow *ui;

    Register r;
    OpenUser o;
    HistoryData hd;
    Questionnaire q;
    MedicalRecord m;

    QTextCursor cursor;

    TcpServer *tcpserver;
    client *client_indoor;
    service *service_indoor;
    //user *cuser;

    QTimer *timer;
    QTimer *saveTimer;

    QSqlQuery query;
    QStringList onlineList,userList;
    QStandardItemModel *onlineItemModel,*userItemModel;


    WaveScene *myscene;
    WaveScene *myscene2;
    WaveScene *myscene3;
    WaveScene *myscene4;
    WaveScene *myscene5;
    WaveScene *myscene6;

    CircularBuf *ecg_data_I;
    CircularBuf *ecg_data_II;
    CircularBuf *ecg_data_III;
    CircularBuf *ecg_data_AVL;
    CircularBuf *ecg_data_AVR;
    CircularBuf *ecg_data_AVF;
    CircularBuf *ecg_data_V1;
    CircularBuf *ecg_data_V2;
    CircularBuf *ecg_data_V3;
    CircularBuf *ecg_data_V4;
    CircularBuf *ecg_data_V5;
    CircularBuf *ecg_data_V6;
    CircularBuf *secg_data_I;
    CircularBuf *secg_data_II;
    CircularBuf *secg_data_III;
    CircularBuf *secg_data_AVL;
    CircularBuf *secg_data_AVR;
    CircularBuf *secg_data_AVF;
    CircularBuf *secg_data_V1;
    CircularBuf *secg_data_V2;
    CircularBuf *secg_data_V3;
    CircularBuf *secg_data_V4;
    CircularBuf *secg_data_V5;
    CircularBuf *secg_data_V6;

    QString historyDataDir;
    QString historyExceptionDir;

    short ecg_data[1024]={
                845,836,827,827,813,800,800,818,836,854,
                886,909,909,904,922,913,904,895,909,895,
                886,900,890,877,881,881,877,868,881,881,
                872,872,881,872,872,881,881,868,859,868,
                868,859,877,868,863,854,859,863,854,859,
                868,854,854,881,895,886,913,945,1031,1009,
                1027,1018,959,950,950,886,840,850,859,854,
                822,831,1359,2763,3300,3250,1577,672,759,850,
                804,800,800,795,790,809,809,795,813,818,
                813,804,827,827,822,827,836,827,818,827,
                818,813,795,790,772,754,768,772,790,818,
                863,886,900,922,931,922,922,931,922,922,
                931,931,918,913,922,918,904,913,913,895,
                890,895,890,881,890,886,881,868,881,877,
                872,881,886,877,872,886,881,872,872,877,
                868,863,881,886,877,881,886,881,890,936,
                931,940,963,1077,1050,1054,1040,995,986,968,
                909,877,863,881,890,813,945,1631,3077,3300,
                2959,1063,786,804,868,827,813,809,818,809,
                804,813,813,813,827,831,831,822,845,840,
                831,831,840,831,818,827,813,795,781,772,
                759,754,786,818,836,872,909,918,922,936,
                940,927,922,936,927,922,940,931,922,922,
                927,918,913,918,913,904,900,909,900,890,
                904,900,895,895,904,895,886,904,900,890,
                895,904,895,886,904,900,895,895,909,904,
                900,927,940,936,959,981,1059,1068,1072,1077,
                1004,1009,1004,950,895,890,895,895,868,859,
                1404,2809,3300,3218,1481,727,786,872,822,818,
                818,813,809,827,831,822,831,840,836,831,
                850,850,840,840,854,854,831,850,831,818,
                813,809,781,763,781,781,804,836,886,909,
                927,954,954,945,945,959,950,940,950,945,
                936,927,940,927,927,922,927,922,909,913,
                913,895,890,904,909,895,909,904,900,900,
                913,900,895,904,900,890,881,900,904,890,
                900,913,931,927,954,981,1054,1054,1050,1040,
                981,981,963,913,872,872,872,872,845,954,
                1577,2986,3300,3204,1277,754,763,863,818,818,
                809,795,822,813,818,813,827,827,827,836,
                845,836,836,854,850,845,859,863,854,845,
                859,840,822,822,827,822,836,872,895,909,
                927,940,936,931,940,931,918,922,927,918,
                904,918,913,900,895,909,904,900,913,909,
                904,900,913,904,895,909,913,904,900,913,
                913,900,913,909,900,890,904,900,895,909,
                909,931,927,959,972,1031,1077,1068,1072,1009,
                1018,1009,950,909,900,890,890,895,831,1286,
                2545,3300,3300,2009,695,804,890,863,854,845,
                836,845,854,840,840,863,854,850,868,868,
                863,868,877,872,868,872,872,854,850,845,
                827,809,804,800,800,822,868,904,927,963,
                972,972,972,981,972,968,986,986,972,968,
                977,963,950,959,959,945,936,940,931,918,
                931,922,918,909,922,913,909,913,913,909,
                909,918,913,909,918,918,909,900,913,913,
                909,922,918,922,931,954,972,986,1045,1095,
                1072,1068,1027,1018,1000,959,922,904,904,918,
                913,827,1313,2577,3300,3300,1822,727,800,890,
                859,836,827,836,836,822,822,836,831,822,
                840,840,840,831,850,850,845,850,850,840,
                827,831,818,795,786,781,763,768,804,836,
                868,909,936,940,950,968,963,959,959,968,
                959,945,959,954,940,936,945,936,922,931,
                936,918,913,918,909,904,913,918,904,895,
                909,909,895,904,904,890,890,909,895,890,
                895,904,900,900,913,909,909,913,945,936,
                954,986,1068,1072,1072,1072,1013,1009,1013,963,
                900,890,900,909,881,850,1350,2622,3300,3300,
                1831,695,786,886,840,818,818,822,813,818,
                831,818,822,836,840,831,840,845,850,840,
                845,854,831,840,840,818,795,800,786,763,
                754,772,781,804,854,890,913,918,936,931,
                918,931,940,922,918,922,918,913,904,918,
                904,895,904,904,890,890,890,886,872,890,
                890,872,877,881,881,877,886,890,886,886,
                886,886,868,890,890,886,886,890,881,877,
                895,909,904,918,959,1018,1050,1050,1050,981,
                968,972,918,854,868,863,854,836,831,1345,
                2568,3300,3300,1831,654,727,850,804,800,795,
                790,781,795,804,800,800,809,809,813,827,
                827,822,822,827,831,818,836,836,822,809,
                809,790,772,777,781,790,813,859,877,886,
                909,909,904,900,904,900,890,904,900,886,
                877,886,881,877,890,886,872,863,886,877,
                872,877,877,868,872,877,877,868,881,886,
                872,868,877,872,868,881,881,872,868,881,
                881,868,900,918,931,945,1004,1077,1040,1059,
                1022,986,981,968,904,881,877,895,886,781,
                1131,2127,3300,3300,2422,690,786,872,854,827,
                827,831,831,827,836,836,836,836,850,845,
                840,854,854,845,845,859,859,845};

signals:
    void savehisexcption();
    void sendQues(QString);

private slots:
    void getdata();
    void draw();
    void on_action_triggered();
    void on_action_2_triggered();
    void on_pushButton_clicked();
    void saveHistoryData();
    void saveHistoryException();
    void on_pushButton_2_clicked();
    void on_pushButton_3_clicked();
    void on_pushButton_4_clicked();
    void on_pushButton_5_clicked();
    void on_pushButton_6_clicked();
    void reviceQues(QString i);
};

#endif // REMAINWINDOW_H
