#include <iostream>

int main()
{
    bool sum_found = false;
    int *array, array_size, searched_number, sum = 0;

    std::cin >> array_size >> searched_number;

    array = new int[array_size];

    for (int i = 0; i < array_size; i++)
    {
        std::cin >> array[i];
    }

    for (int i = 0; i < array_size - 1; i++, sum = 0)
    {
        for (int j = i; j < array_size; j++)
        {
            sum += array[j];
            if (sum == searched_number)
            {
                std::cout << i + 1 << " " << j + 1 << std::endl;
                sum_found = true;
                break;
            }
        }
    }

    if (!sum_found)
    {
        std::cout << "No such sequences!" << std::endl;
    }

    return 0;
}
