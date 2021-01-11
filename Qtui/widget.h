#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QTextCharFormat>
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

    QString getIP();       //获取IP地址
    QString getUsr();       //获取主机名
    QString getMsg();       //获取传输信息

public:
    Widget(QWidget *parent, QString usrname);
    ~Widget();

private:
    Ui::Widget *ui;
};
#endif // WIDGET_H
