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
# include <unistd.h>
# include <netinet/in.h>
# include <arpa/inet.h>
# include <csignal>
# include <cerrno>
# include <pthread.h>
# include <map>
# include "../include/global.h"
extern std::map<int, char[BIT_SIZE + 1]>buffer_file_data;
#endif //MULTI_LINUX_DATA_TRANSMISSION_SYSTEM_HANDLE_H
