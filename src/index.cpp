#include <iostream>
#include <ctime>
#include <cstdlib>

#include "./methods/methods.hpp"

int main()
{
    srand(time(NULL));
    
    string macAddress = generateMacAddress();
    std::cout << macAddress << std::endl;

    return 0;
}