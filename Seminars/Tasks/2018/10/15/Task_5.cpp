#include <iostream>

/*
 * Дадени са две дробни числа a и b. 
 * Изведете тяхното частно с точност
 * до 7-мия знак след десетичната запетая.
 */
int main()
{   
    double a, b;

    std::cout << "a = ";
    std::cin >> a;
    std::cout << "b = ";
    std::cin >> b;
    
    printf("%.7f\n", (a / b));

    return 0;
}
