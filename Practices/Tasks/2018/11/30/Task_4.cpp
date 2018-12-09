#include <iostream>

int binary_search(int *, int, int, int);

int main()
{
    int searched_number;
    int array_size;
    int *array;

    std::cin >> array_size;
    std::cin >> searched_number;
    
    array = new int[array_size];
    
    for (int i = 0; i < array_size; std::cin >> array[i], i++);

    std::cout << binary_search(array, 0, array_size - 1, searched_number) << std::endl;

    return 0;
}

int binary_search(int *array, int start, int end, int searched_number)
{
    int middle = (start + end) / 2;
    
    if (middle < start || middle > end)
    {
        return -1;
    }

    if (array[middle] == searched_number)
    {
        return middle;
    }

    if (searched_number > array[middle])
    {
        return binary_search(array, middle + 1, end, searched_number);
    }

    if (searched_number < array[middle])
    {
        return binary_search(array, start, middle, searched_number);
    }

    return -1;
}
