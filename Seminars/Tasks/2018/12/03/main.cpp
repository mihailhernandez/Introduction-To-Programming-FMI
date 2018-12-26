#include <iostream>
#include "Task1.hpp"
#include "Task2.hpp"
#include "Task3.hpp"
#include "Task4.hpp"

int main()
{
    // TASK 1
    
    int from, to;
    
    std::cin >> from >> to;

    std::cout << prime_number_count_in_range(from, to)
              << std::endl;


    // TASK 2 
    
    int number;

    std::cin >> number;

    prime_factors(number);

    // TASK 3
    
    char sentence[100];

    std::cin >> sentence;

    std::cout << std::boolalpha << is_palindrome(sentence)
              << std::endl;

    // TASK 4

    int array_size;
    double *array;

    std::cin >> array_size;

    array = new double[array_size];

    for (int i = 0; i < array_size; i++)
    {
        std::cin >> array[i];
    }

    std::cout << sum_of_max_min_avg(array) << std::endl;

    return 0;
}
