#include "client.h"
#include "ui_client.h"
#include <QTcpSocket>
#include <QMessageBox>

Client::Client(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Client)
{
    ui->setupUi(this);
    setFixedSize(400, 190);
    totalBytes = 0;
    bytesReceived = 0;
    fileNameSize = 0;
    tClnt = new QTcpSocket(this);
    tPort = 5555;
    connect(tClnt, SIGNAL(readyRead()), this, SLOT(readMsg()));
    connect(tClnt, SIGNAL(error(QAbstractSocket::SocketError)), this,
            SLOT(displayErr(QAbstractSocket::SocketError)));
}

void Client::displayErr(QAbstractSocket::SocketError sockErr)
{
    switch (sockErr) {
    case QAbstractSocket::RemoteHostClosedError : break;
    default:
        qDebug() << tClnt->errorString();
    }
}

Client::~Client()
{
    delete ui;
}

void Client::newConn()
{
    blockSize = 0;
    tClnt->abort();
    tClnt->connectToHost(hostAddr, tPort);
    time.start();
}

//���շ������������ļ�����
void Client::readMsg()
{
    QDataStream in(tClnt);
    in.setVersion(QDataStream::Qt_4_8);
    float useTime = time.elapsed();
    if (bytesReceived <= sizeof(qint64)*2)
    {
        if ((tClnt->bytesAvailable() >= sizeof(qint64)*2) && (fileNameSize ==0))
        {
            in >> totalBytes >> fileNameSize;
            bytesReceived += sizeof(qint64)*2;
        }
        if ((tClnt->bytesAvailable() >= fileNameSize) && (fileNameSize != 0))
        {
            in >> fileName;
            bytesReceived += fileNameSize;
            if(!locFile->open(QFile::WriteOnly))
            {
                QMessageBox::warning(this, tr("Ӧ�ó���"), tr("�޷���ȡ�ļ�%1��\n%2.")
                                     .arg(fileName).arg(locFile->errorString()));
                return;
            }
        }
        else{
            return;
        }
    }
    if (bytesReceived < totalBytes)
    {
        bytesReceived += tClnt->bytesAvailable();
        inBlock = tClnt->readAll();
        locFile->write(inBlock);
        inBlock.resize(0);
    }
    ui->progressBar->setMaximum(totalBytes);
    ui->progressBar->setValue(bytesReceived);
    double speed = bytesReceived / useTime;
    ui->msgLable->setText(tr("�ѽ��� %1MB (%2MB/s) \n ��%3MB ����ʱ: %4��\n����ʣ��ʱ��: %5��")
                          .arg(bytesReceived / (1024*1024))
                          .arg(speed*1000 / (1024*1024), 0, 'f', 2)
                          .arg(totalBytes / (1024*1024))
                          .arg(useTime/1000, 0, 'f', 0)
                          .arg(totalBytes/speed/1000 - useTime/1000, 0, 'f', 0));
    if (bytesReceived == totalBytes)
    {
        locFile->close();
        tClnt->close();
        ui->msgLable->setText(tr("�����ļ� %1 ���").arg(fileName));
    }
}

void Client::on_cancleBtn_clicked()
{
    tClnt->abort();
    if (locFile->isOpen())
        locFile->close();
}

void Client::on_closeBtn_clicked()
{
    tClnt->abort();
    if (locFile->isOpen())
        locFile->close();
}

void Client::closeEvent(QCloseEvent *)
{
    on_closeBtn_clicked();
}

void Client::setFileName(QString name)
{
    locFile = new QFile(name);
}

void Client::setHostAddr(QHostAddress addr)
{
    hostAddr = addr;
    newConn();
}

