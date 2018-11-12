#include <iostream>

int main()
{
    bool is_increasing = true;
    int *array, array_size;

    std::cin >> array_size;

    array = new int[array_size];

    for (int i = 0; i < array_size; i++)
    {
        std::cin >> array[i];
        if (is_increasing && i != 0 && array[i] < array[i - 1])
        {
            is_increasing = false;
        }
    }

    free(array);

    std::cout << std::boolalpha << is_increasing << std::endl;

    return 0;
}
