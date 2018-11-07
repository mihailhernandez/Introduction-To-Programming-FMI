#include <iostream>

bool is_prime(int);

/*
 * Да се напише програма, която при въведено число 
 * извежда неговите прости делители.
 */
int main()
{
    int number;

    std::cin >> number;

    for (int i = 2; i <= number / 2; i++)
    {
        if (number % i == 0 && is_prime(i))
        {
            std::cout << i << std::endl;
        }
    }
    
    if (is_prime(number))
    {
        std::cout << number << std::endl;
    }

    return 0;
}

bool is_prime(int n)
{
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}
