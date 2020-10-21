//
// Created by Kelo Deng on 2020/10/21.
//
# include "srv_init.h"

void srv_init(char *addr, char *port) {
    int res(0);
    char ipv4_cli_addr[20];
    // init the socket
    int srv_socket = socket(PF_INET, SOCK_STREAM, 0);
    if (srv_socket < 0) {
        puts("Init Socket error!");
        return;
    }

    // init the network addr
    char *ret;
    sockaddr_in srv_addr{}, cli_addr{};
    in_addr ipv4_srv_addr{};
    srv_addr.sin_family = AF_INET;
    inet_pton(AF_INET, addr, (void *)&ipv4_srv_addr);
    srv_addr.sin_addr = ipv4_srv_addr;
    srv_addr.sin_port = htons(strtol(port, &ret, 10));
    socklen_t addr_size = sizeof(struct sockaddr_in);
    printf("[srv] server[%s:%s] is initializing!\n", addr, port);

    // bind the socket
    res = bind(srv_socket, reinterpret_cast<const sockaddr *>(&srv_addr), sizeof(srv_addr));
    if (res < 0) {
        puts("Bind error");
        return;
    }

    // listen the socket
    res = listen(srv_socket, 8);
    if (res < 0) {
        puts("Listen error");
        return;
    }
    // accept connection and handle
    for (;;) {
        int cli_socket = accept(srv_socket, reinterpret_cast<sockaddr *>(&cli_addr), &addr_size);
        if (cli_socket == -1 & errno == EINTR) break;
        if (cli_socket < 0) {
            puts("accept error");
            return;
        }
        // accepted cli socket. handle package.
        inet_ntop(AF_INET, (void *) &cli_addr.sin_addr, ipv4_cli_addr, 16);
        printf("[srv] client[%s:%d] is accepted!\n", ipv4_cli_addr, ntohs(cli_addr.sin_port));
        handle(cli_socket);
        close(cli_socket);
    }
    close(srv_socket);
    printf("[srv] listen is closed!\n");
    printf("[srv] server is exiting\n");
}