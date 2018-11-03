#include <iostream>

/*
 * Дадено е едно цяло четирицифрено число. 
 * Изведете цифрите му разделени с по един интервал.
 */
int main()
{
    int number;

    std::cout << "Number = ";
    std::cin >> number;


    std::cout << number / 1000 << " ";
    number %= 1000;
    std::cout << number / 100 << " ";
    number %= 100;
    std::cout << number / 10 << " ";
    number %= 10;
    std::cout << number / 1 << std::endl;

    return 0;
}
