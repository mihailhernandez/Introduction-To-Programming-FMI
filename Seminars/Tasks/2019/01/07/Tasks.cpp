#include <iostream>

void print_crossing_letter_strings(char *str_1, char *str_2)
{
    char *str_1_it = str_1;
    char *str_2_it = str_2;
    
    for (bool stop = false; *str_1_it && !stop; str_1_it++, str_2_it = str_2)
    {
        for (; *str_2_it; str_2_it++)
        {
            if (*str_1_it == *str_2_it)
            {
                stop = true;
                break;
            }
        }
        if (stop)
            break;
    }

    if (!(*str_1_it))
        return;

    for (; *str_2; str_2++)
    {
        if (*str_2 == *str_1_it)
        {
            std::cout << str_1 << std::endl;
            continue;
        }
        for (int i = 0; i < str_1_it - str_1; i++)
            std::cout << " ";
        std::cout << *str_2 << std::endl;
    }
}

void print_letter_permutations(int letters, int length, int order)
{
    if (letters <= 1 || letters >= 26)
        return;
    
    
}

int main()
{
    // Task 1

    char str_1[] = "hello";
    char str_2[] = "pale";
    char str_3[] = "opa";
    char str_4[] = "bivas";

    print_crossing_letter_strings(str_1, str_2);
    print_crossing_letter_strings(str_2, str_3);
    print_crossing_letter_strings(str_1, str_3);
    print_crossing_letter_strings(str_1, str_4);

    return 0;
}
