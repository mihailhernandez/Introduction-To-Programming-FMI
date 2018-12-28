#include "Task1.hpp"

int next(int number)
{
    return number * 3;
}

int sum_of_nexts(int array[], int size, int (*ptr)(int))
{
    int sum = 0;
    for (int i = 0; i < size / 3; i++)
    {
        sum += array[ptr(i)];
    }
    return sum;
}
