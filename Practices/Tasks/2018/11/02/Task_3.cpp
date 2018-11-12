#include <iostream>

int main()
{
    int *array, array_size;

    std::cin >> array_size;

    array = new int[array_size];

    for (int i = 0; i < array_size; i++)
    {
        std::cin >> array[i];
    }

    
    for (int i = 0, temp = 0, min = i; i < array_size - 1; i++)
    {
        min = i;
        for (int j = i + 1; j < array_size; j++)
        {
            if (array[j] < array[min])
            {
                min = j;
            }
        }

        temp = array[i];
        array[i] = array[min];
        array[min] = temp;
    }

    for (int i = 0; i < array_size; i++)
    {
        std::cout << array[i] << " ";
    }
    std::cout << std::endl;
    
    free(array);

    return 0;
}
