#include "Task5.hpp"

bool is_increasing(double *elem, int size)
{
    if (size == 1)
        return true;
    if (*(elem + 1) >= *elem)
        return is_increasing(elem + 1, size - 1);
    return false;
}
