//
// Created by Kelo Deng on 2020/12/31.
//

#include "sha256.h"

std::string encrypt_sha256(const std::string& message) {
    char buf[3];
    unsigned char hash[SHA256_DIGEST_LENGTH];
    SHA256_CTX sha256;
    SHA256_Init(&sha256);
    SHA256_Update(&sha256, message.c_str(), message.size());
    SHA256_Final(hash, &sha256);
    std::string NewString;
    for (unsigned char i : hash) {
        sprintf(buf,"%02x",i);
        NewString += buf;
    }
    return NewString;
}