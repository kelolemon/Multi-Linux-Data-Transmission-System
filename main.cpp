# include "main.h"

char filename[255];

int main(int argc, char *argv[]) {
    init();
    if (strcmp(argv[1], "1") == 0) {
        puts("begin to sender section");
        sender_init(argv[2], argv[3]);
    } else {
        puts("begin to receive section");
        receive_init(argv[2], argv[3]);
    }
    return 0;
}

