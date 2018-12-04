#include <iostream>
#include <math.h>

int main()
{
    double a, b, c;
    int a_x, a_y,
        b_x, b_y,
        c_x, c_y;

    std::cin >> a_x >> a_y;
    std::cin >> b_x >> b_y;
    std::cin >> c_x >> c_y;

    a = sqrt(abs(b_x - c_x) * abs(b_x - c_x) + abs(b_y - c_y) * abs(b_y - c_y));
    b = sqrt(abs(a_x - c_x) * abs(a_x - c_x) + abs(a_y - c_y) * abs(a_y - c_y));
    c = sqrt(abs(a_x - b_x) * abs(a_x - b_x) + abs(a_y - b_y) * abs(a_y - b_y));

    if (a + b > c && a + c > b && b + c > a)
    {
        if (a == b || a == c || b == c)
        {
            std::cout << "Isosceles triangle!" << std::endl;

        }
        else
        {
            std::cout << "A triangle!" << std::endl;
        }
    }
    else
    {
        std::cout << "Not a triangle." << std::endl;
    }

    return 0;
}
