#include <iostream>
#include <ctime>
#include <cmath>
#include <cstdlib>

using std::string;

string generateMacAddress()
{
    char chars[16] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};
    string pairs[8] = {"02", "04", "06", "08", "0A", "0C", "0E", "10"};
    string macAddress = pairs[rand() % 8] += ':';

    for (int i = 0; i < 10; i++) {
        macAddress += chars[rand() % 16];
        if (i % 2 == 1 && i != 9) macAddress += ':';
    }

    return macAddress;
}

bool setMacAddress(string interface, string macAddress)
{
    string command = "sudo ip link set dev " + interface + " address " + macAddress;
    int result = system(command.c_str());

    return (result == 0);
}

int main()
{
    srand(time(NULL));
    
    string macAddress = generateMacAddress();
    string interface = "eno1";
    setMacAddress(interface, macAddress);
    
    return 0;
}