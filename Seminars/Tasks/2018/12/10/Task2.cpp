#include "Task2.hpp"

bool is_divisible(int x, int y)
{
    return x % y == 0 || y % x == 0;
}   

int number_of_divisible_pairs(int array[], int size, bool (*ptr)(int, int))
{
    int count = 0;
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (ptr(array[i], array[j]))
            {
                count++;
            }
        }
    }
    return count;
}
