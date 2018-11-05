#include <iostream>

/*
 * Дадени са ви три числа. Определете дали те 
 * могат да са страни на триъгълник.
 */
int main()
{
    double a, b, c;

    std::cin >> a >> b >> c;

    std::cout << ((a + b > c) && (b + c > a) && (a + c > b)
        ? "Can be sides" : "Cannot be sides") << std::endl;

    return 0;
}
