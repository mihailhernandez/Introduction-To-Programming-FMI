#include <iostream>

/*
 * Напишете програма, която да изчисли на колко години сте.
 */
int main() 
{
    int age;
    int date_birth, month_birth, year_birth;
    int date_now, month_now, year_now;

    std::cout << "Date of birth: "; std::cin >> date_birth;
    std::cout << "Month of birth: "; std::cin >> month_birth;
    std::cout << "Year of birth: "; std::cin >> year_birth;
    std::cout << "Today's date: "; std::cin >> date_now;
    std::cout << "Today's month: "; std::cin >> month_now;
    std::cout << "Today's year: "; std::cin >> year_now;

    age = year_now - year_birth;
    if (month_now < month_birth)
    {   
        age--;
    }
    else if (month_now == month_birth)
    {
        if (date_now < date_birth)
        {
            age--;
        }
    }
    
    std::cout << "Your age: " << age << std::endl;
    
    return 0;
}
