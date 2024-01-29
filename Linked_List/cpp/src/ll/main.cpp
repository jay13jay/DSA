#include <iostream>
#include "ll.h"

int main()
{
    std::cout << "Starting..." << std::endl;
    LinkedList myLL;
    myLL.push(5);
    myLL.push(100);
    myLL.push(300);
    myLL.push(10);
    myLL.push(76);

    myLL.append(150);
    myLL.append(155);

    std::cout << "Current List Len:\t" << myLL.mlist_len << std::endl;
    myLL.deleteN(8);
    std::cout << "Current List Len:\t" << myLL.mlist_len << std::endl;

    myLL.display();
}