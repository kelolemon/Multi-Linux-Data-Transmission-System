# include "main.h"

char filename[255];
int to_hosts;

int main(int argc, char *argv[]) {
    init();
    test();
    if (argc == 1) {
        puts("plz using para");
        return 1;
    }

    if (strcmp(argv[1], "1") == 0) {
        puts("begin to sender section");
        to_hosts = int(strtol(argv[2], nullptr, 10));
        auto hosts = get_host(to_hosts);
        sender_init((char *) hosts.first.c_str(), (char *) hosts.second.c_str(), to_hosts);
    } else {
        puts("begin to receive section");
        auto hosts = get_host(my_host);
        receive_init((char *)hosts.first.c_str(), (char *)hosts.second.c_str());
    }
    return 0;
}

