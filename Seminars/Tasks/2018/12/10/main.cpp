#include <iostream>
#include "Task1.hpp"
#include "Task2.hpp"
#include "Task3.hpp"
#include "Task4.hpp"
#include "Task5.hpp"

int main()
{
    // TASK 1

    int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9,
                   10, 11, 12, 13, 14, 15};

    std::cout << sum_of_nexts(array, 15, next)
              << std::endl;
    
    // TASK 2

    int task_2_array[] = {10, 5, 2, 2};

    std::cout << number_of_divisible_pairs(array, 4, is_divisible)
              << std::endl;

    // TASK 3

    double task_3_array[] = {3, 2, 5, 7, 4, 5, 12, 14};

    std::cout << longest_increasing_subarray_size(task_3_array, 8)
              << std::endl;

    // TASK 4

    char matrix[][100] = {
        "1234",
        "4567",
        "8910"
    };

    print_matrix_outer_layer(matrix, 3, 4);


    // TASK 5

    char task_5_matrix[][100] = {
        "i",
        "love",
        "eating",
        "pizza"
    };

    print_in_alphabetical_order(task_5_matrix, 4);

    return 0;
}
