#include "Task6.hpp"

int matrix_diag_sum(int matrix[][3], int size)
{
    int sum = 0;

    for (int i = 0; i < size; i++)
    {
        sum += matrix[i][i];
    }

    for (int i = size - 1; i >= 0; i--)
    {
        sum += matrix[i][size - i - 1];
    }

    return sum;
}
