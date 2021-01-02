//
// Created by Kelo Deng on 2020/10/21.
//

#ifndef MULTI_LINUX_DATA_TRANSMISSION_SYSTEM_MAIN_H
#define MULTI_LINUX_DATA_TRANSMISSION_SYSTEM_MAIN_H
# include <iostream>
extern void init();
extern void test_tcp(int argc, char *argv[]);
extern void test();
extern void receive_init(char *addr, char *port);
extern void sender_init(char *addr, char *port);
extern int my_host;

#endif //MULTI_LINUX_DATA_TRANSMISSION_SYSTEM_MAIN_H
