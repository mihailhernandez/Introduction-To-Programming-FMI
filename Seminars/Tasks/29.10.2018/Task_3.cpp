#include <iostream>

using namespace std;

/*
 * Задача 3.Да се изведат всички съвършени числа от 1 до 10000.
 * Съвършено число е такова, което се получава като сума
 * на делителите си (без самото него).
 */
int main()
{
	const int MAX_RANGE = 10000;
	int perfect = 0;

	for (int number = 1; number <= MAX_RANGE; number++)
	{
		for (int i = 1; i < number; i++)
		{
			if (number % i == 0)
			{
				perfect += i;
			}
		}	
		if (number == perfect) 
		{
			cout << number << endl;
		}
		perfect = 0;
	}
	return 0;
}
