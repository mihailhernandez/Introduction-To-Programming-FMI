#include <iostream>
#include <math.h>

int main()
{
    double x;

    std::cin >> x;

    x = (x >= 20) ? 2 * x * x * x * x + 3 : abs(x - 1);

    std::cout << x << std::endl;

    return 0;
}
