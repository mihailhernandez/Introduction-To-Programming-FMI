#include <iostream>
#include <math.h>

int main()
{
    double x;

    std::cin >> x;

    if (x < -4)
    {
        std::cout << 2 * x + 1 << std::endl;
    }
        else if (x >= -4 && x <= 5)
    {
        std::cout << sqrt(x * x + 3) << std::endl;
    }
    else if (x > 5)
    {
        std::cout << x / (2 * x + 1) << std::endl;
    }

    return 0;
}
