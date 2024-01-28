/* create a program that asks the user to enter an integer,
waits for them to input an integer,
then tells them what 2 times that number is. */

#include <iostream>
#include <string>

using namespace std;

int double_n(int);
string is_big(int);

int main()
{
    int input{};
    cout << "Please enter an integer:\n>> ";
    cin >> input;
    std::string output = is_big(input);
    cout << output << '\n';

    return 0;
}

int double_n(int n)
{
    int out{};
    out = n * 2;

    return out;
}

string is_big(int n)
{
    string big = "is big";
    string small = "is not big";

    string out = ((n > 100) ? big : small);
    return out;
}