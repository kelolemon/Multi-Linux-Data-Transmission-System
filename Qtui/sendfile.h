#ifndef SENDFILE_H
#define SENDFILE_H

#include <QDialog>
#include <QTime>
extern bool load_file(char *filename);
extern void sender_init(char *addr, char *port, int to_host, bool is_broadcast);
extern std::pair<std::string, std::string> get_host(int host_id) ;
class QFile;
QT_BEGIN_NAMESPACE
namespace Ui {
class sendfile;
}
QT_END_NAMESPACE

class sendfile : public QDialog
{
    Q_OBJECT

public:
    explicit sendfile(QWidget *parent = nullptr);
    ~sendfile();
    void initSrv();
    void refused();

private:
    Ui::sendfile *ui;

    QString fileName; //文件名
    QString theFileName; //real file name
    QFile *locFile; //待发送的文件

    qint64 totalBytes;      //总共需要发送的字节数
    qint64 bytesWritten;    //已经发送的字节数
    qint64 bytesTobeWrite;  //待发送的字节数

    QTime time;        //计时器，统计传输所需时间

private slots:
    void sndMsg();
    void updProgress(qint64 numBytes); //更新进度条
    void on_sOpenBtn_clicked(); // open button
    void on_sSendBtn_clicked(); // send button
};

#endif // SENDFILE_H
