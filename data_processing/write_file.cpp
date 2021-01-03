//
// Created by Kelo Deng on 2021/1/3.
//

#include <sys/stat.h>
#include "write_file.h"

bool write_file(char *filename) {
    std::fstream file(filename,std::ios::out | std::ios::binary | std::ios::app);
    if (!file) {
        puts("open file error!");
        return false;
    }
    for (auto iter : buffer_file_data) {
        auto write_message = iter.second;
        file.write(write_message, sizeof write_message);
    }
    return true;
}