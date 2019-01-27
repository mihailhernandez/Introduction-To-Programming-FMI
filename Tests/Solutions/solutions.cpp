#include <iostream>
#include <math.h>

bool is_point_in_task_1_1(int x, int y)
{
    if (x >= 0 && x <= 2 && y <= 0 && y >= -2)
        return true;
    return hypot(x, y) <= 1;
}

bool is_point_in_task_1_2(int x, int y)
{
    if (hypot(abs(x), abs(2 - y)) < 1)
        return false;
    if (hypot(abs(2 - x), abs(2 - y)) <= 2)
        return true;
    return false;
}

double formula_1(double a, double b, double c, double d, double e, double f, double h)
{
    return (a / (b + (c / (d + (e / (f + h))))));
}

double formula_2()
{
    return (cbrt(3) + sqrt(5) + pow(19, 1 / 5)) /
           (cbrt(7) + sqrt(2) + pow(13, 1 / 4));
}

double formula_3(double x)
{
    return sin(2 * x + 4) 
                + cos(x - 1) 
                - pow(tan(pow(x, 2.0)) + (1 / tan(pow(x, 3.0))), 2.0)
                / log(abs(1 + pow(x, 2.0)));
}

double formula_4(double x, double y)
{
    return pow(log(abs(pow(x, 2.0) - 2)) / (log(4) + exp((x - y) / 2)), 2.0)
           / pow(log(2 + exp((x + y) / 2)), 3.0);
}

long long factoriel(int n)
{
    long long fact = 1;
    for (int i = 2; i <= n; i++)
        fact *= i;
    return fact;
}

double find_sum_1(int n)
{
    double sum = 0;
    for (int i = 1; i <= n; i++)
        sum += (2 * i) / ((2 * i + 1) * double(factoriel(2 * i + 2)));
    return sum;
}

long long factoriel_range(int start, int end)
{
    long long fact = 1;
    for (int i = start; i <= end; i++)
        fact *= i;
    return fact;
}

double find_sum_2(int n)
{
    long long sum = 0;
    for (int i = 1; i <=n; i++)
        sum += factoriel_range(i, i*2);
    return sum;
}

int main()
{
    // Task 1

    std::cout << std::boolalpha 
              << is_point_in_task_1_1(1.4, -1.4) << std::endl
              << is_point_in_task_1_1(1.5, 2) << std::endl;

    std::cout << std::boolalpha 
              << is_point_in_task_1_2(0.5, 2) << std::endl
              << is_point_in_task_1_2(3, 2) << std::endl;

    std::cout << formula_1(1, 1, 1, 1, 1, 1, 1) << std::endl;
    std::cout << formula_1(1, 1, 0, 0, 1, 0.5, 0.5) << std::endl;
    
    std::cout << formula_2() << std::endl; 

    std::cout << formula_3(1) << std::endl; 

    std::cout << formula_4(1, 1) << std::endl; 

    // Task 2

    std::cout << find_sum_1(1) << std::endl;
    std::cout << find_sum_1(2) << std::endl;
    std::cout << find_sum_1(3) << std::endl;

    // Task 3

    std::cout << find_sum_2(2) << std::endl;
    std::cout << find_sum_2(3) << std::endl;
    std::cout << find_sum_2(4) << std::endl;

    return 0;
}
