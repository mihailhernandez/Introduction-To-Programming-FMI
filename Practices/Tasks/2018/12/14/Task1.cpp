#include "Task1.hpp"

double divideBy2(double num)
{
    return num / 2;
}

void map(double arr[], int size, double (*ptr)(double))
{
    for (int i = 0; i < size; arr[i] = ptr(arr[i]), i++);    
}
