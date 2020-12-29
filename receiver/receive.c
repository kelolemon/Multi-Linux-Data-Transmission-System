# include "handle.h"

void *receive(struct *argv){
    int read_res = 0;
    int read_amnt = 0;
    int len_h = argv.sender_head.bag_bytes;
    char *buf = NULL;

    int len_to_read = len_h; 
    buf = (char*)malloc(len * sizeof(char));
    do{
        read_res = read(argv.sender_socket,buf+read_amnt,len_to_read);
        if(read_res < 0){
			printf("[srv] read data return %d and errno is %d\n", read_res, errno);
			if(errno == EINTR){
				printf("Test 3\n");	
				if(sig_type == SIGINT){
					printf("Test 4\n");
					free(buf);
					return;
				}
				continue;
			}
			free(buf);
			return;
		}
		if(read_res == 0){
			// printf("[srv] read data return 0.\n");
			free(buf);
			return;
		}
		read_amnt += read_res;
		if(read_amnt == len_h){
			//printf("[srv] read done as expected with read_amnt[%d]\n", read_amnt);
			break;
		}
		else if(read_amnt < len_h){
			//printf("[srv] read_amnt < len\n");break;
			len_to_read = len_h - read_amnt;
		}
		else{
			//printf("[srv] read_amnt > len\n");
			free(buf);
			return;
		}
    }while(1);
    //buf输入文件，调用sender.cpp进程？ 在receive?handle?
    free(buf);   
}