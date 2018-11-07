#include <iostream>

/*
 * Напишете програма, в която да въведете две числа от 
 * клавиатурата и изведете на екрана по-голямото от тях.
 */
int main()
{
    int a, b;

    std::cin >> a >> b;

    std::cout << ((a >= b) ? a : b) << std::endl;
    
    return 0;
}
