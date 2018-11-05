#include <iostream>

/*
 * Въвеждат се n реални числа. Да се запишат  
 * в масив и после този масив да си обърне 
 * елементите ( първото число се разменя с последно, 
 * второто с предпоследното и така нататък ).
 */
int main()
{
    int array_size;
    double *numbers;

    std::cin >> array_size;

    numbers = new double[array_size];

    for (int i = 0; i < array_size; i++)
    {
        std::cin >> numbers[i];
    }

    for (int i = 0, temp = 0; i < array_size / 2; i++)
    {   
        temp = numbers[i];
        numbers[i] = numbers[array_size - i - 1];
        numbers[array_size - i - 1] = temp;
    }

    for (int i = 0; i < array_size; i++)
    {
        std::cout << numbers[i] << " ";
    }

    std::cout << std::endl;

    return 0;
}
