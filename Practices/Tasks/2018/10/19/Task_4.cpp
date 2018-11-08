#include <iostream>

/*
 * Напишете програма, която въвежда от клавиатурата месец от годината като число. 
 * Според въведеното число, изведете на екрана сезонът, в който се намира този месец. 
 * Ако месецът не е валиден изведете подходящо съобщение.
 */
int main()
{
    int month;

    std::cin >> month;

    if (month == 12 || month == 1 || month == 2)
    {
        std::cout << "Winter!" << std::endl;
    }
    else if (month == 3 || month == 4 || month == 5)
    {
        std::cout << "String!" << std::endl;
    }
    else if (month == 6 || month == 7 || month == 8)
    {
        std::cout << "Summer!" << std::endl;
    }
    else if (month == 9 || month == 10 || month == 11)
    {
        std::cout << "Autumn!" << std::endl;
    }
    else
    {
        std::cout << "Enter a valid month" << std::endl;
    }

    return 0;
}
