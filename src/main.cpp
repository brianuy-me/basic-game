#include <iostream>
#include <string>

#include "character.hpp"

int main(void)
{
    Character c1;

    c1.setAllValues();
    c1.printStats();

    std::cout << "hello world" << std::endl;
    
    system("pause");
    return 0;
}