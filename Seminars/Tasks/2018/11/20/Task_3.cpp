#include <iostream>

int main()
{
    int n;

    std::cin >> n;

    int matrix[n][n];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            std::cin >> matrix[i][j];
        }
    }

    for (int i = 0; i < n; i += 2)
    {
        for (int j = 0, temp = 0; j < n; j++)
        {
            temp = matrix[i][j];
            matrix[i][j] = matrix[j][i];
            matrix[j][i] = temp;
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            std::cout <<  matrix[i][j] << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}
