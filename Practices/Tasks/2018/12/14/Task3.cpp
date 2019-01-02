#include "Task3.hpp"

int sum_recursive(int num)
{
    if (num == 1)
        return 1;
    return num + sum_recursive(num - 1);
}

int sum_iterative(int num)
{
    int sum = 0;
    for (; num > 0; num--)
        sum += num;
    return sum;
}
