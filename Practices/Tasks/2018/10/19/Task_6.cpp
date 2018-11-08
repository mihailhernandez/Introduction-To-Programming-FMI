#include <iostream>

/*
 * Напишете програма, която намира сумата от цифрите 
 * на произволно естествено число, въведено от клавиатурата.
 */
int main()
{
    int number;
    int sum = 0;

    std::cin >> number;

    while (number != 0)
    {
        sum += number % 10;
        number /= 10;
    }

    std::cout << sum << std::endl;

    return 0;
}
