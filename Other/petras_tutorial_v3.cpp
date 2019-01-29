#include <iostream>

// const char a = 'a'; -> we have a constant character, invalid -> a = 'b';
// const char *s = "abc"; -> we have a constant char pointer, invalid s[0] = 'b';
// When we have a const char * we can't modify its content (value).

// String length by using indexes with while
int strlen_index_v1(const char *str)
{
    int len = 0;
    while (str[len] != '\0')
        len++;
    return len;
}

// String length by using indexes with for
int strlen_index_v2(const char *str)
{
    int len = 0;
    for (int i = 0; str[i] != '\0'; i++)
        len++;
    return len;
}

// String length by using pointers
int strlen_pointer_v1(const char *str)
{
    int len = 0;
    // if (*str) is the same as if (*str != '\0')
    // if (str[index] != '\0') is the same as if (str[index])
    // we use the shorter syntax
    while (*str)
    {
        str++;
        len++;
    }
    return len;
}

// String length by using pointers
int strlen_pointer_v2(const char *str)
{
    int len = 0;
    // if (*str) is the same as if (*str != '\0')
    // we use the shorter syntax
    for (; *str; str++, len++);
    return len;
}

// String length by using pointers
// BSD implementation
// Won't work for anything except chars, because the 
// address arithmetics won't work with other types
// with size different form 1(byte).
int strlen_pointer_v3(const char *str)
{
    const char *s = str;
    while (*s)
        s++;
    return s - str;
}

int max_common_prefix_indexes(const char *str1, const char *str2)
{
    int index = 0;
    for (; str1[index] && str2[index] && (str1[index] == str2[index]); index++);
    return index;
}

int max_common_prefix_pointers(const char *str1, const char *str2)
{
    int index = 0;
    for (; *str1 && *str2 && (*str1 == *str2); str1++, str2++, index++);
    return index;
}

// str1 : This is Misho123.
// str2 : This is Petra.
// Algorithm:
// 1. We want the last index where the two strings are still the same.
// (change).
// index = 0, T = T
// index = 1, h = h
// index = 2, i = i
// .........
// index = 7, M != P
// --> return 7
// Problems
// 1. The two strings have different length.
//   solution: check for the length.
//          1.1 strlen        -> iteration by index 
//          1.2 char pointer  -> iteration by pointer 
// 2. When do we end?
//   solution: 
//          2.1 when we meet the first '\0'
//          2.2 when the two string differ
int main()
{   
    char str1[] = "This is Petra.123";
    char str2[] = "This is Petra.";

    std::cout << max_common_prefix_indexes(str1, str2) << std::endl;
    std::cout << max_common_prefix_pointers(str1, str2) << std::endl;
    
    return 0;
}
