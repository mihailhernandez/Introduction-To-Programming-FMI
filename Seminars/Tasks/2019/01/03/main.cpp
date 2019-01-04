#include <iostream>
#include "Task1.hpp"
#include "Task2.hpp"
#include "Task4.hpp"

int main()
{
    // Task 1

    std::cout << combinations(8) << std::endl;
    std::cout << combinations(4) << std::endl;

    // Task 2

    char *sentences[] = {
        "hello",
        "my name is",
        "misho19"
    };

    print_strings(sentences, 3, strlen);

    // Task 3
    
    // Task 4

    print_most_inner_bracket_indexes("( ) ( ) ( ) )");
    print_most_inner_bracket_indexes("( ( ) ( ( ) ) )");
    print_most_inner_bracket_indexes("( ( ( ( ) ) ( ) ) )");

    return 0;
}
