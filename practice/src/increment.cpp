#include <iostream>
#include <string>

int main()
{
    int x{5};
    std::cout << "value of x: " << x << '\n';

    int x_1{x++};
    std::cout << "value of x: " << x << '\n';
    int x_2{++x};

    std::cout << "++x: " << x_1 << '\n';
    std::cout << "x++ " << x_2 << '\n';
    std::cout << "value of x: " << x << '\n';

    return 0;
}
