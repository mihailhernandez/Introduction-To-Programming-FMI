#include "Task4.hpp"

char first_capital(char arr[])
{   
    char *ptr = arr;
    if (*ptr >= 'A' && *ptr <= 'Z')
        return *ptr;
    else if (*(ptr + 1))
        return first_capital(ptr + 1);
    return 0;
}
