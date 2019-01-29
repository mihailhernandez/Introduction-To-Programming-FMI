#include <iostream>

// PREDICATE
// if a > b then we can increase
bool increasing(int a, int b)
{
    return a > b;
}

// PREDICATE
// if a < b then we can decrease
bool decreasing(int a, int b)
{
    return a < b;
}

// Swap that works.
void swap(int *a, int *b)
{
    int c = *a;
    *a = *b;
    *b = c;
}

// Return a new copied array (dynamic) from a given one, and its size.
int* copy_array(int *array, int size)
{
    // We get our memory from the HEAP.
    // So when we exit the function we have the memory still there.
    int *new_array = new int[size];
    for (int i = 0; i < size; new_array[i] = array[i], i++);
    return new_array;
}

// Print int array given its size
void print(int *array, int size)
{
    for (int i = 0; i < size; std::cout << array[i++] << " ");
    std::cout << std::endl;
}

// When we have a function argument that is [] (array)
// The C++ compiler automatically translates it to *.
// The * points to the first element of the array.
void bubble_sort_array(int *array, int size, bool (*sort_type)(int, int))
{
    for (int i = 0; i < size - 1; i++)
        for (int j = i + 1; j < size; j++)
            if (sort_type(array[i], array[j]))
                swap(&array[i], &array[j]);
}

// This bubble sort, sorts a new dynamic array and 
// returns it.
int* bubble_sort_new_array(int *array, int size, bool (*sort_type)(int, int))
{
    int *new_array = copy_array(array, size);
    bubble_sort_array(new_array, size, sort_type);
    return new_array;
}

int main()
{
    // shuffled array from 1 to 10 
    int array[10] = {2, 9, 7, 8, 6, 4, 5, 3, 10, 1};
    int *copied_array = copy_array(array, 10);

    // print original array
    std::cout << "original array - > ";
    print(array, 10);

    // print the copied array
    std::cout << "copied array - > ";
    print(copied_array, 10);

    // sort it 
    bubble_sort_array(array, 10, increasing);

    // print original array again, now sorted
    std::cout << "original sorted array - > ";
    print(array, 10);

    // print copied array
    std::cout << "copied array - > ";
    print(copied_array, 10);
    // The copied array stays the same because its another part
    // of the memory that we have not sorted yet.

    // We have created a new dynamic array that is sorted, using
    // the copied one that we previously saw was still shuffled.
    int *new_array = bubble_sort_new_array(copied_array, 10, decreasing);

    // print new sorted array
    std::cout << "new sorted array -> ";
    print(new_array, 10);

    // ALMOST FORGOT
    // DELETE MEMORY
    delete[] new_array;
    delete[] copied_array;

    return 0;
}
