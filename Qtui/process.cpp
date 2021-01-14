#include "process.h"
#include "ui_process.h"

process::process(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::process)
{
    int totalBytes=100, bytesWritten=50;
    ui->setupUi(this);
    ui->progressBar->reset();
    ui->progressBar->setMaximum(totalBytes);
    if (fork() != 0) {
        while(true){
            sleep(static_cast<unsigned int>(0.1));
            ui->progressBar->setValue(bytesWritten);
            if (bytesWritten >= totalBytes) {
                sleep(static_cast<unsigned int>(0.5));
                break;
            }
        }
    }
}

process::~process()
{
    delete ui;
}