#include <iostream>

/*
 * Да се напише програма, която въвежда реално 
 * число от клавиатурата и извежда абсолютната му стойност.
 */
int main()
{
    double number;

    std::cin >> number;

    if (number < 0)
    {
        number *= -1;
    }
    
    std::cout << number << std::endl;

    return 0;
}
