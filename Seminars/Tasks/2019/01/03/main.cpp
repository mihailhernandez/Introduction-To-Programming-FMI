#include <iostream>
#include "Task2.hpp"
#include "Task4.hpp"

int main()
{
    // Task 2

    char *sentences[] = {
        "hello",
        "my name is",
        "misho19"
    };

    print_strings(sentences, 3, strlen);
    
    // Task 4

    print_most_inner_bracket_indexes("( ) ( ) ( ) )");
    print_most_inner_bracket_indexes("( ( ) ( ( ) ) )");
    print_most_inner_bracket_indexes("( ( ( ( ) ) ( ) ) )");

    return 0;
}
