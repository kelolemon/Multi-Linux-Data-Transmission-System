//
// Created by Kelo Deng on 2020/10/21.
//
# include "handle.h"

message message_queue[N];

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

    int len_h = 0;	  // 按主机字节序读写的长度变量；
	int len_n = 0;	  // 按网络字节序读写的长度变量；
	int len = 0;	  //读取到的字符串的长度，字节数
	int read_res;	  //
	char *buf = nullptr; //读取到的字符串对应的存放空间
	char *ptr=nullptr;

    do
	{
		read_res = read(sender_socket, &len_n, sizeof(len_n)); //len_n需要读的网络字节序
		len_h = ntohl(len_n);							//需要读的主机字节序
		len = len_h;									//装载主机中需要输入的
		// printf("%d",read_res);
		if (read_res == 0)
		{ //读取0字节，也退出echo服务函数
			// printf("[srv] read data return 0.\n");
			return;
		}
		if (read_res < 0)
		{ //判断，如果读取到的字节数小于0，打印提示信息，参考指南！
			// printf("[srv] read len return %d and errno is %d\n", read_res, errno);
			if (errno == EINTR)
			{ //如果errno为EINTR，表示read中断，输出Test 1？？？
				// printf("[srv] listenfd is closed!\n");
				//表示SIGINT中断，直接退出echo服务函数，准备结束服务器端程序
				if (sig_type == SIGINT)
				{
					printf("[srv] server is going to exit!\n");
					return; //中断则退出
				}
				continue; //如果不是SIGINT中断，而是其他问题产生的中断，则继续循环，read数据
			}
			return; //如果是异常导致的读取字节数为负，则退出echo服务函数
		}

		int read_amnt = 0; //read_amnt定义读到的字节数,总的
		//int len_to_read = len_h; //len_to_read是收到的客户端发送的字节数
		//分配空间用于存储收到的字符串
		// buf = (char *)malloc(len * sizeof(char));
		buf = (char *)malloc(len * sizeof(char));
		ptr=buf;
		//此段由同学们完成，注意判断边界
		do
		{
			read_res = read(sender_socket, ptr, len_h); //不知道多次调用的字节数会不会不同就新建一个变量
			// printf("%d\n",read_res);
			// printf("%d",len);
			if (read_res < 0)
			{
				printf("[srv] read data return %d and errno is %d\n", read_res, errno); 
				if (errno == EINTR)
				{
					// if (sig_type == SIGINT)
					// {
					// 	free(buf);
					// 	return;
					// }
					continue;
				}
				return;
			}
			// if (read_res == 0)
			// {
			// 	//printf("[srv] read data return 0.\n");
			// 	free(buf); //注意这里要释放buf空间
			// 	return;
			// }
			//不断的从服务套接字读取收到的字符数，加入到read_amnt统计变量中
			read_amnt += read_res;
			if (read_amnt == len)
			{
				break;
			}
			else if (read_amnt < len)
			{
				// printf("[srv] read_amnt < len\n");
				len_h =(len - read_amnt); //转化为需要读的网络字节序
				ptr +=read_res;//char 是个指针会移动
			}
			else
			{
				// printf("[srv] read_amnt > len\n");
				free(ptr);
				return;
			}
		} while (1);
		//需要打印的字符串
		len_n=htonl(len);
		len_h=len;
		printf("[echo_rqt] %s\n",buf);

        //处理拿到的结构体

		//判断checksum
		//查看包的头，如果是已经收到的就丢弃，如果没有收到就放到queue里面
		//判断queue是否已经满了，如果满了，就发送信号，询问是否需要帮助
		//循环等待



		// puts(buf);
		write(sender_socket, &len_n, sizeof(len_n));
		write(sender_socket, buf, len_h);
		//释放buf空间
	} while (1);

    

}
