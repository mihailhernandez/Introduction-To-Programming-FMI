#include <iostream>
#include "Task7.hpp"

int matrix_palindrome_count(char matrix[][5], int size)
{
    int count = 0;
    bool is_palindrome;

    for (int i = 0; i < size; i++)
    {
        is_palindrome = true;
        for (int j = 0; j < size / 2; j++)
        {
            if (matrix[i][j] != matrix[i][size - j - 1])
            {
                is_palindrome = false;
                break;
            }
        }
        if (is_palindrome)
        {
            count++;
        }
    }

    for (int i = 0; i < size; i++)
    {
        is_palindrome = true;
        for (int j = 0; j < size / 2; j++)
        {
            if (matrix[j][i] != matrix[j][size - i - 1])
            {
                is_palindrome = false;
                break;
            }
        }
        if (is_palindrome)
        {
            count++;
        }
    }

    is_palindrome = true;
    for (int i = 0; i < size / 2; i++)
    {
        if (matrix[i][i] != matrix[size - i - 1][size - i - 1])
        {
            is_palindrome = false;
            break;
        }
    }

    if (is_palindrome)
    {
        count++;
    }
    
    is_palindrome = true;
    for (int i = 0; i < size / 2; i++)
    {
        if (matrix[i][size - i - 1] != matrix[size - i - 1][i])
        {
            is_palindrome = false;
            break;
        }
    }

    if (is_palindrome)
    {
        count++;
    }

    return count;
}
