//
// Created by Kelo Deng on 2021/1/2.
//

#ifndef MULTI_LINUX_DATA_TRANSMISSION_SYSTEM_GET_HOST_H
#define MULTI_LINUX_DATA_TRANSMISSION_SYSTEM_GET_HOST_H
# include "../include/global.h"
# include <map>
extern std::string connections_addr[MAX_CONNECTIONS];
extern std::string connections_port[MAX_CONNECTIONS];
extern std::map<int, int>host_data;
#endif //MULTI_LINUX_DATA_TRANSMISSION_SYSTEM_GET_HOST_H
