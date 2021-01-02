//
// Created by Kelo Deng on 2020/12/30.
//

#include "init.h"
#include <cstring>

void init() {
    load_connections();

    char filename[255];
    strcpy(filename, "../data/transfer_test_data.txt");
    if (load_file(filename)) {
        cout << "load success" << endl;
        for (auto & iter : load_file_data) {
            cout << iter.first << ":" << iter.second << endl;
        }
    }

}