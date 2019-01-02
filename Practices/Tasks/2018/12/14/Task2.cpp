#include "Task2.hpp"

bool is_odd(int num)
{
    return (num % 2); 
}

int filter(int arr[], int res[], int size, bool (*ptr)(int))
{
    int j = 0;
    for (int i = 0; i < size; i++)
        if (ptr(arr[i]))
            res[j++] = arr[i];
    return j;
}
