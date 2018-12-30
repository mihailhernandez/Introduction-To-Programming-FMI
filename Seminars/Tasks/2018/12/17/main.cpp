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
    
    std::cout << factoriel(10) << std::endl; // 3628800

    // TASK 2

    std::cout << fibonacci(10) << std::endl; // 34

    // TASK 3
    
    int array[] = {1, 2, 3, 4, 5, 6};

    std::cout << std::boolalpha << contains(array, 6, 2) << std::endl;  // true
    std::cout << std::boolalpha << contains(array, 6, 10) << std::endl; // false 

    // TASK 4

    char sentence[] = "hello World.";

    std::cout << first_capital(sentence) << std::endl; // W

    // TASK 5

    std::cout << sum_of_digits(123) << std::endl;      // 6
    std::cout << sum_of_digits(12341000) << std::endl; // 11

    // TASK 6

    std::cout << smallest_digit(12345) << std::endl; // 1
    std::cout << smallest_digit(102345) << std::endl; // 0

    // TASK 7

    std::cout << reverse(1234) << std::endl; // 4321
    std::cout << reverse(1234100) << std::endl; // 14321
    std::cout << reverse(12341001) << std::endl; // 10014321
    
    return 0;
}
