//
// Created by Kelo Deng on 2020/10/21.
//
# include "handle.h"
<<<<<<< HEAD
# include "receive.c"
=======

message message_queue[N];

>>>>>>> e7ce952ae2f190ef7717672a5a70731b5d8a452d
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

    struct header head;
    int read_res = 0;

    read_res = read(sender_socket, &head, sizeof(head));
    if(read_res < 0){
        printf("[srv] read len return %d and errno is %d\n", read_res, errno);
			if(errno == EINTR){
				printf("Test 1\n");
				if(sig_type == SIGINT){
					printf("Test 2\n");
					return;	
				}
				continue;
			}
			return;
    }
    if(read_res == 0){
        return;
    }

    char ipv4_sender_addr[20];
    inet_ntop(AF_INET, (void *) &head.sender_addr.sin_addr, ipv4_sender_addr, 16);

    if(isexist(head.bag_number)){
        if(issource(ipv4_sender_addr)){

        }
        else{

        }
    }
    else{
        if(issource(ipv4_sender_addr)){
            
        }
        else{

        }
        struct sender_argv argv;
        argv.sender_head = head;
        argv.sender_socket = sender_socket;
        if((ret = pthread_create(&thread[sender_socket],NULL,receive,argv)) != 0){
            errno = ret;
            perror("pthread_create");
            return -1;
        }
        if((ret = pthread_join(thread[sender_socket],NULL)) != 0){
            errno = ret;
            perror("pthread_join");
            return -1;
        }
    }
}

int bagnum[1000]=0;

int isexist(int bagnum){
    if(bagnum[bagnum] == 1){
        return 1;
    }
    else{
        bagnum[bagnum] = 1;
        return 0;
    }
}

int issource(char addr[]){               //维护一个源发送地址 how?
    if((strcmp()))
}
