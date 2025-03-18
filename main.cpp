#include <iostream>
#include <vector>
#include <ctime>
#include <cmath>
#include <cstdlib>

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
    setMacAddress("eno1", macAddress);
    
    return 0;
}