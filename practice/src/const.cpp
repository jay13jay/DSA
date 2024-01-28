#include <iostream>

const double pi{3.14};
const double pi2{3.14592};

void otherfunc();

int main()
{
    std::cout << "value of pi: " << pi << '\n';

    // pi = 3.14592;

    std::cout << "value of pi2: " << pi2 << '\n';

    otherfunc();
}

void otherfunc()
{
    std::cout << "value of pi: " << pi << '\n';
    std::cout << "value of pi2: " << pi2 << '\n';
}