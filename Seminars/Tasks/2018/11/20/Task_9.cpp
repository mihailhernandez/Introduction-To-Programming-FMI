#include <iostream>
#include <math.h>

int main()
{
    int a, b;
    int length = 1;
    int concat_number = 0;
    int spacer = pow(10, length);

    std::cin >> a >> b;

    for (int number = 1; concat_number < b; number++)
    {
        if (number % spacer == 0) {
            spacer = pow(10, ++length);
        }
        concat_number = number * (1 + spacer); 
        if (concat_number < a || concat_number > b) {
            continue;
        }
        std::cout << concat_number << std::endl;
    }

    return 0;
}
