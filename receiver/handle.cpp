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
}