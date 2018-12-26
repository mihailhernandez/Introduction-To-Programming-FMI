#include "Task1.hpp"

bool is_prime(int num)
{
    if (num == 2)
    {
        return true;
    }

    if (num <= 1) 
    {
        return false;
    }

    for (int i = 2; i <= num / 2; i++)
    {
        if (num % i == 0)
        {
            return false;
        }
    }

    return true;
}

int prime_number_count_in_range(int from, int to)
{   
    int count = 0;
    
    if (from > to)
    {
        return -1;
    }

    for (; from <= to; from++)
    {
        if (is_prime(from))
        {
            count++;
        }
    }

    return count;
}
