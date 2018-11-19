#include <iostream>

int main()
{
    const int length = 5;
    int array[length] = {4, 5, 5, 4, 3};
    int n, max = 0;
    char letter;

    std::cin >> n >> letter;

    for (int i = 0; i < length; i++)
    {
        if (i < n && max < array[i])
        {
            max = array[i];
        }
    }

    for (int rows = 0; rows < max; rows++)
    {
        for (int column = 0, index = 0; column < n; column++, index++)
        {
            if (index == length)
            {
                index = 0;
            }
            if (array[index] < max - rows)
            {
                std::cout << "  ";
            }
            else
            {
                std::cout << letter << " ";
            }
        }
        std::cout << std::endl;
    }

    return 0;
}
