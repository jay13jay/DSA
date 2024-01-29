#include <iostream>
#include "../include/linkedlist.h"

int main()
{
    std::cout << "Starting..." << std::endl;
    LinkedList myLL;
    myLL.display();

    std::cout << "pushing:\t{5, 100, 300, 10, 76}" << std::endl;
    myLL.push(5);
    myLL.push(100);
    myLL.push(300);
    myLL.push(10);
    myLL.push(76);
    myLL.display();
    std::cout << "List Len:\t" << myLL.mlist_len << std::endl;

    std::cout << "\nappending:\t{150, 155}" << std::endl;
    myLL.append(150);
    myLL.append(155);
    myLL.display();
    std::cout << "List Len:\t" << myLL.mlist_len << std::endl;

    std::cout << "\nRemoving 6th node" << std::endl;
    myLL.deleteN(6);
    myLL.display();
    std::cout << "List Len:\t" << myLL.mlist_len << std::endl;

    std::cout << "\nReversing List" << std::endl;
    myLL.reverse();
    myLL.display();

    std::cout << "\nInsert\t{556} after 4th node" << std::endl;
    myLL.insertAfter(4, 556);
    myLL.display();
    std::cout << "List Len:\t" << myLL.mlist_len << std::endl;

    std::cout << "\nEnd of program" << std::endl;
}