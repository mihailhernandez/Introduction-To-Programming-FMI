#include <iostream>

/*
 * Дадени са ви n числа. Намерете тяхната сума 
 * и произведение и ги изведете на екрана.
 */
int main()
{
    int *numbers;
    int array_size;
    int product = 1, sum = 0;

    std::cin >> array_size;

    numbers = new int[array_size];

    for (int i = 0; i < array_size; i++)
    {
        std::cin >> numbers[i];
        sum += numbers[i];
        product *= numbers[i];
    }

    free (numbers);

    std::cout <<  "Sum = " << sum << std::endl;
    std::cout << "Product = " << product << std::endl;

    return 0;
}
