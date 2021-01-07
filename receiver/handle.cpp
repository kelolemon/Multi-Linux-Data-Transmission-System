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
            //send_ACK(ACK)
            if(unit_message.header.IsACK == false){
                send_ACK(unit_message);
            }
            else{
                receive_ACK(unit_message);
            }
        }else{
            puts("error!");
            break;
        }
        //store in buffer
        if (buffer_file_data.find(unit_message.header.PackageId) == buffer_file_data.end()) {
            strcpy(buffer_file_data[unit_message.header.PackageId], unit_message.message);
            if(buffer_file_data.size() > unit_message.header.TotalPackageNumber / 2){
                forward(unit_message);//大于百分之五十转发
            }

        }
        if (buffer_file_data.size() == unit_message.header.TotalPackageNumber){
            printf("The message is all received");
            //TODO 重传，检查ACK矩阵，如果有没收到的就发送，可以删除，感觉冗余了
            for (int i =0; i < ACK_matrix.size(); i++){
                for (int j=0; j < ACK_matrix[i].size(); j++){
                    if(ACK_matrix[i][j] == 0){
                        Message forward_message{};
                        strcpy(forward_message.message, buffer_file_data[i]);
                        forward_message.header.PackageId = i;
                        forward_message.header.IsBroadCast = true; // temporary
                        forward_message.header.IsACK = false; // temporary
                        forward_message.header.DestinationId = to_hosts; //广播，不清楚，无限大?
                        forward_message.header.LastLeapId = my_host;
                        forward_message.header.SourceId = my_host;
                        forward_message.header.TotalPackageNumber = buffer_file_data.size();
                        forward_message.header.checkSum = 0; // temporary
                        forward_message.header.PackageSize = sizeof buffer_file_data[i];
                        forward(forward_message);
                    }
                }

            }
          
        }
    }
    //write to the file
    char filename[255];
    strcpy(filename, "../data/receive_test_data.txt");
    write_file(filename);
}

void send_ACK(Message unit_message){
    Message ACK_message{};
    strcpy(ACK_message.message, "this is a ACK");
    ACK_message.header.PackageId = unit_message.header.PackageId;
    ACK_message.header.IsBroadCast = true; // temporary
    ACK_message.header.IsACK = true; // temporary
    ACK_message.header.DestinationId = unit_message.header.SourceId;//设置成无限大的数？
    ACK_message.header.LastLeapId = unit_message.header.SourceId;
    ACK_message.header.SourceId = unit_message.header.DestinationId;
    ACK_message.header.TotalPackageNumber = 0;
    ACK_message.header.checkSum = 0; // temporary
    ACK_message.header.PackageSize = sizeof ACK_message;
    forward(ACK_message);
    printf("send ACK successfully!");
}

void receive_ACK(Message unit_message){
    ACK_matrix[unit_message.header.PackageId][unit_message.header.DestinationId] = 1;
    printf("Receive ACK%d from %d", unit_message.header.PackageId, unit_message.header.DestinationId);
}
