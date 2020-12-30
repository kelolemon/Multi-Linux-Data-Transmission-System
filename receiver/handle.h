//
// Created by Kelo Deng on 2020/10/21.
//

#ifndef MULTI_LINUX_DATA_TRANSMISSION_SYSTEM_HANDLE_H
#define MULTI_LINUX_DATA_TRANSMISSION_SYSTEM_HANDLE_H
# include <iostream>
# include <fstream>
# include <sys/stat.h>
# include <string>
# include <cstring>
# include <filesystem>

# include <sys/socket.h>
# include <cstdio>
# include <cstdlib>
# include <cstring>
# include <unistd.h>
# include <sys/socket.h>
# include <netinet/in.h>
# include <arpa/inet.h>
# include <csignal>
# include <cerrno>
# include <pthread.h>

struct header {
    struct sockaddr_in receive_addr;
    struct sockaddr_in sender_addr;
    int total_bytes;
    int bag_number;
    int bag_bytes;
    int checksum;
    int TTL;
};

struct sender_argv {
    struct header sender_head;
    int sender_socket;
};

#endif //MULTI_LINUX_DATA_TRANSMISSION_SYSTEM_HANDLE_H
