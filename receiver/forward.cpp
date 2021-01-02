# include "handle.h"

void forward(Message unit_message){
    auto forward_init = [](char *addr, char *port) -> void {
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
        res = connect(sender_socket, reinterpret_cast<const sockaddr *>(&receive_addr), sizeof(receive_addr));
        if (res == -1 && errno == EINTR) continue;
        if (res == -1) {
            break;
        }
        printf("[sender] server[%s:%s] is connected!\n", addr, port);
    };

    auto write_message = [](void *message, int len, int sender_socket) -> bool {
        char *ptr = static_cast<char *>(message);
        int left = len;
        for (;;) {
            int res = write(sender_socket, ptr, left);
            if (res == 0) {
                break;
            }
            if (res == -1) {
                return false;
            }
            left -= res;
            ptr += res;
        }
        return true;
    };

    for(int i = 0; i < connections_len; i++){
        if (i != my_host){
            forward_init(connections_addr[i], connections_port[i]);
            unit_message.header.DestinationId = i; // temporary
            unit_message.header.LastLeapId = my_host; // temporary
            // write size
            int size = sizeof unit_message;
            int l_size = htonl(size);
            write(sender_socket, &l_size, 4);
            // prepare to write
            auto res = write_message(&unit_message, sizeof unit_message, sender_socket);
            if (res) {
                printf("sender successfully\n");
            } else {
                puts("error!");
                return;
            }
            close(sender_socket);
        }
    }
}