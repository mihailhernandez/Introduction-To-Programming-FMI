#include <iostream>
#include "Task3.hpp"

bool contains(int array[], int size, int number)
{
    if (array[size - 1] == number)
        return true;
    else if (size > 1)
        return contains(array, size - 1, number);
    return false;
}
