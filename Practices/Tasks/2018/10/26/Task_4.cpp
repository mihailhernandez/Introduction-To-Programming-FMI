#include <iostream>

int main()
{
    int *array;
    int array_size, number;
    bool is_contained = false;

    std::cin >> array_size >> number;

    array = new int[array_size];
    
    for (int i = 0; i < array_size; i++)
    {
        std::cin >> array[i];
        if (array[i] == number)
        {
            is_contained = true;
        }
    }

    std::cout << std::boolalpha << is_contained << std::endl;

    free(array);

    return 0;
}
