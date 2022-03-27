#include <iostream>

int main(int countArg, char* args[]) {
    system("read -N 1 -p 'Press any key to continue...'");
    std::cout << "Hello, World!" << std::endl;
    return EXIT_SUCCESS;
}