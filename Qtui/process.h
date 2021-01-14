#ifndef PROCESS_H
#define PROCESS_H

#include <QDialog>
#include <unistd.h>

namespace Ui {
class process;
}

class process : public QDialog
{
    Q_OBJECT

public:
    explicit process(QWidget *parent = nullptr);
    ~process();

private:
    Ui::process *ui;
};

#endif // PROCESS_H
