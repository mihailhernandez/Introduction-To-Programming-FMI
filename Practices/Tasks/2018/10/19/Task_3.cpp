#include <iostream>

/*
 * Да се състави програма, която въвежда от клавиатурата произволен символ. 
 * Ако символът е цифра, програмата да извежда съответанта цифра с дума. 
 * В противен случай изведете подходящо съобщение.
 */
int main()
{
    char c;
    char words[10][6] = {"zero", "one", "two", "three", "four",
                         "five", "six", "seven", "eight", "nine"};

    std::cin >> c;

    if (c >= '0' && c <= '9')
    {
        std::cout << words[c - '0'] << std::endl;
    }

    return 0;
}
