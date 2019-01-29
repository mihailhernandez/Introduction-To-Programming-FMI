#include <iostream>
#include <math.h>

bool is_point_in_task_1_1(int x, int y)
{
    if (x >= 0 && x <= 2 && y <= 0 && y >= -2)
        return true;
    return hypot(x, y) <= 1;
}

bool is_point_in_task_1_2(int x, int y)
{
    if (hypot(abs(x), abs(2 - y)) < 1)
        return false;
    if (hypot(abs(2 - x), abs(2 - y)) <= 2)
        return true;
    return false;
}

double formula_1(double a, double b, double c, double d, double e, double f, double h)
{
    return (a / (b + (c / (d + (e / (f + h))))));
}

double formula_2()
{
    return (cbrt(3) + sqrt(5) + pow(19, 1 / 5)) /
           (cbrt(7) + sqrt(2) + pow(13, 1 / 4));
}

double formula_3(double x)
{
    return sin(2 * x + 4) 
                + cos(x - 1) 
                - pow(tan(pow(x, 2.0)) + (1 / tan(pow(x, 3.0))), 2.0)
                / log(abs(1 + pow(x, 2.0)));
}

double formula_4(double x, double y)
{
    return pow(log(abs(pow(x, 2.0) - 2)) / (log(4) + exp((x - y) / 2)), 2.0)
           / pow(log(2 + exp((x + y) / 2)), 3.0);
}

long long factoriel(int n)
{
    long long fact = 1;
    for (int i = 2; i <= n; i++)
        fact *= i;
    return fact;
}

double find_sum_1(int n)
{
    double sum = 0;
    for (int i = 1; i <= n; i++)
        sum += (2 * i) / ((2 * i + 1) * double(factoriel(2 * i + 2)));
    return sum;
}

long long factoriel_range(int start, int end)
{
    long long fact = 1;
    for (int i = start; i <= end; i++)
        fact *= i;
    return fact;
}

double find_sum_2(int n)
{
    long long sum = 0;
    for (int i = 1; i <=n; i++)
        sum += factoriel_range(i, i*2);
    return sum;
}

void print(char* matrix[50], int size)
{
    for (int i = 0; i < size; 
        std::cout << "str " << i << ": " 
                  << matrix[i++] << std::endl);
}

int strcmp(char *a, char *b)
{
    for (; *a && *b; a++, b++)
    {
        if (*a < *b || (!(*(a + 1)) && *(b + 1)))
            return -1;
        if (*a > *b || (*(a + 1) && !(*b + 1)))
            return 1;
    }
    return 0;
}

char** merge(char** matrix, int size)
{
    char** new_matrix = new char*[size];
    for (int index = 0, left = 0, right = size - 1; left != right;)
    {
        int res = strcmp(matrix[left], matrix[right]);
        if (res == -1)
        {
            new_matrix[index++] = matrix[right];
            right--;
        }
        else
        {
            new_matrix[index++] = matrix[left];
            left++;
        }
        if (left == right)
            new_matrix[index++] = matrix[left];
    }
    return new_matrix;
}

bool monotonic_inc_dec(int *arr, int k, int n)
{
    int size = n * k;
    bool increasing = true;
    for (int index = 0; index < size - 1; index++)
    {
        if ((increasing && arr[index] >= arr[index + 1])
            || (!increasing && arr[index] <= arr[index + 1]))
            return false;
        if ((index - 1) % k == 0)
        {
            increasing = !increasing;
            index++;
        }
    }
    return true;
}

int find_pos(int *arr, int size, int a, int index)
{
    if (index == size || a <= arr[index])
        return index;
    return find_pos(arr, size, a, index + 1);
}

bool is_palindrome(const char *str, int i, int j)
{
    for (; i < j; i++, j--)
        if (str[i] != str[j])
            return false;
    return true;
}

double divideBy2(double a)
{
    return a / 2;
}

double multBy2(double a)
{
    return a * 2;
}

void print_real_matrix(double* matrix[4], int size)
{
    for (int i = 0; i < size; i++, std::cout << std::endl)
        for (int j = 0; j < size; j++)
            std::cout << matrix[i][j] << " ";
}

void recursive_matrix_transformation(double* matrix[4], int size, int time, double(*f)(double), double(*g)(double))
{
    if (size == 0)
        return;
    for (int row = 0; row < size - 1; row++)
        matrix[row][size - 1] = g(matrix[row][size - 1]);
    for (int row = size - 1; row < size + time; row++)
        matrix[row][size - 1] = f(matrix[row][size - 1]);
    recursive_matrix_transformation(matrix, size - 1, time + 1, f, g);
}

int main()
{
    // Task 1

    std::cout << std::boolalpha 
              << is_point_in_task_1_1(1.4, -1.4) << std::endl
              << is_point_in_task_1_1(1.5, 2) << std::endl;

    std::cout << std::boolalpha 
              << is_point_in_task_1_2(0.5, 2) << std::endl
              << is_point_in_task_1_2(3, 2) << std::endl;

    std::cout << formula_1(1, 1, 1, 1, 1, 1, 1) << std::endl;
    std::cout << formula_1(1, 1, 0, 0, 1, 0.5, 0.5) << std::endl;
    
    std::cout << formula_2() << std::endl; 

    std::cout << formula_3(1) << std::endl; 

    std::cout << formula_4(1, 1) << std::endl; 

    // Task 2

    std::cout << find_sum_1(1) << std::endl;
    std::cout << find_sum_1(2) << std::endl;
    std::cout << find_sum_1(3) << std::endl;

    // Task 3

    std::cout << find_sum_2(2) << std::endl;
    std::cout << find_sum_2(3) << std::endl;
    std::cout << find_sum_2(4) << std::endl;

    // Sequences
    // Task 1

    int size = 6;
    char* matrix[size] = {"z", "x", "y", "1", "2", "3"};

    print(matrix, size);

    char** new_matrix = merge(matrix, size);

    print(new_matrix, size);

    delete[] new_matrix;

    // Task 2

    int k = 3, n = 3;

    int arr[n * k] = {1, 2, 3, 2, 1, 0, 1, 2, 3};

    std::cout << monotonic_inc_dec(arr, k, n) << std::endl;  

    // Recursion 
    // Task 1

    int array[5] = {1, 2, 3, 4, 5};


    std::cout << find_pos(array, 5, 1, 0) << std::endl;
    std::cout << find_pos(array, 5, -1, 0) << std::endl;
    std::cout << find_pos(array, 5, 3, 0) << std::endl;
    std::cout << find_pos(array, 5, 6, 0) << std::endl;

    // Task 2

    char str[] = "abccba";

    std::cout << std::boolalpha << is_palindrome(str, 0, 5) << std::endl;
    std::cout << std::boolalpha << is_palindrome(str, 0, 4) << std::endl;

    // Task 3

    double* real_matrix[4];

    for (int i = 0; i < 4; i++) 
    {
        real_matrix[i] = new double[4];
        for (int j = 0; j < 4; j++)
            real_matrix[i][j] = i + 1;
    }

    print_real_matrix(real_matrix, 4);

    recursive_matrix_transformation(real_matrix, 4, 0, divideBy2, multBy2);
    
    print_real_matrix(real_matrix, 4);

    return 0;
}
