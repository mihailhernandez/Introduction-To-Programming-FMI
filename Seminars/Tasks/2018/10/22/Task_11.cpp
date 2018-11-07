#include <iostream>

/*
 * Да се напише програма, която намира симетричното на дадено число 
 * (цифрите му са в обратен ред) и проверява дали въведеното число 
 * е палиндром(симетрично на себе си).
 */
int main()
{
    int number, temp;
    int digit_length = 0;
    int *digits;
    bool palindrome = true;

    std::cin >> number;
    temp = number;

    while (temp != 0)
    {
        temp /= 10;
        digit_length++;
    }

    digits = new int[digit_length];
    temp = number;

    for (int i = 0; i < digit_length; i++)
    {
        digits[i] = temp % 10;
        temp /= 10;
    }

    for (int i = 0; i < digit_length / 2; i++)
    {
        if (digits[i] != digits[digit_length - 1 - i])
        {
            palindrome = false;
            break;
        }
    }

    std::cout << number << " " << ((palindrome) ? "is " : "is not ") 
        << "a palindrome." << std::endl << "Backwards of " << number
        << " -> ";

    
    for (int i = 0; i < digit_length; i++)
    {
        std::cout << digits[i];
    }
    
    std::cout << std::endl;

    return 0;
}
