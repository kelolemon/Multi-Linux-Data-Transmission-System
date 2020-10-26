//
// Created by Kelo Deng on 2020/10/21.
//

#ifndef MULTI_LINUX_DATA_TRANSMISSION_SYSTEM_SENDER_H
#define MULTI_LINUX_DATA_TRANSMISSION_SYSTEM_SENDER_H
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
extern char filename[255];

typedef struct
{
    struct sockaddr_in rev_address;
    struct sockaddr_in send_address;
    int total_bytes;
    int bag_number;
    int checksum;
    int TTL;
} Header;
#endif //MULTI_LINUX_DATA_TRANSMISSION_SYSTEM_SENDER_H
