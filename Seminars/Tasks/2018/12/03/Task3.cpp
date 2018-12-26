#include "Task3.hpp"

bool is_palindrome(char array[])
{
    char *ptr = array;
    int length = 0;

    for (; *ptr; ptr++, length++) {}

    for (int i = 0; i < length / 2; i++)
    {
        if (array[i] != array[length - 1 - i])
        {
            return false;
        }
    }
    return true;
}
