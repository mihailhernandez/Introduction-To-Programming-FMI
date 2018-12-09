#include <iostream>

char *reverse(char *);

int main()
{
    char *sentence;
    int buffer_capacity;

    std::cin >> buffer_capacity;

    sentence = new char[buffer_capacity];

    std::cin >> sentence;
    
    sentence = reverse(sentence);

    std::cout << sentence << std::endl;

    return 0;
}

char *reverse(char *sentence)
{
    int strlen = 0;

    for (char *s = sentence; *s; s++, strlen++) {}

    for (int index = 0; index < strlen / 2; index++)
    {
        char temp = sentence[index];
        sentence[index] = sentence[strlen - index - 1];
        sentence[strlen - index - 1] = temp;
    }

    return sentence;
}
