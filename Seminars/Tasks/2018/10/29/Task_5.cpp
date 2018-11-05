#include <iostream>

using namespace std;

/*
 * Задача 5. Да се напише програма, 
 * която намира колко често се срещат 
 * цифрите на дадено цяло число. 
 * Числото може да съдържа между 1 и 12 цифри.
 */
int main()
{
	int digits[10];
	long long int number;

	for (int i = 0; i < 10; i++)
	{
		digits[i] = 0;
	}

	cin >> number;

	while (number > 0) 
	{
		digits[(number % 10)] ++;
		number = number / 10;
	}

	for (int i = 0; i < 10; i++)
	{
		cout << i << " - " << digits[i] << endl; 
	}

	return 0;
}
