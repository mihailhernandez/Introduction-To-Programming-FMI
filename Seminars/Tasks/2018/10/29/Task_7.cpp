#include <iostream>

/*
 * Задача 7*. Да се напише програма,
 * която по въведени N числа и число K
 * проверява дали съществува под редица,
 * сумата на числата в която e равна на K. 
 * Ако има да се изведат индексите на 
 * първия и последния член от под редицата.
 * (Индексацията започва от 1), иначе да се
 * изведе подходящо съобщение.
 * 
 * Пример:
 * 7 16
 * 4 6 3 7 1 2 5
 * Изход: 2 4
 */

int main()
{
    int array_size;
    int *array;
    int searched_number;
    
    std::cin >> array_size;
    std::cin >> searched_number;

    array = new int[array_size];

    for (int i = 0; i < array_size; i++)
    {
        std::cin >> array[i];
    }

    for (int sum = 0, first_index = 0; first_index < array_size; first_index++, sum = 0)
    {
        for (int second_index = first_index; second_index < array_size; second_index++)
        {
            sum += array[second_index];

            if (sum > searched_number)
            {
                break;
            }

            if (sum == searched_number)
            {
                std::cout << first_index + 1 << " " << second_index + 1 << std::endl;
                return 0;
            }
        }
    }

    std::cout << "No subarray found." << std::endl;
    
    return 0;    
}
