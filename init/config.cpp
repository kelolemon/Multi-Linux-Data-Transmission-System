//
// Created by Kelo Deng on 2020/12/30.
//
# include "../include/global.h"
# include <map>

std::string connections_addr[MAX_CONNECTIONS];
std::string connections_port[MAX_CONNECTIONS];
std::map<int, int>host_data;
int connections_len = 0;
int my_host;
int tot_host;