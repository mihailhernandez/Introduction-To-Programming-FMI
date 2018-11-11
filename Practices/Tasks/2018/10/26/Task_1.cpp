#include <iostream>

int main()
{
    int *array;
    int sum = 0;
    int array_size;

    std::cin >> array_size;

    array = new int[array_size];
    
    for (int i = 0; i < array_size; i++)
    {
        std::cin >> array[i];
        sum += array[i];
    }

    std::cout << sum << std::endl;

    free(array);

    return 0;
}
