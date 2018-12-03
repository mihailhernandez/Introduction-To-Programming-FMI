#include <iostream>

bool sorted(int *);

int main()
{
    int array_size;
    int *array;

    std::cin >> array_size;
    
    array = new int[array_size];

    for (int i = 0; i < array_size; std::cin >> array[i], i++);

    std::cout << std::boolalpha << sorted(array) << std::endl;

    return 0;
}

bool sorted(int *array)
{
    for (int *prev = array; *(++array); prev++)
    {
        if (*prev > *array)
        {
            return false;
        }
    }
    return true;
}
