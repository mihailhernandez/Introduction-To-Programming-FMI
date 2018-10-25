#include <iostream>

/**
 * You can fry a given number of bread slices on a flying pan,
 * each side taking to fry for a given amount of time. Having
 * the number of slices, how much time will it take to fry all 
 * of the bread slices.
 */ 
int main()
{
	unsigned short times_to_turn_slices;
	unsigned short number_of_slices;
        unsigned short time_to_fry_side;
	unsigned short pan_slice_capacity;

	std::cout << "Enter pan capacity: ";
	std::cin >> pan_slice_capacity;
	std::cout << "Enter time to cook each slice: ";
	std::cin >> time_to_fry_side;
	std::cout << "Enter number of slices: ";
	std::cin >> number_of_slices;

	times_to_turn_slices = (number_of_slices % pan_slice_capacity > 0)
		? number_of_slices * 2 / pan_slice_capacity + 1
		: number_of_slices * 2 / pan_slice_capacity;
	
	std::cout << times_to_turn_slices * time_to_fry_side << std::endl;
	return 0;
}

