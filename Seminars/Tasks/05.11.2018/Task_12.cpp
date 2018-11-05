#include <iostream>

/*
 * Да се въведе матрица от цели числа с n реда и m 
 * колони и да се изведат елементите по колони.
 */
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
 
    for (int j = 0; j < m; j++)
    {
        for (int i = 0; i < n; i++)
        {
            std::cout << matrix[i][j] << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}
