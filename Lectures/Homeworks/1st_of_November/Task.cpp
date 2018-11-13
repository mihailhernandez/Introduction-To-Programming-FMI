#include <iostream>
#define MAX_NAME_SIZE 28
#define MAX_NAME_COUNT 9

/*
 * Да се напише програма „Минута е много“. Програмата 
 * пита за име на народен будител и проверява дали въведеното 
 * име е вярно. Вярно е всяко име, което е част от списъка. 
 * За име използвайте масив и eлементи от тип char.
 */
int main()
{
    bool is_name_present = false;
    char name[MAX_NAME_SIZE];
    char names[] = {"Св. св. Кирил и Методий, Паисий Хилендарски, \
                    Петър Берон, братя Миладинови, Петко \
                    Славейков, Захари Стоянов, Васил Левски, \
                    Христо Ботев, Иван Вазов"};
    
    std::cin >> name;

    for (int i = 0; names[i] != '\0' && !is_name_present; i++)
    {
        for (int j = 0; name[j] != '\0' && !is_name_present; j++)
        {
            if (names[i] != name[j])
            {
                i -= j;
                break;
            }
            else
            {
                if (name[j + 1] == '\0')
                {
                    is_name_present = true;
                    break;
                }
                i++;
            }
        }
    }

    std::cout << std::boolalpha << is_name_present << std::endl;

    return 0;
}
