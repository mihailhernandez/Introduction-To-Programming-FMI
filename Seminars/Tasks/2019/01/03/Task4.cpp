#include <iostream>
#include "Task4.hpp"

int strlen(char *str)
{   
    int len = 0;
    for (; *str; str++, len++);
    return len;
}

bool is_string_right(char *str)
{
    int open = 0, close = 0;
    for (; *str; str++)
    {
        if (*str == '(')
            open++;
        else if (*str == ')')
            close++;
        else if (*str == ' ')
            continue;
        else
            return false;
        if (close > open)
            return false;
    }

    return open == close;
}

void print_most_inner_bracket_indexes(char *str)
{
    if (!is_string_right(str))
    {
        std::cout << str << " is not right." << std::endl;
        return;
    }
    bool search_end = false;
    int most_inner_count = 0, start_index = 0, end_index = 0;
    for (int i = 0, current = 0; i < strlen(str); i++)
    {
        if (str[i] == '(')
            current++;
        if (str[i] == ')')
        {
            current--;
            if (search_end)
                end_index = i;
            search_end = false;
        }
        if (current > most_inner_count)
        {
            most_inner_count = current;
            start_index = i;
            search_end = true;
        }
    }

    std::cout << start_index << " " << end_index << std::endl;
}
