#include <iostream>

int main()
{
    int input;

    std::cout << "Enter a number: ";
    std::cin >> input;

    int* ptr = &input;

    std::cout << "You entered " << *ptr;
}