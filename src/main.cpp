#include <iostream>
#include "helper.h"

int main(int countArg, char* args[]) {
    std::cout << hello(3, 7) << "\n";
    int* i = nullptr;
    std::cout << *i << "END\n";
    return EXIT_SUCCESS;
}