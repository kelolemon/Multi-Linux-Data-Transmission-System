//
// Created by Kelo Deng on 2020/12/31.
//

#include "load_hosts.h"

using namespace std;

// this host_data means the data of host of id i contains the connections_addr[host_data[i]]

void load_hosts() {
    Json::Value root;
    ifstream config_doc("../config/host_list.json", std::ifstream::binary);
    config_doc >> root;
    tot_host = root["tot"].asInt();
    my_host = root["my_id"].asInt();
    for (auto i = 0; i < tot_host; i++) {
        host_data[i] = root[to_string(i)].asInt();
    }
}
