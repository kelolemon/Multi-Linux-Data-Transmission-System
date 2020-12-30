//
// Created by Kelo Deng on 2020/10/22.
//

#ifndef MULTI_LINUX_DATA_TRANSMISSION_SYSTEM_GLOBAL_H
#define MULTI_LINUX_DATA_TRANSMISSION_SYSTEM_GLOBAL_H

# define MAX_CONNECTIONS 10
# define BIT_SIZE 256
# include <cstring>
# include <string>
# include <cstdio>
# include <iostream>
# include <fstream>

struct PackageHeader {
    bool IsBroadCast;
    int TotalPackageNumber;
    int PackageId;
    int PackageSize;
    int checkSum;
    int SourceId;
    int DestinationId;
    int LastLeapId;
};

typedef struct {
    PackageHeader header;
    char message[BIT_SIZE];
}message;

#endif //MULTI_LINUX_DATA_TRANSMISSION_SYSTEM_GLOBAL_H
