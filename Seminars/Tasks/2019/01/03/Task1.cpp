#include "Task1.hpp"

int get_sum(int liters, int tubes, int last)
{
    if (liters < 0)
        return 0;
    if (tubes == 1)
        return (liters <= last && liters >= 1) ? 1 : 0;
    int sum = 0;
    for (int i = last; i >= 1; i--)
        sum += get_sum(liters - i, tubes - 1, i);
    return sum;
}

int combinations(int num)
{
    int sum = 0;
    int high = num - 3;
    int low = num / 4;
    if (num % 4 != 0)
        low++;
    for (int i = low; i <= high; i++)
        sum += get_sum(num - i, 3, i);
    return sum;
}
