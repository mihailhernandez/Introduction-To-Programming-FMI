#include <iostream>

/*
 * Дадено е цяло положително число.
 * Да се провери дали е точна степен на двойката.
 */
int main() 
{
    int number;

    std::cin >> number;

    std::cout << (((number & (number - 1)) == 0) 
      ? "Is a power of 2" : "Is not a power of 2") << std::endl;

    return 0;
}
