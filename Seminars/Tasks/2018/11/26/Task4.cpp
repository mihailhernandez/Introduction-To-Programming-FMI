#include <iostream>

bool isPrime(int num)
{
    for (int i = 2; i <= num / 2; i++)
    {
        if (num % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{   
    int a;

    std::cin >> a;

    std::cout << std::boolalpha << isPrime(a) << std::endl;

    return 0;
}
