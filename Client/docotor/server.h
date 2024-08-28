#ifndef SERVER_H
#define SERVER_H

#include <QDialog>
#include <QTime>
#include <QTcpSocket>

class QFile;
class QTcpServer;
class QTcpClient;
namespace Ui {
class server;
}

class server : public QDialog
{
    Q_OBJECT

public:
    explicit server(QWidget *parent = 0);
    ~server();
    void initSrv();
    void refused();

protected:
    void closeEvent(QCloseEvent *);

private:
    Ui::server *ui;
    qint16 tPort;
    QTcpServer *tSrv;
    QString fileName;
    QString theFileName;
    QFile *locFile;                  //�����͵��ļ�
    qint64 totalBytes;               //�ܹ���Ҫ���͵��ֽ���
    qint64 bytesWritten;             //�ѷ����ֽ���
    qint64 bytesTobeWritten;         //�������ֽ���
    qint64 payloadSize;              //����ʼ��Ϊһ������
    QByteArray outBlock;             //����һ�η��͵�����
    QTcpSocket *clntConn;            //�ͻ������ӵ��׽���
    QTime time;

private slots:
    void sndMsg();                   //��������
    void updClntProgress(qint64 numBytes);    //���½�����

    void on_sendBtn_clicked();

    void on_openBtn_clicked();

    void on_colseBtn_clicked();

signals:
    void sndFileName(QString fileName);
};

#endif // SERVER_H
