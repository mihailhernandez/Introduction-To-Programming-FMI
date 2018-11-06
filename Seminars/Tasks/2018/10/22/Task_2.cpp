#include <iostream>
#include <math.h>

/*
 * Напишете програма, която да проверява дали десетичката с
 * координати (x, y) принадлежи на оцветената фигура заедно с контура.
 * https://github.com/mihailhernandez/Introduction-To-Programming-FMI/tree/master/Seminars/Tasks/2018/10/22/images/Task_2.jpg
 */
int main()
{
    double x, y;             // coordinates (x - abscissa, y - ordinate)
    double c;                // the length from the start (0, 0) to the point, created by x and y
    double sin, cos;         // the sin and cos of the angle between c and the abscissa
    double max_cos = sqrt(2) / 2; 
    double min_sin = sqrt(2) / 2;
    double max_sin = 1;
    double min_cos = 0;

    std::cin >> x >> y;

    x = abs(x);              // since the image implies symmetry, we can say that if the point 
    y = abs(y);              // lies in the filled spot in the first
                             // quadrant, then the point will lie in the rest of the filled 
                             // spots in the image, no matter the sign of x and y

    c = sqrt(x*x + y*y);

    // if the third side is longer than the radius of the circle (1), then the 
    // point created by x and y does not lie in the circle.
    if (c > 1)
    {
        std::cout << "False" << std::endl;
        return 0;
    }
    
    if (x == y)
    {
        std::cout << "True" << std::endl;
        return 0;
    }

    sin = y / c;
    cos = x / c;

    if (sin >= min_sin && sin <= max_sin && 
        cos >= min_cos && cos <= max_cos)
    {
        std::cout << "True" << std::endl;
    }
    else
    {
        std::cout << "False" << std::endl;
    }

    return 0;
}
