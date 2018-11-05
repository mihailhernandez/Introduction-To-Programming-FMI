#include <iostream>

bool isPrime(int);

using namespace std;

/**
 * Задача 1.Да се напише програма,
 * която по въведено число проверява
 * дали може да се получи като сума
 * на две прости числа и извежда всички
 * такива варианти на конзолата.
 * 
 * Пример : n = 20
 * 20 = 3 + 17
 * 20 = 7 + 13
 */
int main()
{
	int number;
	int prime_2;

	cin >> number;

	for (int prime_1 = 2; prime_1 < (number / 2) - 1; prime_1++)
	{
		prime_2 = number - prime_1;
		if (isPrime(prime_1) && isPrime(prime_2))
		{
			cout << number << " = " << prime_1 << " + " << prime_2 << endl; 
		}
	}
		
	return 0;
}

bool isPrime(int number) 
{
	for (int i = 2; i < number; i++)
	{
		if (number % i == 0)
		{
			return false;
		}
	}
	return true;
}
