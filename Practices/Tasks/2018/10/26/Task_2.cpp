#include <iostream>

int main()
{
    int *array;
    int count = 0;
    int array_size;

    std::cin >> array_size;

    array = new int[array_size];
    
    for (int i = 0; i < array_size; i++)
    {
        std::cin >> array[i];
        if (array[i] % 3 == 0)
        {
            count ++;
        }
    }

    std::cout << count << std::endl;

    free(array);

    return 0;
}
