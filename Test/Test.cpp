//
// Created by Kelo Deng on 2020/10/21.
//

# include "Test.h"

void test_tcp(int argc, char *argv[]) {
    if (argc != 3) {
        printf("Usage:%s <IP> <PORT>\n", argv[0]);
        return;
    }
    receive_init(argv[1], argv[2]);
}