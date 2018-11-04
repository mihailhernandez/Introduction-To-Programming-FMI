#include <iostream>

/*
 * Напишете програма, която да 
 * извежда дали едно число е четено или нечетно.
 */
int main() 
{
    int number;

    std::cin >> number;

    std::cout << ((number % 2 == 0) ? "Even" : "Odd") << std::endl;

    return 0;
}
