#include <bitset>
#include <iostream>

int main()
{

    std::bitset<8> myBit{0b0000'0000};
    myBit.set(0);
    std::cout << "myBit value: " << myBit << '\n';

    return 0;
}