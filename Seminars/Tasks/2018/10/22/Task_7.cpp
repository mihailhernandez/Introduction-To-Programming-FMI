#include <iostream>

/*
 * Напишете програма, която пресмята и извежда 
 * на екрана n-тата степен на дадено цяло число x.
 */
int main()
{
    int n;
    double x, temp;

    std::cin >> x >> n;

    temp = (n > 0) ? x : (1 / x);
    x = 1;

    while (n != 0)
    {
        x *= temp;
        if (n > 0)
        {
            n--;
        }
        else
        {
            n++;
        }
    }   

    std::cout << x << std::endl;

    return 0;
}
