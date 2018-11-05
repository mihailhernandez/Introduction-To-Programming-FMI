#include <iostream>

/*
 * Напишете програма, която да проверява дали дата е валидна.
 */
int main() 
{
    int date, month, year;
    int dates_of_months[12] = {31, 28, 31, 30, 31,
        30, 31, 31, 30, 31, 30, 31};

    std::cout <<  "Date: ";
    std::cin >> date;
    std::cout << "Month: ";
    std::cin >> month;
    std::cout << "Year: ";
    std::cin >> year;

    if (!(date >= 1 && month >= 1 && month <= 12 && year >= 0))
    {
        std::cout << "Enter valid dates!" << std::endl;
        return -1;
    }

    if ((year % 4 == 0)
        && (year % 100 != 0)
            || (year % 100 == 0 && year % 400 == 0))
    {
        dates_of_months[1]++;
    }
    
    std::cout << ((dates_of_months[month - 1] >= date) ?
        "Date is valid!" : "Date is not valid!") << std::endl;

    return 0;
}
