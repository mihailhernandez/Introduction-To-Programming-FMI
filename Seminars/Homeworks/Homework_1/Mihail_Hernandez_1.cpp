#include <iostream>
#include <math.h>

int main()
{
    double x, y; // define the x and y coordinates
    double c;    // define the length of the side
                 // created by x and y

    std::cin >> x >> y;

    c = sqrt(x * x + y * y);

    // if the length of the side c from the start
    // of the coordinate system is more than 4
    // then the point is for sure outside of the
    // scope
    if (c > 4)
    {
        std::cout << "Point is outside." << std::endl;
        return 0;
    }
    
    if (x > 0) 
    {
        x = abs(2 - x);
        c = sqrt(x * x + y * y);
        if (y < 0 || c < 2)
        {
            std::cout << "Point is outside." << std::endl;
            return 0;
        }
    }
    else
    {
        x = abs(-2 - x);
        c = sqrt(x * x + y * y);
        if (c < 1 || (y < 0 && c > 2)) 
        {
            std::cout << "Point is outside." << std::endl;
            return 0;
        }
    }

    std::cout << "Point is inside." << std::endl;

    return 0;
}
