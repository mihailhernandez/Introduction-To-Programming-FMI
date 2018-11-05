#include <iostream>

using namespace std;


/*
 * Задача 2.Да се напише програма,
 * която намира НОД-а на две цели числа.
 */
int main()
{
	int a, b, min;
	
	cin >> a >> b;

	min = (a >= b) ? a : b;

	for (int i = min; i >= 1; i--) 
	{
		if (a % i == 0 && b % i == 0) 
		{	
			cout << i << endl;
			break;
		}	
	}
	return 0;
}
	
