#include <iostream>

/*
 * Дадено е цяло число n. Да се отпечатат 
 * всички негови цифри на конзолата както и техния сбор.
 */
int main()
{
    int number;
    int digit_sum = 0;

    std::cin >> number;

    while (number != 0)
    {
        std::cout << (number % 10) << ' ';
        digit_sum += number % 10;
        number /= 10;
    }

    std::cout << std::endl << "Digit sum = " 
              << digit_sum << std::endl;

    return 0;
}   
