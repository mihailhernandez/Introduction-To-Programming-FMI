#include <iostream>

/*
 * Напишете програма, която въвежда от клавиатурата естествено число x. 
 * Изчислете x!, т.е. произведението от 1 до съответното въведено число (1 * 2 * ... * (x - 1) * x).
 */
int main()
{
    int x;
    int product = 1;

    std::cin >> x;

    for (int i = 1; i <= x; i++)
    {
        product *= i;
    }

    std::cout << product << std::endl;

    return 0;
}
