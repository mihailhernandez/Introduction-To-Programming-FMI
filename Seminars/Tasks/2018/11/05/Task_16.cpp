#include <iostream>

/*
 * От конзолата се въвежда матрица N x N и число M. 
 * Да се повдигне матрицата на степен M и да се изведе на екрана.
 */
int main()
{
    int n, m;

    std::cin >> n >> m;
 
    int matrix[n][n], t_matrix[n][n], temp[n][n];
              
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            std::cin >> matrix[i][j];
            t_matrix[i][j] = matrix[i][j];
        }
    }

    for (int power = 1; power < m; power++)
    {
        for (int i = 0; i < n; i++)
        {
            for (int sum = 0, j = 0; j < n; j++, sum = 0)
            {
                for (int k = 0, z = 0; k < n; k++, z++)
                {
                    sum += ((power != 1) 
                           ? matrix[i][k] : t_matrix[i][k])
                           * t_matrix[z][j];   
                }
                temp[i][j] = sum;
            }
        }
 
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                matrix[i][j] = temp[i][j];
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            std::cout << matrix[i][j] << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}
