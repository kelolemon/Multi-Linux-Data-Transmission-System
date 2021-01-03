//
// Created by Kelo Deng on 2020/10/21.
//
#include <string>
# include "sender_init.h"
void sender_init(char *addr, char *port, int to_host) {
    int res(0);
    // create sender socket
    int sender_socket = socket(PF_INET, SOCK_STREAM, 0);
    if (sender_socket < 0) {
        puts("init sender socket error!");
        return;
    }

    // init network addr
    sockaddr_in receive_addr{};
    in_addr ipv4_receive_addr{};
    char *ret;
    receive_addr.sin_family = AF_INET;
    inet_pton(AF_INET, addr, (void *)&ipv4_receive_addr);
    receive_addr.sin_addr = ipv4_receive_addr;
    receive_addr.sin_port = htons(strtol(port, &ret, 10));
    socklen_t addr_size = sizeof(struct sockaddr_in);

    // begin to connect the receiver and send package
    for (;;) {
        res = connect(sender_socket, reinterpret_cast<const sockaddr *>(&receive_addr), sizeof(receive_addr));
        if (res == -1 && errno == EINTR) continue;
        if (res == -1) {
            break;
        }
        printf("[sender] server[%s:%s] is connected!\n", addr, port);
        sender(sender_socket, to_host);
    }
    close(sender_socket);
}