#include <iostream>

/*
 * Напишете програма, в която при въведено четирицифрено 
 * число, да изведе числото записано в обратен ред.
 */
int main()
{
    int number;

    std::cin >> number;

    while (number != 0)
    {
        std::cout << number % 10;
        number /= 10;
    }

    std::cout << std::endl;
    
    return 0;
}
