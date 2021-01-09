//
// Created by Kelo Deng on 2021/1/10.
//

#include "rsa.h"

std::string RsaPubEncrypt(const std::string &clear_text, const std::string &pub_key)
{
    std::string encrypt_text;
    FILE* f = fopen((const char *) pub_key.c_str(), "r");
    if (!f) {
        puts("No key file!");
        exit(1);
    }
    RSA* rsa = RSA_new();
    rsa = PEM_read_RSAPublicKey(f, &rsa, nullptr, nullptr);
    int key_len = RSA_size(rsa);
    int block_len = key_len - 11;

    char *sub_text = new char[key_len + 1];
    memset(sub_text, 0, key_len + 1);
    int ret = 0;
    int pos = 0;
    std::string sub_str;
    while (pos < clear_text.length()) {
        sub_str = clear_text.substr(pos, block_len);
        memset(sub_text, 0, key_len + 1);
        ret = RSA_public_encrypt(sub_str.length(), (const unsigned char*)sub_str.c_str(), (unsigned char*)sub_text, rsa, RSA_PKCS1_PADDING);
        if (ret >= 0) {
            encrypt_text.append(std::string(sub_text, ret));
        }
        pos += block_len;
    }
    RSA_free(rsa);
    delete[] sub_text;
    return encrypt_text;
}


std::string RsaPriDecrypt(const std::string &cipher_text, const std::string &pri_key) {
    std::string decrypt_text;
    RSA *rsa = RSA_new();
    FILE* f = fopen((const char *) pri_key.c_str(), "r");
    if (!f) {
        puts("No key file!");
        exit(1);
    }
    rsa = PEM_read_RSAPrivateKey(f, &rsa, nullptr, nullptr);
    if (rsa == nullptr) {
        unsigned long err = ERR_get_error();
        char err_msg[1024] = {0};
        ERR_error_string(err, err_msg);
        printf("err msg: err:%ld, msg:%s\n", err, err_msg);
        return std::string();
    }

    int key_len = RSA_size(rsa);
    char *sub_text = new char[key_len + 1];
    memset(sub_text, 0, key_len + 1);
    int ret = 0;
    std::string sub_str;
    int pos = 0;
    while (pos < cipher_text.length()) {
        sub_str = cipher_text.substr(pos, key_len);
        memset(sub_text, 0, key_len + 1);
        ret = RSA_private_decrypt(sub_str.length(), (const unsigned char *) sub_str.c_str(), (unsigned char *) sub_text,
                                  rsa, RSA_PKCS1_PADDING);
        if (ret >= 0) {
            decrypt_text.append(std::string(sub_text, ret));
            printf("pos:%d, sub: %s\n", pos, sub_text);
            pos += key_len;
        }
    }
    delete[] sub_text;
    RSA_free(rsa);

    return decrypt_text;
}