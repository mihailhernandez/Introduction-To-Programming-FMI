#include "Task7.hpp"

// fk me that has tough to figure out using only one parameter
int reverse(int number)
{
    int temp = number;
    int mult = 1;
    for (; number / 10 != 0; mult *= 10, number /= 10) {}
    if (mult == 1)
        return temp % 10;
    return (temp % 10) * mult + reverse(temp / 10);
}
