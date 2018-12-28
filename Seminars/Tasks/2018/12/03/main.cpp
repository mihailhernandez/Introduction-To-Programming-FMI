#include <iostream>
#include "Task1.hpp"
#include "Task2.hpp"
#include "Task3.hpp"
#include "Task4.hpp"
#include "Task5.hpp"
#include "Task6.hpp"
#include "Task7.hpp"

int main()
{
    // TASK 1
    
    int from = 0, to = 1000;
    
    // std::cin >> from >> to;

    std::cout << prime_number_count_in_range(from, to)
              << std::endl;

    // TASK 2 
    
    int number = 60;

    // std::cin >> number;

    prime_factors(number);

    // TASK 3
    
    char sentence1[] = "hello my name is boxxy";

    // std::cin >> sentence;

    std::cout << std::boolalpha << is_palindrome(sentence1)
              << std::endl;

    char sentence2[] = "opaapo";

    std::cout << std::boolalpha << is_palindrome(sentence2)
              << std::endl;

    // TASK 4

    double array[] = {1, 2, 3, 4, 5};

    std::cout << sum_of_max_min_avg(array, 5) << std::endl;

    // TASK 5

    int int_array1[] = {1, 3, 4, 1, 3, 3, 3, 1, 4};

    std::cout << max_appearances(int_array1, 9) << std::endl;

    int int_array2[] = {1, 1, 1, 0, 2};

    std::cout << max_appearances(int_array2, 5) << std::endl;
    
    int int_array3[] = {1, 1, 2, 100, 2};

    std::cout << max_appearances(int_array3, 5) << std::endl;

    // TASK 6

    int matrix[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    std::cout << matrix_diag_sum(matrix, 3) << std::endl;

    // TASK 7

    char char_matrix[][5] = {
        "aaaa",
        "babb",
        "bbbb",
        "abba"
    };

    std::cout << matrix_palindrome_count(char_matrix, 4)
              << std::endl;

    return 0;
}
