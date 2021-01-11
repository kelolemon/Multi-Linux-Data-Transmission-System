#include "widget.h"
#include "./ui_widget.h"
#include <QMessageBox>
#include <QScrollBar>
#include <QDateTime>
#include <QProcess>

Widget::Widget(QWidget *parent,QString usrname)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::sndMsg()   //发送信息
{
}

void Widget::rcvMsg()    //接收信息
{
    QByteArray datagram;
    QDataStream in(&datagram, QIODevice::ReadOnly);
    int msgType;//信息类型 可能是用户加入、用户退出、普通信息、文件。
    in >> msgType;//获取信息的类型
    /*
     *
     */

    QString usrName, ipAddr;
    //获取系统时间
    QString time = QDateTime::currentDateTime().toString("yyyy-MM-dd hh:mm:ss");
    switch (msgType) {
       case 1: //如果是用户进入
        in>>usrName>>ipAddr;
        usrEnter(usrName,ipAddr);
        break;
       case 2:  //如果是用户退出
        in>>usrName;
        usrLeft(usrName,time);
        break;
       case 3: //如果是文件

        break;
    }
}


void Widget::usrEnter(QString usrname, QString ipaddr){
    bool isEmpty = ui->usrTblWidget->findItems(usrname, Qt::MatchExactly).isEmpty();
    //判断该用户是否已经加入用户列表中
    if (isEmpty) {
        QTableWidgetItem *usr = new QTableWidgetItem(usrname);
        QTableWidgetItem *ip = new QTableWidgetItem(ipaddr);

        ui->usrTblWidget->insertRow(0);
        ui->usrTblWidget->setItem(0,0,usr);
        ui->usrTblWidget->setItem(0,1,ip);
        ui->msgBrowser->setTextColor(Qt::gray);
        ui->msgBrowser->setCurrentFont(QFont("Times New Roman",10));
        ui->msgBrowser->append(tr("%1 在线！").arg(usrname));
        ui->usrNumLbl->setText(tr("在线主机数：%1").arg(ui->usrTblWidget->rowCount()));

        //告诉其他主机这个新用户上线
//        sndMsg(UsrEnter);
    }
}

void Widget::usrLeft(QString usrname, QString time){
    int rowNum = ui->usrTblWidget->findItems(usrname, Qt::MatchExactly).first()->row();
    ui->usrTblWidget->removeRow(rowNum);
    ui->msgBrowser->setTextColor(Qt::gray);
    ui->msgBrowser->setCurrentFont(QFont("Times New Roman", 10));
    ui->msgBrowser->append(tr("%1 于 %2 离开！").arg(usrname).arg(time));
    ui->usrNumLbl->setText(tr("在线主机数：%1").arg(ui->usrTblWidget->rowCount()));
}

//void Widget::getIP(){}
//void Widget::getUsr(){}
//void Widget::getMsg(){}

////发送按钮的触发函数
//void Widget::on_sendBtn_clicked(){
//    sendMsg(Msg);
//}

