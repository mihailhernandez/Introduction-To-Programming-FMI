#include <iostream>

/*
 * Да се напише програма, която въвежда символ от клавиатурата. 
 * Да се провери и отпечата дали този символ е цифра. 
 */
int main()
{
    char c;

    std::cin >> c;

    std::cout << ((c >= '0' && c <= '9') ? "true" : "false") << std::endl;

    return 0;
}
