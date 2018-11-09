#include <iostream>

int main()
{
    double x, y;

    std::cin >> x >> y;

    std::cout << std::boolalpha
              << (x >= 1 && x <= 2 && y >= 1 && y <= 2)
              << std::endl;

    return 0;
}
