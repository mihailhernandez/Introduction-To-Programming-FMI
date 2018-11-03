#include <iostream>

/*
 * Напишете програма, която да ви изписва true,
 * ако годината е високосна и false  в противен случай.
 */
int main()
{
    int year;

    std::cin >> year;

    std::cout << (((year % 4 == 0) 
        && (year % 100 != 0) 
            || (year % 100 == 0 && year % 400 == 0)) 
        ? "Leap year!" : "Not a leap year!") << std::endl;

    return 0;
}
