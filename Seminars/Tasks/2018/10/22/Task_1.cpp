#include <iostream>

/*
 * Дадени са ви три цели числа. 
 * Отпечатайте най – малкото от тях на екрана.
 */
int main()
{
    int min;
    int a, b, c;

    std::cin >> a >> b >> c;


    min = (a <= b) ? a : b;
    min = (min <= c) ? min : c;

    std::cout << min << std::endl;

    return 0;
}   
