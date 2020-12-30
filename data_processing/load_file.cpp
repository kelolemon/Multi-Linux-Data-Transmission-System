//
// Created by Kelo Deng on 2020/12/30.
//

#include <sys/stat.h>
#include "load_file.h"
using namespace std;

bool load_file(char *filename) {
    std::fstream file(filename,std::ios::in | std::ios::binary);
    if (!file) {
        puts("open file error!");
        return false;
    }
    struct stat stat_buf{};
    stat(filename, &stat_buf);
    int size = stat_buf.st_size;
    int block_number = size / BIT_SIZE + 1;
    for (int i = 0; i < block_number; i++) {
        char buf[BIT_SIZE + 1];
        memset(buf, 0, sizeof(buf));
        file.read(reinterpret_cast<char *>(&buf), BIT_SIZE);
        strcpy(load_file_data[i], buf);
    }
    return true;
}