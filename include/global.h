//
// Created by Kelo Deng on 2020/10/22.
//

#ifndef MULTI_LINUX_DATA_TRANSMISSION_SYSTEM_GLOBAL_H
#define MULTI_LINUX_DATA_TRANSMISSION_SYSTEM_GLOBAL_H
# define PRIVATE_KEY_FILENAME "./config/rsa.private"
# define MAX_CONNECTIONS 10
# define BIT_SIZE 256
# include <cstring>
# include <string>
# include <cstdio>
# include <iostream>
# include <fstream>

struct PackageHeader {
    bool IsBroadCast;
    bool IsACK;
    int TotalPackageNumber;
    int PackageId;
    int PackageSize;
    int checkSum;
    int SourceId;
    int DestinationId;
    int LastLeapId;
};

struct Message {
    PackageHeader header;
    char message[BIT_SIZE + 1];
};

#endif //MULTI_LINUX_DATA_TRANSMISSION_SYSTEM_GLOBAL_H
