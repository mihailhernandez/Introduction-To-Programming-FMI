#include <iostream>

/*
 * Напишете програма, която въвежда от клавиатурата целите числа m и n, 
 * където (m < n). Програмата да извежда всички числа в интервала [m, n], които са кратни на 5.
 */
int main()
{
    int m, n;

    std::cin >> m >> n;

    for (int i = m; i <= n; i++)
    {
        if (i % 5 == 0)
        {
            std::cout << i << " ";
        }
    }

    std::cout << std::endl;

    return 0;
}
