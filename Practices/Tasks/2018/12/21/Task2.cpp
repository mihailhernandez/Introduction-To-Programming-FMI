#include "Task2.hpp"

bool is_odd(int num)
{
    return num % 2;
}

int get_length(int *arr, int size, bool (*ptr)(int))
{
    int len = 0;
    for (int i = 0; i < size; i++)
        if (ptr(arr[i]))
            len++;
    return len;
}

int* filter(int *arr, int size, int len, bool (*ptr)(int))
{
    int *res = new int[len];
    for (int i = 0, j = 0; i < size; i++)
        if (ptr(arr[i]))
            res[j++] = arr[i];
    return res;
}
