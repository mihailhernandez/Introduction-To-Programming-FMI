#include <iostream>

/*
 * Въвеждат се n цели числа. Да се намерят 
 * и отпечатат всички числа, чийто сбор на 
 * цифрите се дели на 3, както и техния брой.
 */
int main()
{
    int n, current_number;
    int digit_sum = 0;
    int temp, count = 0;

    std::cin >> n;

    for (int i = 0; i < n; i++)
    {
        std::cin >> current_number;
        temp = current_number;

        while (temp != 0)
        {
            digit_sum += temp % 10;
            temp /= 10;
        }

        if (digit_sum % 3 == 0)
        {
            std::cout << current_number << std::endl;
            count ++;
        }
    }

    std::cout << "Count = " << count << std::endl;

    return 0;
}   
