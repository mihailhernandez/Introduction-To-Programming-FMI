#include <iostream>

/*
 * Въвеждат се n цели числа както и даден затворен 
 * интервал от числа, зададен с двата си края. Да 
 * се провери дали всички всички числа от дадения 
 * интервал се срещат измежду въведените n.
 * Пример :
 * Вход :
 * 10 4 12        
 * (10 – брой на числата 
 * (4 – начало на интервала  12 – край на интервала)
 * 5 8 4 1 9 6 7 11 10 12 
 * Изход :
 * true
 */
int main()
{
    int n, start, end;
    int current_number;
    bool is_in_range = true;

    std::cin >> n >> start >> end;

    for (int i = 0; i < n; i++)
    {
        std::cin >> current_number;

        if (!(current_number >= start && current_number <= end))
        {
            is_in_range = false;
        }
    }

    std::cout << std::boolalpha << is_in_range << std::endl;

    return 0;
}
