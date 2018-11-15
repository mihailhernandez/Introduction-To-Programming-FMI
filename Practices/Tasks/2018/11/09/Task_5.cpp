#include <iostream>

int main()
{
    int n, m, x, y;

    std::cin >> n >> m >> x >> y;

    int matrix[n][m];
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            std::cin >> matrix[i][j]; 
        }
    }
    
    for (int distance = 1, exits = 0, new_x, new_y; exits != 4; distance++)
    {
        exits = 0;

        new_x = x + distance;
        new_y = y + distance;
        if (new_x < n && new_x >= 0 && new_y < m && new_y >= 0)
        {
            std::cout << matrix[new_x][new_y] << std::endl;
        }
        else
        {
            exits++;
        }

        new_x = x + distance;
        new_y = y - distance;
        if (new_x < n && new_x >= 0 && new_y < m && new_y >= 0)
        {
            std::cout << matrix[new_x][new_y] << std::endl;
        }
        else
        {
            exits++;
        }

        new_x = x - distance;
        new_y = y + distance;
        if (new_x < n && new_x >= 0 && new_y < m && new_y >= 0)
        {
            std::cout << matrix[new_x][new_y] << std::endl;
        }
        else
        {
            exits++;
        }

        new_x = x - distance;
        new_y = y - distance;
        if (new_x < n && new_x >= 0 && new_y < m && new_y >= 0)
        {
            std::cout << matrix[new_x][new_y] << std::endl;
        }
        else
        {
            exits++;
        }
    }

    return 0;
}
