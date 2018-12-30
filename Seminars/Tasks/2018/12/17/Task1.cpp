#include "Task1.hpp"

long long factoriel(int number)
{
    return (number != 1) ? number * factoriel(number - 1) : number;
}
