#include <iostream>

bool isPrime(int);

/*
 * Въвеждат се n цели числа. Да се отпечата 
 * да конзолата броят на простите числа, както и самите те.
 */
int main()
{
    int n, prime_count = 0;
    int current_number;

    std::cin >> n;

    for (int i = 0; i < n; i++)
    {
        std::cin >> current_number;
        if (isPrime(current_number))
        {
            std::cout << current_number << " ";
            prime_count ++;
        }
    }

    std::cout << std::endl << "Prime count = " 
              << prime_count << std::endl;

    return 0;
}

bool isPrime(int number)
{
    for (int i = 2; i < number; i++)
    {
        if (number % i == 0)
        {
            return 0;
        }
    }

    return true;
}
