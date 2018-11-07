#include <iostream>
#include <math.h>

/*
 * Да се напише програма, която въвежда от клавиатурата 
 * три реални числа а, b, c. Програмата да определя дали
 * съществува триъгълник със страни a, b и c. Ако да, да
 * изчислява и извежда лицето му.
 * Hint. Херонова формула
 */
int main()
{
    double a, b, c;
    double p;

    std::cin >> a >> b >> c;

    if (a + b > c && b + c > a && a + c > b)
    {
        p = (a + b + c) / 2; 
        std::cout << "Area: " << sqrt(p * (p - a) * (p - b) * (p - c))
                  << std::endl;
    }
    else
    {
        std::cout << "A triangle cannot be made with sides: " 
                  << a << " " << b << " " << c << std::endl;
    }

    return 0;
}
