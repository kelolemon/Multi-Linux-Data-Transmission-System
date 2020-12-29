//
// Created by Kelo Deng on 2020/10/21.
//

# include "sender.h"
# include "../global.h"

void sender(int sender_socket) {
    // core function
    // this function is to send package to receive node and use SR protocol

    // this function is also used to receive the information from the receive node.
    // if node has already has the package just sent.
    // 1. it may happen because of SR
    // 2. it may indicate that the receiver do not need forward.

    // open the file we need to trans
    std::fstream file(filename,std::ios::in | std::ios::binary);
    if (!file) {
        puts("open file error!");
        return;
    }

    // calc the size of the file.
    struct stat stat_buf{};
    stat(filename, &stat_buf);
    int size = stat_buf.st_size;

    // read the file by BIT_SIZE
    int block_number = size / BIT_SIZE + 1;

    for (int i = 0; i < block_number; i++) {
        char buf[BIT_SIZE + 1];
        file.read(reinterpret_cast<char *>(&buf), BIT_SIZE);

        // construct the package header.
        // haven't done yet.
        // send buf to receive
        // haven't done yet.
        // receive the receiver's message
        // haven't done yet.
    }
}
