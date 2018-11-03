#include <iostream>

/*
 * Дадени са ви две цели числа.
 * Разменете техните стойности и ги изведете на екрана.
 */
int main()
{
    int a, b, temp;

    std::cout << "a = ";
    std::cin >> a;
    std::cout << "b = ";
    std::cin >> b;

    std::cout << "Before: a = " << a << ", b = " << b << std::endl;
    
    temp = a;
    a = b;
    b = temp;

    std::cout << "After: a = " << a << ", b = " << b << std::endl;

    return 0;
}
