#include <iostream>

int main()
{
    int a, b = 0;

    std::cout << "Enter integer a: ";
    std::cin >> a;

    std::cout << "Enter integer b: ";
    std::cin >> b;

    int* ptrA = &a;
    int* ptrB = &b;

    std::cout << "a contains: " << *ptrA << std::endl;
    std::cout << "b contains: " << *ptrB << std::endl;
}