#include <iostream>

int sum(int a, int b)
{
    return a + b;
}

int main()
{
    int a, b;

    std::cin >> a >> b;

    std::cout << sum(a, b) << std::endl;

    return 0;
}
