#include <iostream>

/**
 * A store has ice-creams of 3 and 5 balls. Check if want a given
 * number of balls can be made by the store.
 */


/**
 * This function is recursive and it is used to solve the problem
 * when the ice-cream balls are different than 3 and 5 for instance
 */
bool can_be_made(int);


/**
 * Only 0, 1, 2, 4 and 7 cannot be made by the shop if the store
 * can make ice-creams only using 3 and 5 balls at a time.
 */ 
int main()
{
	unsigned int number_of_balls;

	std::cin >> number_of_balls;	
	std::cout << (can_be_made(number_of_balls) ? "Yes" : "No") << std::endl;	
	return 0;
}

bool can_be_made(int number_of_balls)
{
	// Recursive solution to the problem when the ice-cream
	// shop can make ice-cream using just 3 and 5 balls.
	if (number_of_balls % 3 == 0 || number_of_balls % 5 == 0)
	{
		return true;
	}	
	else if (number_of_balls < 3) 
	{
		return false;
	}
	else	
	{
		return ((can_be_made(number_of_balls - 3)) 
			|| (can_be_made(number_of_balls - 5)));
	}
}
