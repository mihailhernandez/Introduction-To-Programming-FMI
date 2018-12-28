#include <iostream>
#include "Task4.hpp"

void print_matrix_outer_layer(char matrix[][100], int rows, int cols)
{
    for (int i = 0; i < cols; i++)
    {
        std::cout << matrix[0][i] << " ";
    }
    for (int i = 1; i < rows; i++)
    {
        std::cout << matrix[i][cols - 1] << " ";
    }
    for (int i = cols - 2; i >= 0; i--)
    {
        std::cout << matrix[rows - 1][i] << " ";
    }
    for (int i = rows - 2; i > 0; i--)
    {
        std::cout << matrix[i][0] << " ";
    }
    std::cout << std::endl;
}
