//
// Created by Kelo Deng on 2020/10/21.
//

#ifndef MULTI_LINUX_DATA_TRANSMISSION_SYSTEM_SENDER_INIT_H
#define MULTI_LINUX_DATA_TRANSMISSION_SYSTEM_SENDER_INIT_H
# include <sys/socket.h>
# include <cstdio>
# include <cstdlib>
# include <cstring>
# include <unistd.h>
# include <netinet/in.h>
# include <arpa/inet.h>
# include <csignal>
# include <cerrno>
# include <pthread.h>
# include <map>
# include "../include/global.h"
extern void sender(int sender_socket, int to_host, bool is_broadcast);
extern std::map<int, char[BIT_SIZE + 1]>load_file_data;
#endif //MULTI_LINUX_DATA_TRANSMISSION_SYSTEM_SENDER_INIT_H


