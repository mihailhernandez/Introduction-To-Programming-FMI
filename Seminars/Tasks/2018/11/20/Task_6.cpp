#include <iostream>

int main()
{
    int chocolates;
    int price = 0;
    
    std::cin >> chocolates;

    for (int i = 7; chocolates >= i; chocolates -= i, price += 5) {}
    for (int i = 4; chocolates >= i; chocolates -= i, price += 3) {}
    for (int i = 1; chocolates >= i - 1; chocolates -= i, price += 1) {}

    std::cout << price << std::endl;

    return 0;
}
