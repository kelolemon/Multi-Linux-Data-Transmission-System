#include "drawer.h"
#include <QGroupBox>
#include <QVBoxLayout>
#include <QTableWidget>
#include <QTableWidgetItem>

class NewWidget;

Drawer::Drawer(QWidget *parent, Qt::WindowFlags f)
    :QToolBox(parent,f)
{
    setWindowTitle(tr("File Transport"));
    setWindowIcon(QPixmap(":/images/images/FileTrans.png"));

    toolBtn1 = new QToolButton;
    toolBtn1->setText(tr("主机1"));
    toolBtn1->setIcon(QPixmap(":/images/images/user1.png"));
    toolBtn1->setIconSize(QPixmap(":/images/images/user1.png").size());
    toolBtn1->setAutoRaise(true);
    toolBtn1->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
    connect(toolBtn1,SIGNAL(clicked()),this,SLOT(showChatWidget1()));

    toolBtn2 = new QToolButton;
    toolBtn2->setText(tr("主机2"));
    toolBtn2->setIcon(QPixmap(":/images/images/user2.png"));
    toolBtn2->setIconSize(QPixmap(":/images/images/user2.png").size());
    toolBtn2->setAutoRaise(true);
    toolBtn2->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
    connect(toolBtn2,SIGNAL(clicked()),this,SLOT(showChatWidget2()));

    toolBtn3 = new QToolButton;
    toolBtn3->setText(tr("主机3"));
    toolBtn3->setIcon(QPixmap(":/images/images/user3.png"));
    toolBtn3->setIconSize(QPixmap(":/images/images/user3.png").size());
    toolBtn3->setAutoRaise(true);
    toolBtn3->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
    connect(toolBtn3,SIGNAL(clicked()),this,SLOT(showChatWidget3()));

    toolBtn4 = new QToolButton;
    toolBtn4->setText(tr("主机4"));
    toolBtn4->setIcon(QPixmap(":/images/images/user4.png"));
    toolBtn4->setIconSize(QPixmap(":/images/images/user4.png").size());
    toolBtn4->setAutoRaise(true);
    toolBtn4->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
    connect(toolBtn4,SIGNAL(clicked()),this,SLOT(showChatWidget4()));

    QGroupBox *groupBox = new QGroupBox;
    QVBoxLayout *layout = new QVBoxLayout(groupBox);
    layout->setMargin(20);
    layout->setAlignment(Qt::AlignLeft);
    layout->addWidget(toolBtn1);
    layout->addWidget(toolBtn2);
    layout->addWidget(toolBtn3);
    layout->addWidget(toolBtn4);
    layout->addStretch();

    //this->addItem((QWidget*)groupBox,tr("主机列表"));
}


void Drawer::showChatWidget1(){
      chatWidget1 = new NewWidget(0, toolBtn1->text());
      chatWidget1->setWindowTitle(toolBtn1->text());
      chatWidget1->setWindowIcon(toolBtn1->icon());
      chatWidget1->resize(700,700);
      chatWidget1->show();
 
}

void Drawer::showChatWidget2(){
    chatWidget2 = new NewWidget(0, toolBtn2->text());
    chatWidget2->setWindowTitle(toolBtn2->text());
    chatWidget2->setWindowIcon(toolBtn2->icon());
    chatWidget2->show();
}

void Drawer::showChatWidget3(){
    chatWidget3 = new NewWidget(0, toolBtn3->text());
    chatWidget3->setWindowTitle(toolBtn3->text());
    chatWidget3->setWindowIcon(toolBtn3->icon());
    chatWidget3->show();
}

void Drawer::showChatWidget4(){
    chatWidget4 = new NewWidget(0, toolBtn4->text());
    chatWidget4->setWindowTitle(toolBtn4->text());
    chatWidget4->setWindowIcon(toolBtn4->icon());
    chatWidget4->show();
}
