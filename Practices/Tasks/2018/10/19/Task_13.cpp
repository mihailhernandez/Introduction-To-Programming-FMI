#include <iostream>
#include <math.h>

int main()
{
    double x, y, c;

    std::cin >> x >> y;

    x = abs(1 - x);
    y = abs(1 - y);

    c = sqrt(x * x + y * y);

    std::cout << std::boolalpha << (c <= 1) << std::endl;

    return 0;
}
