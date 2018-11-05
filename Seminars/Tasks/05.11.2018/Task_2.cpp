#include <iostream>

/*
 * Въвеждат се n реални числа. Да се намерят и 
 * изкарат в конзолата най-малко и най-голямото от тях.
 */
int main()
{
    double n, current_number;
    double max, min;

    std::cin >> n;

    for (int i = 0; i < n; i++)
    {
        std::cin >> current_number;
        if (i == 0)
        {
            min = max = current_number;
        }
        if (current_number < min) 
        {
            min = current_number;
        }
        if (current_number > max)
        {
            max = current_number;
        }   
    }

    std::cout << "Max = " << max << std::endl
              << "Min = " << min << std::endl;

    return 0;
}   
