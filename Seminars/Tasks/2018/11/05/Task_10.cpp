#include <iostream>

/*
 * Въвежда се едно цяло число n. 
 * Да се провери дали то е палиндром. 
 * (Дали се чете отляво-надясно и 
 * отдясно-наляво по един и същи начин). 
 * Пример : 
 * 12321 ,   1441 ,    645546 са палиндроми
 * 1231 , 4324 ,  34553 не са са палиндроми
 */
int main()
{
    int number, temp;
    int number_length = 0;
    int *number_digits; 

    std::cin >> number;

    temp = number;

    while (temp != 0)
    {
        number_length++;
        temp /= 10;
    }

    number_digits = new int[number_length];
    temp = number;

    for (int i = 0; i < number_length; i++)
    {
        number_digits[i] = temp % 10;
        temp /= 10;
    }


    for (int i = 0; i < number_length / 2; i++)
    {
        if (number_digits[i] != number_digits[number_length - 1 - i])
        {
            std::cout << "Is not a palindrome!" << std::endl;
            return -1;
        }
    }

    std::cout << "Is a palindrome!" << std::endl;

    return 0;
}
