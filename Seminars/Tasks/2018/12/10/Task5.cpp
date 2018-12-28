#include <iostream>
#include "Task5.hpp"

int compare(char first[], char second[])
{
    for (char *ptr_f = first, *ptr_s = second; *ptr_f && *ptr_s; ptr_f++, ptr_s++)
    {
        if ((*ptr_f < *ptr_s) || (!*(ptr_f + 1) && *(ptr_s + 1)))
        {
            return -1;
        }
        if ((*ptr_f > *ptr_s) || (*(ptr_f + 1) && !*(ptr_s + 1)))
        {
            return 1;
        }
    }
    return 0;
}

void swap(char first[], char second[])
{
    char *ptr = first;
    first = second;
    second = ptr;
}

void print_in_alphabetical_order(char matrix[][100], int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            int compare_result = compare(matrix[i], matrix[j]);
            if (compare_result == 1)
            {
                swap(matrix[i], matrix[j]);
            }
        }
        std::cout << matrix[i] << std::endl;
    }
}


