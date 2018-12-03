#include <iostream>

int strlen(char *str);

int main()
{
    int buffer_size;

    std::cout << "Enter buffer capacity: ";
    std::cin >> buffer_size;

    char sentence[buffer_size];

    std::cin >> sentence;

    std::cout << "Sentence size: " << strlen(sentence) << std::endl;

    return 0;
}

int strlen(char *str)
{
    char *start = str;

    while (*str)
    {
        str++;
    }

    return str - start;
}
