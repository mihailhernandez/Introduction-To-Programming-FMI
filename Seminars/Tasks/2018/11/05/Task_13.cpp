#include <iostream>

/*
 * Да се въведе матрица от цели числа с n реда и m колони 
 * (1 <= n, m <= 1000) и да се изведе на конзолата сумата
 * и произведението на числата, всяко от които е между 1 и 10000.
 */
int main()
{
    int n, m;
    long long sum = 0;
    long long product = 1;

    std::cin >> n >> m;

    int matrix[n][m];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            std::cin >> matrix[i][j];
            sum += matrix[i][j];
            product *= matrix[i][j];
        }
    }

    std::cout << "Sum = " << sum << std::endl 
              << "Product = " << product << std::endl;
              
    return 0;
}
