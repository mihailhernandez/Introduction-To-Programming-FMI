#include <iostream>

int main()
{
    int n, m, x;

    std::cin >> n >> m >> x;

    int matrix[n][m];
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            std::cin >> matrix[i][j]; 
        }
    }
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (x == matrix[i][j])
            {
                std::cout << i << ", " << j << std::endl;
            }
        }
    }

    return 0;
}
