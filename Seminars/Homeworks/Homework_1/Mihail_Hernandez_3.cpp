#include <iostream>

int main()
{
    int n;
    bool *array;

    std::cin >> n;

    array = new bool[n];
    
    for (int i = 0; i < n; i++)
    {
        if (i == 0 || i == 1)
        {
            array[i] = true;
        }
        else 
        {
            for (int j = i + i; j < n; j += i)
            {
                array[j] = true;
            }
        }
        std::cout << i << " - " 
        << ((!array[i]) ? "Prime" : "Not prime")
        << std::endl;
    }

    return 0;
}
