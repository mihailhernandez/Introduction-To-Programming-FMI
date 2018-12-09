/*
    Homework №2
    Introduction to programming
    Task №1
    Date: 08.12.2018
    Author: Mihail Humberto Hernandez
    Course: 1
    Group: 3
*/


#include <iostream>

void print_matrix_in_spiral(int **, int);

int main()
{
    int size;
    int **matrix;

    std::cin >> size;

    if (size <= 0)
    {
        std::cout << "Enter a proper matrix size!" << std::endl;
        return 0;
    }
    
    matrix = new int*[size];

    for (int i = 0; i < size; i++)
    {
        matrix[i] = new int[size];
        for (int j = 0; j < size; j++)
        {
            std::cin >> matrix[i][j];
        }
    }

    print_matrix_in_spiral(matrix, size);

    return 0;
}

void print_matrix_in_spiral(int **matrix, int size)
{
    bool is_size_odd = size % 2;

    for (int spacing = 0; spacing < size / 2; spacing++)
    {
        for (int column = spacing; column < size - spacing; column++)
        {
            std::cout << matrix[spacing][column] << " ";
        }
        for (int row = spacing + 1; row < size - spacing; row++)
        {
            std::cout << matrix[row][size - spacing - 1] << " ";
        }
        for (int column = size - spacing - 2; column >= spacing; column--)
        {
            std::cout << matrix[size - spacing - 1][column] << " ";
        }
        for (int row = size - spacing - 2; row > spacing; row--)
        {
            std::cout << matrix[row][spacing] << " ";
        }
    }

    if (is_size_odd)
    {
        std::cout << matrix[size / 2][size / 2];
    }

    std::cout << std::endl;
}
