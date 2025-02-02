#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QTextCharFormat>
#include "sendfile.h"

QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE
class Widget : public QWidget
{
    Q_OBJECT

protected:
    void usrEnter(QString usrname,QString ipaddr); //处理用户加入
    void usrLeft(QString usrname,QString time);     //处理用户离开
    void sndMsg();  //发送信息
    void rcvMsg();  //接收信息

public:
    Widget(QWidget *parent, QString usrname);
    ~Widget();
    void printMsg(QString fname);
    void printMsg2(QString fname);
    QString getUsr();       //获取主机名


public:
    Ui::Widget *ui;
    sendfile *srv;
    bool box1_Checked();
    bool box2_Checked();
    bool box3_Checked();
    bool box4_Checked();

private slots:
    void on_sendTBtn_clicked();



};
#endif // WIDGET_H
