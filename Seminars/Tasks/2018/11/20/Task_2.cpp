#include <iostream>

int main()
{
    int n, m;
    int *array;

    std::cin >> n >> m;

    array = new int[n];

    for (int i = 0; i < n; i++)
    {
        std::cin >> array[i];
    }

    m = m % n;

    for (int i = 0, temp = 0; i < m; i++)
    {
        temp = array[i];
        array[i] = array[n - m + i];
        array[n - m + i] = temp;
    }

    for (int i = m, temp = 0; i < n - m; i++)
    {
        temp = array[i];
        array[i] = array[i + m];
        array[i + m] = temp;
    }

    for (int i = 0; i < n; i++)
    {
        std::cout << array[i] << " ";
    }

    std::cout << std::endl;

    return 0;
}
