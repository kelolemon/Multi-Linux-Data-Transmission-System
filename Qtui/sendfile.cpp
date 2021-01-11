#include "sendfile.h"
#include "ui_sendfile.h"

sendfile::sendfile(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::sendfile)
{
    ui->setupUi(this);

}

sendfile::~sendfile()
{
    delete ui;
}

//void sendfile::initSrv()
//{
//    totalBytes = 0;
//    bytesWritten = 0;
//    bytesTobeWrite = 0;

//    ui->sStatusLbl->setText(tr("请选择要发送的文件"));
//    ui->progressBar->reset();
//    ui->sOpenBtn->setEnabled(true);
//    ui->sSendBtn->setEnabled(false);
//}

void sendfile::sndMsg(){
//    ui->sSendBtn->setEnabled(false);
//    /*
//     获取要传输的文件
//     */

//    ui->sStatusLbl->setText(tr("开始传送文件 %1 ！").arg(theFileName));


//    time.start();  // 开始计时

}

void sendfile::updProgress(qint64 numBytes) {
    
}
//void sendfile::on_sSendBtn_clicked(){}
//void sendfile::on_sCloseBtn_clicked(){}

