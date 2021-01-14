//
// Created by Kelo Deng on 2020/10/21.
//
# include "receive_init.h"
std::vector<std::vector<int>> ACK_matrix;
void receive_init(char *addr, char *port) {
    int res(0);
    char ipv4_sender_addr[20];
    // init the socket
    puts("enter receive init");
    int receive_socket = socket(PF_INET, SOCK_STREAM, 0);
    if (receive_socket < 0) {
        puts("Init Socket error!");
        return;
    }
    puts("socket created");

    // init the network addr
    char *ret;
    sockaddr_in receive_addr{}, sender_addr{};
    in_addr ipv4_receive_addr{};
    receive_addr.sin_family = AF_INET;
    inet_pton(AF_INET, addr, (void *)&ipv4_receive_addr);
    receive_addr.sin_addr = ipv4_receive_addr;
    receive_addr.sin_port = htons(strtol(port, &ret, 10));
    socklen_t addr_size = sizeof(struct sockaddr_in);
    printf("[receiver] server[%s:%s] is initializing!\n", addr, port);

    // bind the socket
    res = bind(receive_socket, reinterpret_cast<const sockaddr *>(&receive_addr), sizeof(receive_addr));
    if (res < 0) {
        puts("Bind error");
        return;
    }

    // listen the socket
    res = listen(receive_socket, 8);
    if (res < 0) {
        puts("Listen error");
        return;
    }
    // accept connection and handle
    for (;;) {
        int sender_socket = accept(receive_socket, reinterpret_cast<sockaddr *>(&sender_addr), &addr_size);    //得到发送端套接字和发送端地址结构
        if (sender_socket == -1 & errno == EINTR) break;
        if (sender_socket < 0) {
            puts("accept error");
            return;
        }
        // accepted sender socket. handle package.
        inet_ntop(AF_INET, (void *) &sender_addr.sin_addr, ipv4_sender_addr, 16);
        printf("[receiver] sender[%s:%d] is accepted!\n", ipv4_sender_addr, ntohs(sender_addr.sin_port));
        //receive the package number and init the ACK
        // int rev_package_number;
        // read(sender_socket, &rev_package_number, sizeof rev_package_number);
        // load_ACK_matrix(rev_package_number);
        handle(sender_socket);
        close(sender_socket);
    }
    close(receive_socket);
    printf("[receiver] listen is closed!\n");
    printf("[receiver] server is exiting\n");
}

/*
void load_ACK_matrix(int rev_package_number){ //初始化为0
    for(int i = 0;i < rev_package_number; i++){
        std::vector<int> tmp;//一维vector  tmp
        for(int j = 0;j < tot_host; j++){
             if(j == my_host){
                 tmp.push_back(1); // 当为自己的ip时候就不用再转发
             }
             tmp.push_back(0);
         }
        ACK_matrix.push_back(tmp);//把一维 vector tmp 放进 二维vector vt
    }
}*/