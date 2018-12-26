#include "Task4.hpp"

double sum_of_max_min_avg(double array[])
{
    double *ptr = array;
    double max, min, length = 0, sum = 0;
    
    for (max = min = *ptr; *ptr; ptr++, length++)
    {
        sum += *ptr;
        if (max < *ptr)
        {
            max = *ptr;
        }
        if (min > *ptr)
        {
            min = *ptr;
        }
    }

    return max + min + (sum / length);
}
