#include <iostream>

int main()
{
    int n;
    int product = 1;
    int magic_product = product;

    std::cin >> n;

    int matrix[n][n];

    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            std::cin >> matrix[i][j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        magic_product *= matrix[i][i];
    }

    for (int i = 0; i < n; i++)
    {
        product *= matrix[i][n - i - 1];
    }

    if (product != magic_product)
    {
        std::cout << "No" << std::endl;
        return 0;
    }

    product = 1;
    
    for (int i = 0, secondary_product = 1; i < n;
         i++, secondary_product = 1, product = 1)
    {
        for (int j = 0; j < n; j++)
        {
            product *= matrix[i][j];
            secondary_product *= matrix[j][i];
        }
        if (product != magic_product || 
            secondary_product != magic_product)
        {
            std::cout << "No" << std::endl;
            return 0;
        }
    }

    std::cout << "Yes" << std::endl;

    return 0;
}
