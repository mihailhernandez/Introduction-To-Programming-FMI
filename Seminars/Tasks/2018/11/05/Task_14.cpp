#include <iostream>

/*
 * Да се въведе матрица от реални числа с n реда и m колони и да се 
 * запишат в масив за всеки ред сумата на елементите ако редът е 
 * четен и произведението на елементите ако редът е нечетен.
 */
int main()
{
    int n, m;
    long long sum = 0;
    long long product = 1;

    std::cin >> n >> m;

    int matrix[n][m];
    int sum_product_of_rows[n];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            std::cin >> matrix[i][j];
            if ((i + 1) % 2 == 0)
            {
                sum += matrix[i][j];
            }
            else 
            {
                product *= matrix[i][j];
            }
        }
        sum_product_of_rows[i] = ((i + 1) % 2 == 0) ? sum : product;
        sum = 0;
        product = 1;
    }

    for (int i = 0; i < n; i++)
    {
        std::cout << (((i + 1) % 2 == 0) ? "Sum    " : "Product")
                  << " of row " << i + 1 << " is "
                  << sum_product_of_rows[i] << std::endl;
    }
              
    return 0;
}
