#include "Task3.hpp"

double divideBy2(double num)
{
    return num / 2;
}

double * map(double *arr, int size, double (*ptr)(double))
{
    double *new_arr = new double[size];
    for (int i = 0; i < size; i++)
        new_arr[i] = ptr(arr[i]);
    return new_arr;
}
