#include "server.h"
#include "ui_server.h"

#include <QMessageBox>
#include <QFileDialog>
#include <QTcpServer>

server::server(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::server)
{
    ui->setupUi(this);
    //setFixedSize(400,207);
    tPort = 5555;
    tSrv = new QTcpServer(this);
    connect(tSrv, SIGNAL(newConnection()), this, SLOT(sndMsg()));
    initSrv();
}

void server::initSrv()
{
    payloadSize = 64*1024;
    totalBytes = 0;
    bytesWritten = 0;
    bytesTobeWritten = 0;
    ui->progressBar->reset();
    ui->openBtn->setEnabled(true);
    ui->sendBtn->setEnabled(false);
    tSrv->close();
}

server::~server()
{
    delete ui;
}

void server::sndMsg()
{
    ui->sendBtn->setEnabled(false);
    clntConn = tSrv->nextPendingConnection();
    connect(clntConn, SIGNAL(bytesWritten(qint64)), this, SLOT(updClntProgress(qint64)));
    ui->messageLbl->setText(tr("��ʼ�����ļ� %1 !").arg(theFileName));
    locFile = new QFile(fileName);
    if (!locFile->open((QFile::ReadOnly)))
    {
        QMessageBox::warning(this, tr("Ӧ�ó���"), tr("�޷���ȡ�ļ�%1:\n%2")
                                   .arg(fileName).arg(locFile->errorString()));
        return;
    }
    totalBytes = locFile->size();
    QDataStream sendOut(&outBlock, QIODevice::WriteOnly);       //�����ͻ�����outBlock��װ��һ��DataStream���͵ı����У� ����ͨ�����ص�"<<"��������д�ļ�ͷ�ṹ

    sendOut.setVersion(QDataStream::Qt_4_8);
    time.start();
    QString curFile = fileName.right(fileName.size() - fileName.
                                     lastIndexOf('/')-1);       //ͨ��QString��right()����ȥ���ļ���·������,�����ļ����ֱ����ڱ�����
    sendOut << qint64(0) << qint64(0) << curFile;               //����һ����ʱ���ļ�ͷ������ֵ׷�ӵ�totalBytes�ֶΣ��Ӷ����ʵ����Ҫ���͵��ֽ����ļ�¼
    totalBytes += outBlock.size();

    sendOut.device()->seek(0);                                 //����д����ָ���ͷ��ʼ��
    sendOut << totalBytes << qint64(outBlock.size()
                                -sizeof(qint64)*2);             //��дʵ�ʵ��ܳ��Ⱥ��ļ�����
    bytesTobeWritten = totalBytes - clntConn->write(outBlock);  //�����ļ�ͷ����,ͬʱ�޸Ĵ������ֽ�����
    outBlock.resize(0);                                         //��շ��ͻ�����
}

//���½�����
void server::updClntProgress(qint64 numBytes)
{
    qApp->processEvents();                                      //������ļ�ʱ
    bytesWritten += (int)numBytes;
    if (bytesTobeWritten > 0)
    {
        outBlock = locFile->read(qMin(bytesTobeWritten, payloadSize));
        bytesTobeWritten -= (int)clntConn->write(outBlock);
        outBlock.resize(0);
    }
    else
    {
        locFile->close();
    }
    ui->progressBar->setMaximum(totalBytes);
    ui->progressBar->setValue(bytesWritten);
    float useTime = time.elapsed();
    double speed = bytesWritten / useTime;
    ui->messageLbl->setText(tr("�ѷ��� %1MB (%2MB/s) \n��%3MB ����ʱ:%4��\n����ʣ��ʱ�䣺%5��")
                            .arg(bytesWritten / (1024*1024))
                            .arg(speed*1000 / (1024*1024), 0, 'f', 2)
                            .arg(totalBytes /(1024*1024))
                            .arg(useTime/1000, 0, 'f', 0)
                            .arg(totalBytes/speed/1000 - useTime/1000, 0, 'f', 0));
    if (bytesWritten == totalBytes)
    {
        locFile->close();
        tSrv->close();
        ui->messageLbl->setText(tr("�����ļ� %1 �ɹ�").arg(theFileName));
    }
}

void server::on_openBtn_clicked()
{
    fileName = QFileDialog::getOpenFileName(this);
    if (!fileName.isEmpty())
    {
        theFileName = fileName.right(fileName.size()-fileName.lastIndexOf('/')-1);
        ui->messageLbl->setText(tr("Ҫ���͵��ļ�Ϊ��%1 ").arg(theFileName));
        ui->sendBtn->setEnabled(true);
        ui->openBtn->setEnabled(false);
    }
}

void server::on_sendBtn_clicked()
{
    if (!tSrv->listen(QHostAddress::Any, tPort))
    {
        qDebug() << tSrv->errorString();
        close();
        return;
    }
    ui->messageLbl->setText(tr("�ȴ��Է�����..."));
    emit sndFileName(theFileName);
}

void server::on_colseBtn_clicked()
{
    if (tSrv->isListening())
    {
        tSrv->close();
        if (locFile->isOpen())
            locFile->close();
        clntConn->abort();
    }
    close();
}

void server::closeEvent(QCloseEvent *)
{
    on_colseBtn_clicked();
}

void server::refused()
{
    tSrv->close();
    ui->messageLbl->setText("�Է��ܾ����գ�");
}
