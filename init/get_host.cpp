//
// Created by Kelo Deng on 2021/1/2.
//

#include "get_host.h"

std::pair<std::string, std::string> get_host(int host_id) {
    auto index = host_data[host_id];
    std::pair<std::string, std::string> hosts;
    hosts.first = connections_addr[index];
    hosts.second = connections_port[index];
    return hosts;
}

std::string get_host_key_filename(int host_id) {
    auto index = host_data[host_id];
    return pub_key_filename[index];
}