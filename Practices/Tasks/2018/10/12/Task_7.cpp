#include <iostream>

int main()
{
    double x;

    std::cin >> x;

    if (x >= 20)
    {
        std::cout << 2 * x * x * x * x + 3 << std::endl;
    }
    else
    {
        x = ((x - 1) < 0) ? -1 * (x - 1) : x - 1;
        std::cout << x << std::endl;
    }

    return 0;
}
