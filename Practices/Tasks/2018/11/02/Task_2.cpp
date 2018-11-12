#include <iostream>

int main()
{
    int *array, array_size;
    bool has_equal_numbers = false;

    std::cin >> array_size;

    array = new int[array_size];

    for (int i = 0; i < array_size; i++)
    {
        std::cin >> array[i];
        for (int j = i - 1; j >= 0 && !has_equal_numbers; j--)
        {
            if (array[i] == array[j])
            {
                has_equal_numbers = true;
            }
        }
    }

    free(array);

    std::cout << std::boolalpha << has_equal_numbers << std::endl;

    return 0;
}
