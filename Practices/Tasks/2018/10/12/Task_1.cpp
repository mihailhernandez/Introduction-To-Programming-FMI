#include <iostream>

/*
 * Въведете три числа от клавиатура и изведете средноаритметичното на
 * тези числа. За променливите изберете подходящ тип.
 */
int main()
{
    double a, b, c;

    std::cin >> a >> b >> c;;

    std::cout << (a + b + c) / 3  << std::endl;

    return 0;
}
