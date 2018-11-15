#include <iostream>

int main()
{
    int n, m;

    std::cin >> n >> m;

    int matrix[n][m];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            std::cin >> matrix[i][j]; 
        }
    }

    for (int j = 0, sum = 0; j < m; j++, sum = 0)
    {
        for (int i = 0; i < n; i++)
        {
            sum += matrix[i][j]; 
        }
        std::cout << sum << std::endl;
    }

    return 0;
}
