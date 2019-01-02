#include "Task5.hpp"

int num_of_digits_recursive(int num)
{
    if (!num)
        return 0;
    int sum = 1;
    sum += num_of_digits_recursive(num / 10);
    return sum;
}
