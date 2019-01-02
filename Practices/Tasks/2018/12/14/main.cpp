#include <iostream>
#include "Task1.hpp"
#include "Task2.hpp"
#include "Task3.hpp"
#include "Task4.hpp"
#include "Task5.hpp"

int main()
{
    // Task 1

    int arr_size = 10;
    double numbers[arr_size] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    for (int i = 0; i < arr_size; i++)
        std::cout << numbers[i] << " ";
    
    std::cout << std::endl;

    map(numbers, arr_size, divideBy2);

    for (int i = 0; i < arr_size; i++)
        std::cout << numbers[i] << " ";

    std::cout << std::endl;

    // Task 2

    arr_size = 5;
    int arr[arr_size] = {1, 2, 3, 4, 5};
    int res[arr_size];

    for (int i = 0; i < arr_size; i++)
        std::cout << arr[i] << " ";

    std::cout << std::endl;

    int count = filter(arr, res, arr_size, is_odd);

    for (int i = 0; i < count; i++)
        std::cout << res[i] << " ";

    std::cout << std::endl;

    // Task 3

    std::cout << sum_iterative(5) << std::endl;
    std::cout << sum_recursive(5) << std::endl;

    // Task 4

    std::cout << factoriel_iterative(5) << std::endl;
    std::cout << factoriel_recursive(5) << std::endl;

    // Task 5

    std::cout << num_of_digits_recursive(100001) << std::endl;
    std::cout << num_of_digits_recursive(10000110) << std::endl;

    return 0;
}
