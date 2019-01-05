#include "Task4.hpp"

bool contains(int num, int dig)
{
    if (num == 0)
        return false;
    if (dig == num % 10)
        return true;
    return contains(num / 10, dig);
}
