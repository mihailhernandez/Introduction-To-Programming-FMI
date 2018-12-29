#include <iostream>
#define SIZE 100

int strlen(char arr[])
{
    int len = 0;
    for (char *s = arr; *s; s++, len++);
    return len;
}

bool is_palindrome(char arr[])
{
    for (int i = 0, len = strlen(arr); i < len / 2; i++)
        if (arr[i] != arr[len - 1 - i])
            return false;
    return true;
}

bool filter(char arr[])
{
    return strlen(arr) % 2 || !is_palindrome ? false : true;
}

char most_common_letter(char arr[])
{
    char most_seen = arr[0];
    int most = 0;
    for (int i = 0, current = 0; i < strlen(arr) / 2; i++, current = 0)
    {
        for (int j = i + 1; j < strlen(arr) / 2; j++)
            if (arr[i] == arr[j])
                current++;
        most_seen = (most < current)
            ? arr[i]
            : (current == most)
                ? (most_seen > arr[i])
                    ? arr[i]
                    : most_seen
                : most_seen;
    }
    return most_seen;
}

void print_most_common_letters(char matrix[][SIZE],
                               int size,
                               bool (*ptr)(char[]))
{
    for (int i = 0; i < size; i++)
        if (ptr(matrix[i]))
            std::cout << most_common_letter(matrix[i]) << " ";
   std::cout << std::endl;
}

int main()
{
    int lines;
    char matrix[SIZE][SIZE];

    std::cin >> lines;

    for (int i = 0; i < lines; i++)
        std::cin >> matrix[i];

    print_most_common_letters(matrix, lines, filter);

    return 0;
}
