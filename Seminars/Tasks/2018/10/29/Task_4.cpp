#include <iostream>

using namespace std;

/*
 * Задача 4.Да се напише програма,
 * която по въведено число между 1
 * и 26 извежда пирамида във вида : 
 * Пример – n = 4
 *       A
 *     A B A
 *   A B C B A
 * A B C D C B A
 */
int main()
{	
	int n, row, spaces_needed;
	char large_letters[26];

	cin >> n;

	for (int i = 0; i < 26; i++) 
	{
		large_letters[i] = 'A' + i;
	}

	for (row = 1; row <= n; row++)
	{	
		spaces_needed = n - row;
		for (int i = 0; i < spaces_needed; i++)
		{
			cout << "  ";
		}
		for (int i = 0; i < row; i++)
		{
			cout << large_letters[i] << " ";
		}
		if (row != 1)
		{
			for (int i = row - 2; i >= 0; i--)
			{
				cout << large_letters[i] << " ";
		
			}
		}	
		cout << endl;
	}

	return 0;
}
