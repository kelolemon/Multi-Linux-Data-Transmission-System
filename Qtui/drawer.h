#ifndef DRAWER_H
#define DRAWER_H

#include <QToolBox>
#include <QToolButton>
//#include "widget.h"
#include "newwidget.h"

class Drawer : public QToolBox
{
    Q_OBJECT
public:
    Drawer(QWidget *parent=0,Qt::WindowFlags f=0);
private slots:
    void showChatWidget1();
    void showChatWidget2();
    void showChatWidget3();
    void showChatWidget4();
private:
    QToolButton *toolBtn1;
    QToolButton *toolBtn2;
    QToolButton *toolBtn3;
    QToolButton *toolBtn4;
    NewWidget *chatWidget1;
    NewWidget *chatWidget2;
    NewWidget *chatWidget3;
    NewWidget *chatWidget4;
};

#endif // DRAWER_H
