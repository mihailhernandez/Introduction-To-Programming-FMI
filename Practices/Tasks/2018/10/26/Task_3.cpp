#include <iostream>

int main()
{
    int *array;
    int max = 0;
    int array_size;

    std::cin >> array_size;

    array = new int[array_size];
    
    for (int i = 0; i < array_size; i++)
    {
        std::cin >> array[i];
        if (array[i] >= max)
        {
            max = array[i];
        }
    }

    std::cout << max << std::endl;

    free(array);

    return 0;
}
