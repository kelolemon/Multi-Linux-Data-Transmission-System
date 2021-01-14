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
# include "../init/load_connection.h"
# include "../init/load_hosts.h"

#include "../Qtui/widget.h"
#include <QMessageBox>

extern std::map<int, char[BIT_SIZE + 1]>buffer_file_data;
// extern std::vector<std::vector<int>> ACK_matrix;
extern int to_hosts;
extern void forward(const Message& unit_message);
extern bool write_file(char* filename);
// void receive_ACK(const Message& unit_message);
// void send_ACK(const Message& unit_message);
std::string encrypt_sha256(const std::string& message);
extern std::string get_host_key_filename(int host_id);
// extern std::string RsaPubEncrypt(const std::string &clear_text, const std::string &pub_key);
// extern std::string RsaPriDecrypt(const std::string &cipher_text, const std::string &pri_key);
#endif //MULTI_LINUX_DATA_TRANSMISSION_SYSTEM_HANDLE_H