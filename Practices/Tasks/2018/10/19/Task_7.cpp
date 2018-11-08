#include <iostream>

/*
 * Напишете програма, която въвежда от клавиатурата естествено число. 
 * Изведете на екрана, дали въведеното число е просто.
 */
int main()
{
    int number;
    bool is_prime = true;

    std::cin >> number;

    for (int i = 2; i < number; i++)
    {
        if (number % i == 0)
        {
            is_prime = false;
            break;
        }
    }

    std::cout << std::boolalpha << is_prime << std::endl;

    return 0;
}
