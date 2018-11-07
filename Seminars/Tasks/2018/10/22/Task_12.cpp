#include <iostream>
#include <math.h>

int main()
{
    int n;
    double result;

    std::cin >> n;

    if (n % 2 == 0)
    {
        std::cout << "Enter an odd number!" << std::endl;
        return -1;
    }
    
    result = sqrt(n);

    while (n != 1)
    {
        result = sqrt((n - 2) + result);
        n -= 2;
    }

    std::cout << result << std::endl;

    return 0;
}
