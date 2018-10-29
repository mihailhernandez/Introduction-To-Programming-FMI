#include <iostream>
#include <math.h>

/** 
 * Name:           Mihail Hernandez
 * Faculty number: 45564
 * Programme:      Informatics
 * Group:          3
 */

/**
 * Find the side of a triange given two double arrays
 * describing each point.
 */
double find_distance_between_points(double[], double[]);

/*
 * Given three points x1y1 x2y2 x3y3 find if a triangle can exist
 * and it does what type of a tringle is it? Acute, scalene or right?
 */
int main()
{
	double points[3][2];
	double side_a, side_b, side_c, temp_side, coeficient;

	std::cout << "x1y1 : "; std::cin >> points[0][0] >> points[0][1];	
	std::cout << "x2y2 : "; std::cin >> points[1][0] >> points[1][1];	
	std::cout << "x3y3 : "; std::cin >> points[2][0] >> points[2][1];

	side_a = find_distance_between_points(points[0], points[1]);
	side_b = find_distance_between_points(points[1], points[2]);
	side_c = find_distance_between_points(points[0], points[2]);

	if (side_a < side_b) 
	{
		temp_side = side_a;
		side_a    = side_b;
		side_b    = temp_side;
	}
	if (side_a < side_c) 
	{
		temp_side = side_a;
		side_a    = side_c;
		side_c    = temp_side;
	}
	
	coeficient = pow(side_a, 2) / (pow(side_b, 2) + pow(side_c, 2));
	
	if (side_a + side_b <= side_c 
			|| side_a + side_c <= side_b 
			|| side_b + side_c <= side_a)
	{
		std::cout << "Not a triangle" << std::endl;
	}
	else if (coeficient == 1)
	{
		std::cout << "Right triangle" << std::endl;
	}
	else if (coeficient > 1)
        {       
                std::cout << "Scalene triangle" << std::endl;
	}	
	else
        {       
                std::cout << "Acute triangle" << std::endl;
        }


	return 0;
}

double find_distance_between_points(double first_point[], double second_point[])
{
	double x1 = first_point[0];
	double y1 = first_point[1];
	double x2 = second_point[0];
	double y2 = second_point[1];
	double x_distance = abs(x1 - x2);
	double y_distance = abs(y1 - y2);	

	return sqrt(pow(x_distance, 2) + pow(y_distance, 2));
}
