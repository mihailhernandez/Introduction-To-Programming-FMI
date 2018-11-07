#include <iostream>

/*
 * Напишете програма, която при въвеждане на цяло четирицифрено 
 * число от клавиатурата извежда цифрите на хилядните,
 * стотиците, десетиците и eдиниците на отделен ред.
 */
int main()
{
    int number;

    std::cin >> number;

    std::cout << number / 1000 << std::endl;
    number %= 1000;
    std::cout << number / 100 << std::endl;
    number %= 100;
    std::cout << number / 10 << std::endl;
    number %= 10;
    std::cout << number / 1 << std::endl;

    return 0;
}
