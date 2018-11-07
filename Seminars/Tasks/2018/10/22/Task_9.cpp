#include <iostream>

/*
 * Да се напише програма, която по зададено число n>=0, 
 * намира n-тото число на редицата на Фибоначи
 */
int main()
{
    long long a = 0, b = 1, c = 0, n;

    std::cin >> n;

    while (n > 0)
    {
        c = a + b;
        a = b;
        b = c;
        n--;
    }

    std::cout << c << std::endl;

    return 0;
}   
