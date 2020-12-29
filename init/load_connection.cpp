//
// Created by Kelo Deng on 2020/12/30.
//

#include "load_connection.h"

using namespace std;
void load_connections() {
    Json::Value root;
    ifstream config_doc("../config/connections.json", std::ifstream::binary);
    config_doc >> root;
    connections_len = root["connections"].size();
    for (int i = 0; i < connections_len; i++){
        connections[i] = root["connections"][i].asString();
    }
    cout << connections_len << endl;
    for (const auto& x : connections) {
        cout << x << endl;
    }
}