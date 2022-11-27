#include <iostream>
#include "hello.h"

int main(int, char **)
{
    std::string helloFredrik = generateHelloString("Fredrik");
    std::cout << helloFredrik << std::endl;

    return 0;
}