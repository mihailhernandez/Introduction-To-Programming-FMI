#include <iostream>

int main()
{
    int *array;
    int array_size;
    int first, second, temp;

    std::cin >> array_size >> first >> second;

    array = new int[array_size];
    
    for (int i = 0; i < array_size; i++)
    {   
        std::cin >> array[i];
    }

    temp =  array[first];
    array[first] = array[second];
    array[second] = temp;

    for (int i = 0; i < array_size; i++)
    {
        std::cout << array[i] << " ";
    }

    free(array);

    std::cout << std::endl;

    return 0;
}

