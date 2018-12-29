#include <iostream>
#define SIZE 100

int pos_tracker()
{
    static int pos = 0;
    return pos++;
}

int recursive_find(char arr[], char letter, int time)
{
    pos_tracker();
    char *ptr = arr;
    if (*ptr == letter)
        time--;
    if (time == 0)
        return pos_tracker() - 1;
    if (*(++ptr))
        return recursive_find(ptr, letter, time);
    return -1;
}

int main()
{
    int time;
    char letter, arr[SIZE];
    
    std::cin >> arr >> letter >> time; 

    std::cout << recursive_find(arr, letter, time) << std::endl;
    
    return 0;
}
