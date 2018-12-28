#include "Task3.hpp"

int longest_increasing_subarray_size(double array[], int size)
{
    int max_size = 0;
    for (int i = 1, current_size = 1; i < size; i++, current_size++)
    {   
        if (array[i] < array[i - 1])
        {
            max_size = max_size < current_size ? current_size : max_size;
            current_size = 1;
        }
    }
    return max_size;
}
