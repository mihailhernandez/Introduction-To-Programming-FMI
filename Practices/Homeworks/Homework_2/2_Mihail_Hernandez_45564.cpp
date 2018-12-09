/*
    Homework №2
    Introduction to programming
    Task №2
    Date: 08.12.2018
    Author: Mihail Humberto Hernandez
*/

#include <iostream>

int countDistinct(char *, int, int);

int main()
{
    char *symbols;
    int buffer_size;
    int start, end;
    int result;

    std::cout << "Buffer size: "; 
    std::cin >> buffer_size;

    symbols = new char[buffer_size];

    std::cout << "Enter sentence: ";
    std::cin >> symbols;

    std::cout << "Count distinct from index: ";
    std::cin >> start;
    std::cout << "Count distinct to index: ";
    std::cin >> end;

    result = countDistinct(symbols, start, end);

    if (result > 0)
    {
        std::cout << "Count distinct: " << result
                  << std::endl;
    }

    return 0;
}

int countDistinct(char *symbols, int start, int end)
{
    bool seen = false;
    int strlen = 0;
    int distinct = 1;

    for (char *symbol = symbols; *symbol; symbol++, strlen++) {} 

    if (start > end || start < 0 || end > strlen)
    {
        std::cout << "Wrong input" << std::endl;
        return -1;
    }

    if (start == end)
    {
        return distinct;
    }

    for (int i = start + 1; i <= end; i++, seen = false)
    {
        for (int j = i - 1; j >= start; j--)
        {
            if (symbols[i] == symbols[j])
            {
                seen = true;
                break;
            }
        }
        if (!seen)
        {
            distinct++;
        }
    }

    return distinct;
}
