#include <iostream>
#include "Task1.hpp"
#include "Task2.hpp"

void prime_factors(int number)
{   
    for (int i = 2; i <= number && number != 1; i++)
    {
        if (is_prime(i) && number % i == 0)
        {
            std::cout << i << " ";
            number /= i;
            i = 1;
        }
    }
    std::cout << std::endl;
}
