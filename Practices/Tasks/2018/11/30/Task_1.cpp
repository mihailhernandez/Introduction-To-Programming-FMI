#include <iostream>
    
long long factoriel(long long);

int main()
{
    long long n;
    
    std::cin >> n;

    if (n < 0)
    {
        std::cout << "Enter a positive number!" << std::endl;
        return 0;
    }

    std::cout << factoriel(n) << std::endl;

    return 0;
}

long long factoriel(long long n)
{
    if (n == 0)
    {
        return 1;
    }

    for (int i = n - 1; i > 1; i--)
    {
        n *= i;
    }

    return n;
}
