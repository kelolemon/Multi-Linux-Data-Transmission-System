//
// Created by Kelo Deng on 2021/1/10.
//

#include "load_key_filename.h"
using namespace std;

void load_key_filename() {
    Json::Value root;
    ifstream config_doc("../config/public_key_list.json", std::ifstream::binary);
    config_doc >> root;
    for (auto i = 0; i < connections_len; i++) {
        pub_key_filename[i] = root["key_list"][i].asString();
    }
}