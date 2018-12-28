#include <iostream>
#define BUFFER 1000

bool contains(char sentence[], char sub[])
{
    for (char *s = sentence, *c = sub; *s && *c; s++)
    {
        if (*s == *c)
        {
            c++;
            if (!(*(++c)))
            {   
                return true;
            }
        }
        else
        {
            c = sub;
        }
    }
    return false;
}

int main()
{
    char sentence[BUFFER], sub[BUFFER];

    std::cin >> sentence >> sub;

    std::cout << std::boolalpha << contains(sentence, sub) << std::endl;

    return 0;
}
