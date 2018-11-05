#include <iostream>

/*
 * Задача 6. Да се напише програма, 
 * която въвежда поредица от малки 
 * латински букви и отпечатва на 
 * конзолата буквата, която се среща 
 * най-много пъти и самия брой пъти
 * Пример
 *      thisisasimpleexamplee
 * Изход
 *      e - 4
 */
int main() 
{
	int  letters[26];
	char most_common_letter = ' ';
    char *text;

	for (int i = 0; i < 26; i++)
	{
		letters[i] = 0;
	}

    std::cin >> text;
    most_common_letter = text[0];

	for (int i = 0; text[i] >= 'a' && text[i] <= 'z'; i++)
    {
		letters[text[i] - 'a']++;
		if (letters[text[i] - 'a'] >= letters[most_common_letter - 'a'])
        {	
			most_common_letter = text[i];
		}
	}

	std::cout << most_common_letter << " - " 
              << letters[most_common_letter - 'a'] 
              << std::endl;

	return 0;
}
