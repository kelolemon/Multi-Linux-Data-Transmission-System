//
// Created by Kelo Deng on 2020/10/21.
//

#ifndef MULTI_LINUX_DATA_TRANSMISSION_SYSTEM_MAIN_H
#define MULTI_LINUX_DATA_TRANSMISSION_SYSTEM_MAIN_H
# include <iostream>
# include <cstring>
# include "./Qtui/loginform.h"
# include <QApplication>
# include <QDesktopWidget>
# include "./Qtui/drawer.h"
extern void init();
extern void test_tcp(int argc, char *argv[]);
extern void test();
extern void receive_init(char* addr, char* port);
extern void sender_init(char *addr, char *port, int to_host, bool is_broadcast);
extern int my_host;
extern int to_hosts;
extern std::pair<std::string, std::string> get_host(int host_id);
#endif //MULTI_LINUX_DATA_TRANSMISSION_SYSTEM_MAIN_H
