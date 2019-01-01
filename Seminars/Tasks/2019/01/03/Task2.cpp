#include <iostream>
#include "Task2.hpp"

bool is_prime(int num)
{
    for (int i = 2; i < num; i++)
        if (!(num % i))
            return false;
    return true;
}

void print_strings(char **sentences, int size, int (*ptr)(char*))
{
    for (int i = 0; i < size; i++)
        if (is_prime(ptr(sentences[i])))
            std::cout << sentences[i] << std::endl;
}
