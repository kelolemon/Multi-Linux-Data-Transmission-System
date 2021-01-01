//
// Created by Kelo Deng on 2020/10/21.
//

# include "sender.h"

void sender(int sender_socket) {
    // core function
    // this function is to send package to receive node and use SR protocol

    // this function is also used to receive the information from the receive node.
    // if node has already has the package just sent.
    // 1. it may happen because of SR
    // 2. it may indicate that the receiver do not need forward.
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

    for (auto iter : load_file_data) {
        Message unit_message{};
        strcpy(unit_message.message, iter.second);
        unit_message.header.PackageId = iter.first;
        unit_message.header.IsBroadCast = true; // temporary
        unit_message.header.DestinationId = 3; // temporary
        unit_message.header.LastLeapId = 1; // temporary
        unit_message.header.SourceId = 1; // temporary
        unit_message.header.TotalPackageNumber = load_file_data.size();
        unit_message.header.checkSum = 0; // temporary
        unit_message.header.PackageSize = sizeof unit_message;
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
    }
}
