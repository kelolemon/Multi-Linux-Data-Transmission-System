//
// Created by Kelo Deng on 2020/10/21.
//

#ifndef MULTI_LINUX_DATA_TRANSMISSION_SYSTEM_RECEIVE_INIT_H
#define MULTI_LINUX_DATA_TRANSMISSION_SYSTEM_RECEIVE_INIT_H
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
# include <vector>
extern int my_host;
extern int tot_host;
extern void handle(int client);
// extern std::vector<std::vector<int>> ACK_matrix;
// extern void load_ACK_matrix(int rev_package_number);
#endif //MULTI_LINUX_DATA_TRANSMISSION_SYSTEM_RECEIVE_INIT_H

