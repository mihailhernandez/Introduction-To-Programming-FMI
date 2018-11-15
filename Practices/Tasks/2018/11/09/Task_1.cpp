#include <iostream>

int main()
{
    int n, m;

    std::cin >> n >> m;

    double matrix[n][m];

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
            std::cout << matrix[i][j] << " "; 
        }
        std::cout << std::endl;
    }

    return 0;
}
