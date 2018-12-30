#include "Task6.hpp"

int smallest_digit(int number)
{
    int current_digit = number % 10;
    number /= 10;
    if (number == 0)
        return current_digit;
    int next = smallest_digit(number);
    return current_digit <= next
        ? current_digit
        : next;
}
