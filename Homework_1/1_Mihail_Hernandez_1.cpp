#include <iostream>

/**
 * Max out of 3 numbers.
 */
int main()
{
	int max;
	int a, b, c;
	
	std::cin >> a >> b >> c;
	
	max = (a >= b) ? a : b;
	max = (max >= c) ? max : c;

	std::cout << max << std::endl;

	return 0;
}

