#include <iostream>

int longest_streak(int array[])
{
    int longest_streak = 0;
    int *num = array;
    
    for (int streak = 1; *num; num++)
    {
        if (*num != *(num + 1))
        {
            if (longest_streak < streak)
            {
                longest_streak = streak;
            }
            streak = 1;
        } 
        else
        {
            streak++;
        }
    }

    return longest_streak;
}

int main()
{
    int array_size;
    int *array;

    std::cin >> array_size;

    array = new int[array_size];

    for (int i = 0; i < array_size; i++) 
    {
        std::cin >> array[i];
    }

    std::cout << longest_streak(array) << std::endl;

    return 0;
}
