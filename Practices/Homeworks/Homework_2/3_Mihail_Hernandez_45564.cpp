/*
    Homework №2
    Introduction to programming
    Task №3
    Date: 08.12.2018
    Author: Mihail Humberto Hernandez
    Course: 1
    Group: 3
*/

#include <iostream>

long long decToBinary(int);

int main()
{
    int number;

    std::cin >> number;
    std::cout << decToBinary(number) << std::endl;

    return 0;
}

long long decToBinary(int number)
{
    long long binary = 0;

    for (int decMult = 1; number != 0; decMult *= 10, number /= 2)
    {
        binary += decMult * (number % 2);
    }
    
    return binary;
}
