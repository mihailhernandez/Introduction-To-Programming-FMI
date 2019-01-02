#include "Task4.hpp"

long long factoriel_recursive(long long num)
{
    if (num == 1)
        return 1;
    return num * factoriel_recursive(num - 1);
}

long long factoriel_iterative(long long num)
{
    long long res = 1;
    for (; num > 0; res *= num, num--);
    return res;
}
