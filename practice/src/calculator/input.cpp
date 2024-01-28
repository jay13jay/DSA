#include <iostream>

#include "input.h"

char getOperator()
{
    while (true) // Loop until user enters a valid input
    {
        std::cout << "Enter one of the following operations: +, -, *, or /: ";
        char operation{};
        ignoreLine();
        std::cin >> operation;

        // Check whether the user entered meaningful input
        switch (operation)
        {
        case '+':
        case '-':
        case '*':
        case '/':
            return operation; // return it to the caller
        default:              // otherwise tell the user what went wrong
            std::cout << "Oops, that input is invalid.  Please try again.\n";
        }
    } // and try again
}

int getInteger()
{
    while (true) // Loop until user enters a valid input
    {
        std::cout << "Enter an integer between 0-9: ";
        int integer{};
        // ignoreLine();
        std::cin >> integer;

        // Check whether the user entered meaningful input
        switch (integer)
        {
        case 0:
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
            return integer; // return it to the caller
        default:            // otherwise tell the user what went wrong
            std::cout << "Oops, that input is invalid.  Please try again.\n";
        }
    } // and try again
}

bool checkContinue()
{
    while (true) // Loop until user enters a valid input
    {
        std::cout << "Enter 0 to continue or any other char to exit \n >> ";
        int cont{};
        // ignoreLine();
        std::cin >> cont;

        // Check whether the user entered meaningful input
        switch (cont)
        {
        case 0:
            return true;
        default:
            return false;
        }
    }
}

void ignoreLine()
{
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}