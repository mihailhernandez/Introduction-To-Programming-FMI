#include <iostream>

/*
 * Въвеждат се n (n >= 3) цели числа. 
 * Да се провери дали те образуват аритметична
 * или геометрична прогресия.
 */
int main()
{
    int *numbers;
    int array_size;
    double d, q;
    bool arithmetic_progression;
    bool geometric_progression;

    std::cin >> array_size;

    numbers = new int[array_size];

    for (int i = 0; i < array_size; i++)
    {
        std::cin >> numbers[i];
    }

    for (int i = 0; i < array_size; i++)
    {
        if (i == 0)
        {
            d = (double) numbers[i + 1] - numbers[i];
            q = (double) numbers[i + 1] / numbers[i];
        } 
        else
        {
            if (arithmetic_progression)
            {
                arithmetic_progression = 
                    (numbers[i] - numbers[i - 1] == d)
                    ? true : false;
            }
            if (geometric_progression)
            {
                geometric_progression = 
                    (numbers[i] / numbers[i - 1] == q)
                    ? true : false;
            }
        }
    }

    std::cout << "Is arithmetic progression -> " 
        << ((arithmetic_progression) ? "true" : "false")
        << std::endl
        << "Is geometric progression -> "
        << ((geometric_progression) ? "true" : "false")
        << std::endl;

    return 0;
}
