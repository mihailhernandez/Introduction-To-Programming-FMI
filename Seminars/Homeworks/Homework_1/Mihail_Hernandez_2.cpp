#include <iostream>

int main()
{
    int n;

    std::cin >> n;

    for (int roof = 0; roof < n; roof++)
    {
        for (int front_spacing = n - 1 - roof; front_spacing > 0;
                 front_spacing--, std::cout << " ") {}
        std::cout << "/";
        for (int middle_spacing = 0; middle_spacing < 2 * roof;
            middle_spacing++, std::cout << " ") {}
        std::cout << "\\" << std::endl;
    }

    for (int roof = 0; roof < 2*n; roof++, std::cout << "-") {}
    std::cout << std::endl;

    for (int walls = 0; walls < n; walls++)
    {
        std::cout << "|";
        for (int middle_spacing = 0; middle_spacing < 2 * (n - 1);
                 middle_spacing++, std::cout << " ") {}
        std::cout << "|" << std::endl;
    }

    for (int ground = 0; ground < 2*n; ground++, std::cout << "=") {}
    std::cout << std::endl;

    return 0;
}
