#include "newwidget.h"
#include "./ui_newwidget.h"

NewWidget::NewWidget(QWidget *parent, QString usrname)
    : QWidget(parent)
    , ui(new Ui::NewWidget)
{
    ui->setupUi(this);
}

NewWidget::~NewWidget()
{
    delete ui;
}

