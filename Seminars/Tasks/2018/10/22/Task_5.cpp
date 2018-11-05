#include <iostream>

/*
 * Дадени са ви n > 1 десетични числа. 
 * Намерете произведението на числата, 
 * които се намират на четни позиции.
 */
int main()
{
    int array_size;
    double *numbers;
    double product = 1;

    std::cin >> array_size;
    numbers = new double[array_size];

    for (int i = 0; i < array_size; i++)
    {
        std::cin >> numbers[i];
        if ((i + 1) % 2 == 0)
        {
           product *= numbers[i]; 
        }
    }   

    free(numbers);

    std::cout << "Product = " << product << std::endl;

    return 0;
}   
