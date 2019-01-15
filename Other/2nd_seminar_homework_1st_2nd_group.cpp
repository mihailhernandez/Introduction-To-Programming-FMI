#include <iostream>

void print_base(int power)
{
    for (int stars = 0; stars < power; stars++)
        std::cout << "* ";
    std::cout << std::endl;
}

void print_spacing(int spacing)
{
    for (int i = 0; i < spacing; i++, std::cout << " ");
}

void print_line(int current_power, int power)
{
    for (int rows = current_power; rows > 0; rows--, std::cout << std::endl)
        for (int times = power / current_power; times > 0; times--)
        {
            print_spacing(current_power - 1);
            std::cout << "*";
            print_spacing(current_power);
        }
}

void print_merge(int current_power, int power)
{
    for (int rows = current_power / 2, side_spacing = rows - 1;
        rows > 0; rows--, side_spacing++, std::cout << std::endl)
    {
        int middle_spacing = (rows - 1) * 2 + 1;
        for (int times = power / current_power; times > 0; times--)
        {
            print_spacing(side_spacing);
            std::cout << "*";
            print_spacing(middle_spacing);
            std::cout << "*";
            print_spacing(side_spacing + 1);
        }
    }
}   

void print_star_tree(int current_power, int power)
{
    if (current_power == 1)
        return print_base(power);
    print_star_tree(current_power / 2, power);
    print_merge(current_power, power);
    print_line(current_power, power);
}

bool is_a_power_of_2(int number)
{
    return (number & (number - 1)) == 0;
}

bool is_in_range(int number)
{
    return (number >= 1 && number <= 256);
}

int main()
{
    int power;

    std::cin >> power;

    if (!is_in_range(power))
    {
        std::cout << "Not in range." << std::endl;
        return -1;
    }

    if (!is_a_power_of_2(power))
    {
        std::cout << "Not a power of 2." << std::endl;
        return -2;
    }

    print_star_tree(power, power);

    return 0;
}
