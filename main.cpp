# include "main.h"

char filename[255];

int main(int argc, char *argv[]) {
    std::cout << "test" << std::endl;
    strcpy(filename, argv[1]);
    return 0;
}

