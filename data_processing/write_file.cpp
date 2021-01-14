//
// Created by Kelo Deng on 2021/1/3.
//

#include <sys/stat.h>
#include "write_file.h"

bool write_file(char *filename) {
    std::fstream file(filename,std::ios::out | std::ios::binary);
    if (!file) {
        puts("open file error!");
        return false;
    }
    std::string write_str;
    for (auto iter : buffer_file_data) {
        puts("writing file");
        puts(iter.second);
        std::string write_message = iter.second;
        write_str += write_message;
    }
    printf("%s \n%lu", (char *)write_str.c_str(), write_str.size());
    file.write((char *)write_str.c_str(), write_str.size());
    return true;
}