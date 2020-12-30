//
// Created by Kelo Deng on 2020/10/21.
//

#ifndef MULTI_LINUX_DATA_TRANSMISSION_SYSTEM_TEST_H
#define MULTI_LINUX_DATA_TRANSMISSION_SYSTEM_TEST_H
# include <iostream>
# include <cstdio>
# include <map>
# include "../include/global.h"
using namespace std;
extern bool load_file(char* filename);
extern map<int, char[BIT_SIZE + 1]>load_file_data;

#endif //MULTI_LINUX_DATA_TRANSMISSION_SYSTEM_TEST_H
