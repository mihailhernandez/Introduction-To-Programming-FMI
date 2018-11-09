#include <iostream>

/*
 * Напишете програма, която намира и извежда симетричното на дадено цяло число.
 * Симетрично число е число със същия знак и цифри, но записани в обратен ред.
 */
int main()
{
    int x, new_num = 0;

    std::cin >> x;

    while (x != 0)
    {
        new_num *= 10;
        new_num += x % 10;
        x /= 10;
    }

    std::cout << new_num << std::endl;

    return 0;
}
