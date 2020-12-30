//
// Created by Kelo Deng on 2020/10/21.
//

# include "Test.h"

void test() {
    char filename[255];
    strcpy(filename, "../data/transfer_test_data.txt");
    if (load_file(filename)) {
        cout << "load success" << endl;
        for (auto & iter : load_file_data) {
            cout << iter.first << ":" << iter.second << endl;
        }
    }
}
