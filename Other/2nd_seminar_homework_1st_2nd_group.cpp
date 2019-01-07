#include <iostream>

void print_base(int power)
{
    for (int stars = 0; stars < power; stars++)
        std::cout << "* ";
    std::cout << std::endl;
}

void print_line(int current_power, int power)
{
    for (int rows = current_power; rows > 0; rows--, std::cout << std::endl)
        for (int times = power / current_power; times > 0; times--)
        {
            for (int spacing = 0; spacing < current_power - 1; spacing++)
                std::cout << " ";
            std::cout << "*";
            for (int spacing = 0; spacing < current_power; spacing++)
                std::cout << " ";
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
            for (int spacing = 0; spacing < side_spacing; spacing++)
                std::cout << " ";
            std::cout << "*";
            for (int spacing = 0; spacing < middle_spacing; spacing++)
                std::cout << " ";
            std::cout << "*";
            for (int spacing = 0; spacing < side_spacing + 1; spacing++)
                std::cout << " ";
        }
    }
}   

void print_star_tree_helper(int current_power, int power)
{
    if (current_power == 1)
        print_base(power);
    current_power *= 2;
    if (current_power > power)
        return;
    print_merge(current_power, power);
    print_line(current_power, power);
    print_star_tree_helper(current_power, power);
}

void print_star_tree(int power)
{
    print_star_tree_helper(1, power);
}

int main()
{
    int power;

    std::cin >> power;

    if (!(power >= 1 && power <= 256))
    {
        std::cout << "Bad entry." << std::endl;
        return -1;
    }

    if (power & (power - 1) != 0)
    {
        std::cout << "Not a power of 2." << std::endl;
        return -2;
    }

    print_star_tree(power);

    return 0;
}
