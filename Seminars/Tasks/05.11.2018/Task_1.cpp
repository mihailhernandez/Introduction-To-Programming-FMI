#include <iostream>

/*
 * От клавиатурата се въвеждат n  цели числа 
 * (1 <= n <= 1 000 000), всяко от които е  
 * между 1 и 10000. Да се напише програма, 
 * която намира сбора и произведението им.
 */
int main()
{
    int n, current_number;
    unsigned long long sum = 0, product = 1;

    std::cin >> n;

    for (int i = 0; i < n; i++)
    {
        std::cin >> current_number;
        sum += current_number;
        product *= current_number;
    }

    std::cout << "Sum = " << sum << std::endl
        << "Product = " << product << std::endl;

    return 0;
}   
