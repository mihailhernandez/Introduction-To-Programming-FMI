#include <iostream>

/*
 * Дадени са ви две цели числа.
 * а) Изведете тяхната сума.
 * б) Изведете тяхната разлика.
 * в) Изведете лицето на правоъгълник със страни тези числа.
 * г) Изведете тяхното частно.
 */
int main()
{
    int a, b;

    std::cin >> a >> b;

    std::cout << "a + b = " << a + b << std::endl;
    std::cout << "a - b = " << a - b << std::endl;
    std::cout << "(a * b) / 2 = " << (a * b) / 2 << std::endl;
    std::cout << "a / b = " << a / b << std::endl;

    return 0;
}
