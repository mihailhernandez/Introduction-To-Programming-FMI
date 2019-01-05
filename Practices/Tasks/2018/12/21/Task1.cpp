#include "Task1.hpp"

int strlen(char *ptr)
{
    int len = 0;
    for (; *ptr; ptr++, len++);
    return len;
}

char* concat(char *first, char *second)
{
    int f_len = strlen(first);
    int s_len = strlen(second);

    char *str = new char[f_len + s_len + 1];

    int i = 0;
    for (int j = 0; j < f_len; i++, j++)
        str[i] = first[j];
    
    for (int j = 0; j < s_len; j++, i++)
        str[i] = second[j];

    str[++i] = '\0';

    return str;
}
