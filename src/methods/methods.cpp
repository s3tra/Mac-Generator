#include <iostream>
#include <vector>
#include <cmath>

#include "./methods.hpp"

using std::string, std::vector;

string generateMacAddress()
{
    vector<char> chars = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};
    string macAddress = "";

    for (int i = 0; i < 12; i++) {
        macAddress += chars[rand() % chars.size()];
        if (i % 2 == 1 && i != 11) macAddress += ':';
    }

    return macAddress;
}