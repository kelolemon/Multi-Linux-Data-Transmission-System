//
// Created by Kelo Deng on 2020/10/21.
//
# include "handle.h"

void handle(int sender_socket) {
    // core function
    // this function is to receive the page from sender and return ack to sender.
    // there are many conditions
    // if the package number has been received.
    // it is perhaps sent by another node that forwards the package to this receiver.
    // it is perhaps sent by the origin sender because of SR
    // if the package number hasn't been received. receive the package and
    // if the package is sent by node that forwards the package. we need tell that node we need more package
    // if the package is sent by original sender. just let sender continue sending.

    // later, when we receive the package, we need to forward this package to other node, if necessary.
    // may use the sender model.

    auto read_message = [](void *message, int len, int sender_socket) -> bool{
        char *ptr = static_cast<char *>(message);
        int left = len;
        for(;;){
            int res = read(sender_socket, ptr, left);
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

    for(;;){
        //read size
        int l_size = 0;
        read(sender_socket, &l_size, 4);
        int size = ntohl(l_size);

        if (size == 0) {
            break;
        }
        //read
        Message unit_message{};
        auto res = read_message(&unit_message, size, sender_socket);
        if(res){
            printf("receive successfully\n");
        }else{
            puts("error!");
            break;
        }
        //store in buffer
        if (buffer_file_data.find(unit_message.header.PackageId) == buffer_file_data.end()) {
            strcpy(buffer_file_data[unit_message.header.PackageId], unit_message.message);
        }
        //receive the buffer, forward to another hosts.
        
    }
}