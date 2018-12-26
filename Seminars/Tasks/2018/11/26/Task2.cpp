#include <iostream>
#include <math.h>

double distance(double x1, double y1, double x2, double y2)
{
    return sqrt(abs(x1 - x2) * abs(x1 - x2) + abs(y1 - y2) * abs(y1 - y2));
}

int main()
{
    double x1, y1;
    double x2, y2;

    std::cin >> x1 >> y1;
    std::cin >> x2 >> y2;

    std::cout << distance(x1, y1, x2, y2) << std::endl;

    return 0;
}
