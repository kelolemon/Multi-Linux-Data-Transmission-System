# include "main.h"

char filename[255];
int to_hosts;

int main(int argc, char *argv[]) {
    init();
    int rt;
    if (fork() != 0) {
        QApplication b(argc, argv);
        auto res = get_host(my_host);
        receive_init((char *)res.first.c_str(), (char *)res.second.c_str());

    } else {
        QApplication a(argc, argv);
        Drawer drawer;
        drawer.resize(250,700);
        drawer.show();
        rt = QApplication::exec();
    }
    return rt;


//    LoginForm *login = new LoginForm();
//    login->show();
//
//
//    //MainForm *main = new MainForm();
//    if (login->exec() == QDialog::Accepted)
//    {
////        main->show();
////        main->move ((QApplication::desktop()->width() - main->width())/2,(QApplication::desktop()->height() - main->height())/2);
//        Drawer drawer;
//        drawer.resize(250,700);
//        drawer.show();
//        return a.exec();
//    }
//    init();
//    test();
//    if (argc == 1) {
//        puts("plz using para");
//        return 1;
//    }
//
//    if (strcmp(argv[1], "1") == 0) {
//        puts("begin to sender section");
//        to_hosts = int(strtol(argv[2], nullptr, 10));
//        auto hosts = get_host(to_hosts);
//        sender_init((char *) hosts.first.c_str(), (char *) hosts.second.c_str(), to_hosts, true);
//    } else {
//        puts("begin to receive section");
//        auto hosts = get_host(my_host);
//        receive_init((char *)hosts.first.c_str(), (char *)hosts.second.c_str());
//    }
//    return 0;
}

