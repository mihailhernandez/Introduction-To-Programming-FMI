#include "Task5.hpp"

int sum_of_digits(int number)
{
    int sum = number % 10;
    if (number == 0)
        return sum;
    sum += sum_of_digits(number / 10);
    return sum;
}
