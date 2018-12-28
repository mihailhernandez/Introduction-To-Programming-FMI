#include "Task5.hpp"
#define BUCKET_SIZE 1000

int max_appearances(int array[], int length)
{
    int max = 0;
    int bucket[BUCKET_SIZE];

    for (int i = 0; i < BUCKET_SIZE; i++)
    {   
        bucket[i] = 0;
    }

    for (int i = 0; i < length; i++)
    {
        if (array[i] < 1 || array[i] > 1000)
        {
            return -1;
        }
        bucket[array[i] - 1]++;
        if (bucket[array[i] - 1] > max)
        {
            max = bucket[array[i] - 1];
        }
    }

    return max;
}
