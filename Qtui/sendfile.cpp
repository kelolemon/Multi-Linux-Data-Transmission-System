#include "sendfile.h"
#include "ui_sendfile.h"
#include "widget.h"
#include <QFile>
#include <QMessageBox>
#include <QFileDialog>
#include <QDebug>

sendfile::sendfile(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::sendfile)
{
    ui->setupUi(this);

}
void sendfile::initSrv()
{
    totalBytes = 0;
    bytesWritten = 0;
    bytesTobeWrite = 0;

    ui->sStatuLbl->setText(tr("请选择要传送的文件"));
    ui->sOpenBtn->setEnabled(true);
    ui->sSendBtn->setEnabled(false);

}

void sendfile::on_sOpenBtn_clicked()
{
    fileName = QFileDialog::getOpenFileName(this);
    if(!fileName.isEmpty())
    {
        theFileName = fileName.right(fileName.size() - fileName.lastIndexOf('/')-1);
        ui->sStatuLbl->setText(tr("要传送的文件为：%1 ").arg(theFileName));
        ui->sSendBtn->setEnabled(true);
        ui->sOpenBtn->setEnabled(false);
    }
}

void sendfile::on_sSendBtn_clicked()
{
    QByteArray fn = fileName.toLatin1();
    char *filename= fn.data();
    load_file(filename);
    Widget *ptr = (Widget*)parentWidget();
    QString msg;
    msg = "";
    int flag = 0;
    std::string m="";
    if(ptr->box1_Checked() && ptr->getUsr() != QString::fromLocal8Bit("主机1")){
        flag = 1;
        int to_hosts = 0;
        auto hosts = get_host(to_hosts);
        sender_init((char *) hosts.first.c_str(), (char *) hosts.second.c_str(), to_hosts, true);
        msg += "主机1 ";
        m += "主机1 ";

    }
    if(ptr->box2_Checked() && ptr->getUsr() != QString::fromLocal8Bit("主机2")){
        flag = 1;
        int to_hosts = 1;
        auto hosts = get_host(to_hosts);
        sender_init((char *) hosts.first.c_str(), (char *) hosts.second.c_str(), to_hosts, true);
        msg += "主机2 ";
        m += "主机2 ";
    }
    if(ptr->box3_Checked() && ptr->getUsr() != QString::fromLocal8Bit("主机3")){
        flag = 1;
        int to_hosts = 2;
        auto hosts = get_host(to_hosts);
        sender_init((char *) hosts.first.c_str(), (char *) hosts.second.c_str(), to_hosts, true);
        msg += "主机3 ";
        m += "主机3 ";
    }
    if(ptr->box4_Checked() && ptr->getUsr() != QString::fromLocal8Bit("主机4")) {
        flag = 1;
        int to_hosts = 3;
        auto hosts = get_host(to_hosts);
        sender_init((char *) hosts.first.c_str(), (char *) hosts.second.c_str(), to_hosts, true);
        msg += "主机4 ";
        m += "主机4 ";
    }
    m = "已发送至" + m;
    const char* m2 = m.c_str();
    ui->sStatuLbl->setText(tr(m2));
    msg = "向"+msg+"发送文件"+theFileName;
    if(flag == 1)
        ptr->printMsg(msg);
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

