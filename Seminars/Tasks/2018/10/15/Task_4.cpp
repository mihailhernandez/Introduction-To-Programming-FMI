#include <iostream>

/*
 * Напишете програма, която при
 * въвеждане на десетично число,
 * извежда неговата цяла част.
 */
int main()
{
    double number;

    std::cout << "Number = ";
    std::cin >> number;

    std::cout << "Whole number = " << (int) number << std::endl;

    return 0;
}
