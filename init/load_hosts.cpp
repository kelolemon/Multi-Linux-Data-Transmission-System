//
// Created by Kelo Deng on 2020/12/31.
//

#include "load_hosts.h"

using namespace std;

int my_host;
int tot_host;

void load_hosts() {
    Json::Value root;
    ifstream config_doc("../config/host_list.json", std::ifstream::binary);
    config_doc >> root;
    tot_host = root["tot"].asInt();
    my_host = root["my_id"].asInt();
}