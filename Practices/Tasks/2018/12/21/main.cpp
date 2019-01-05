#include <iostream>
#include "Task1.hpp"
#include "Task2.hpp"
#include "Task3.hpp"
#include "Task4.hpp"
#include "Task5.hpp"

int main()
{
    // Task 1

    char first_name[] = "Mihail";
    char last_name[] = "Hernandez";

    char *full_name = concat(first_name, last_name);

    std::cout << full_name << std::endl;

    // Task 2

    int arr[5] = {1, 2, 3, 4, 5};
    int len = get_length(arr, 5, is_odd);
    int *new_arr = filter(arr, 5, len, is_odd);

    for (int i = 0; i < 5; i++)
        std::cout << arr[i] << " ";
    std::cout << std::endl;

    for (int i = 0; i < len; i++)
        std::cout << new_arr[i] << " ";
    std::cout << std::endl;

    delete[] new_arr;

    // Task 3

    double arr_2[] = {1, 2, 3, 4, 5};
    double *new_arr_2 = map(arr_2, 5, divideBy2);

    for (int i = 0; i < 5; i++)
        std::cout << arr_2[i] << " ";
    std::cout << std::endl;

    for (int i = 0; i < 5; i++)
        std::cout << new_arr_2[i] << " ";
    std::cout << std::endl;

    // Task 4

    std::cout << std::boolalpha << contains(1234, 4) << std::endl;
    std::cout << std::boolalpha << contains(1234, 5) << std::endl;

    // Task 5

    double nums_inc[] = {1, 2, 3, 4, 5};
    double nums_not_inc[] = {1, 2, 2.2, 2.1, 3};

    std::cout << std::boolalpha << is_increasing(nums_inc, 5) << std::endl;
    std::cout << std::boolalpha << is_increasing(nums_not_inc, 5) << std::endl;

    return 0;
}
