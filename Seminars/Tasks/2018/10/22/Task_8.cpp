#include <iostream>

/*
 * Напишете програма, която при въвеждане на цяло 
 * положително число n извежда числата от 1 до n*n 
 * в спираловиден вид.
 * Вход:
 * 3
 * 
 * Изход:
 * 1 2 3
 * 6 5 4
 * 7 8 9
 */
int main()
{
    int n;

    std::cin >> n;

    for (int i = 1; i <= n * n; i++)
    {
        std::cout << i << " ";
        if (i % n == 0 && i != n * n)
        {
            std::cout << std::endl;
            for (int num = i + n; num > i; num--)
            {
                std::cout << num << " ";
            }
            std::cout << std::endl;
            i += n;
        }
    }

    std::cout << std::endl;

    return 0;
}
