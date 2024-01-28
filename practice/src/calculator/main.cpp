#include <iostream>
#include <string.h>

#include "input.h"
#include "output.h"

int main()
{
    while (true)
    {
        int num1{}; // first number to operate on
        int num2{}; // second number to operator on
        char op{};  // the operation to perform
        int ifDiv{0};
        printHeader(); // clear screen and print program header

        num1 = getInteger();
        op = getOperator();
        num2 = getInteger();

        switch (op)
        {
        case '/':
            if (num1 == 0 || num2 == 0)
            {
                ifDiv = 1; // return it to the caller
                std::cout << "Cannot divide by 0, exiting\n";
                return 1;
            }
        }

        printResult(num1, op, num2);

        if (!checkContinue())
        {
            // std::cout << "0 not entered" << '\n';
            return 0;
        }
    }
}