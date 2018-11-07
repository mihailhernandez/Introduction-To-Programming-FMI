#include <iostream>

/*
 * Да се напише програма, която въвежда символ от 
 * клавиатурата. Да се провери и отпечата дали този символ е число.
 */
int main()
{
    char c;

    std::cin >> c;

    if (c - '0' >= 0 && c - '0' <= 9)
    {
        std::cout << c << " is a number" << std::endl;
    }
    else 
    {
        std::cout << c << " is not a number" << std::endl;
    }

    return 0;
}
