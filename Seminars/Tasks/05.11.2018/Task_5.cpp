#include <iostream>

/*
 * Въвеждат се n реални числа. Да се запишат в 
 * масив и да се изкарат в обратен ред (без да 
 * си разменят местата в самия масив ).
 */
int main()
{
    int *numbers;
    int array_size;

    std::cin >> array_size;

    numbers = new int[array_size];

    for (int i = 0; i < array_size; i++)
    {
        std::cin >> numbers[i];
    }

    for (int i = array_size - 1; i >= 0; i--)
    {
        std::cout << numbers[i] << " ";
    }

    std::cout << std::endl;

    return 0;
}
