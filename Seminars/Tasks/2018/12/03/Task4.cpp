#include "Task4.hpp"

double sum_of_max_min_avg(double array[], int length)
{
    double max = *array, min = *array, sum = 0;

    for (int i = 0; i < length; i++)
    {
        sum += array[i];
        if (max < array[i])
        {
            max = array[i];
        }
        if (min > array[i])
        {
            min = array[i];
        }
    }

    return max + min + (sum / length);
}
