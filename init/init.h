//
// Created by Kelo Deng on 2020/12/30.
//

#ifndef MULTI_LINUX_DATA_TRANSMISSION_SYSTEM_INIT_H
#define MULTI_LINUX_DATA_TRANSMISSION_SYSTEM_INIT_H
# include "../include/global.h"
# include <map>
using namespace std;
extern void load_connections();
extern bool load_file(char* filename);
extern void load_hosts();
extern void load_key_filename();
extern map<int, char[BIT_SIZE + 1]>load_file_data;
#endif //MULTI_LINUX_DATA_TRANSMISSION_SYSTEM_INIT_H
