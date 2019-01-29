#include <iostream>

// Changes the values inside the function but not in the main func.
// a and b are new variables that have the same value, but not the same address.
void swap_that_doesnt_work(int a, int b)
{
    int c = a;
    a = b;
    b = c;
    // Destroy all allocated resources (stack).
}

// Changes the values in the given addresses using pointers that 
// point to the addresses of a and b.
// Using the pointers as arguments we can use them to allocate
// dynamic memory.
void swap_that_works_1(int *a, int *b)
{
    int c = *a; // c is a value of a
    *a = *b;    // value of a is now b
    *b = c;     // value of b is not c which is a
    // Destroy all allocated resources (stack). 
}

// & is an address, which is also called a reference (we REFER to it using the its' address).
// The a and b arguments are also copies but they have the address of the variables declared in the
// main function.
// Using references as arguments we works directly with the address, but we cannot
// allocate dynamic memory.
void swap_that_works_2(int &a, int &b)
{
    int c = a;
    a = b;
    b = c;
    // Destroy all allocated resources (stack). 
}

int main()
{
    int a = 1, b = 2;

    swap_that_doesnt_work(a, b);
    std::cout << "Calling the swap that doesn't work func." << std::endl;
    std::cout << "a = " << a << " b = " << b << std::endl; 

    int *ptr_a = &a; // pointers point to the address, not the value.
    int *ptr_b = &b; // * dereferencing operation. ref -> point, deref -> get the value

    // * -> value, & -> address

    std::cout << "value of a = " << a << std::endl << "value of b = " << b << std::endl; 
    std::cout << "address of a = " << &a << std::endl << "address of b = " << &b << std::endl; 
    std::cout << "address of ptr_a = " << &ptr_a 
              << std::endl << "address of ptr_b = " << &ptr_b << std::endl;
    std::cout << "value of ptr_a = " << ptr_a
              << std::endl << "value of ptr_b = " << ptr_b << std::endl;
    std::cout << "value of *ptr_a = " << *ptr_a
              << std::endl << "value of *ptr_b = " << *ptr_b << std::endl;

    // Swap that really works v.1
    std::cout << "Swap that really works. v.1" << std::endl;
    std::cout << "Before a = " << a << std::endl << "Before b = " << b << std::endl;
    swap_that_works_1(&a, &b); 
    // swap_that_works_1(ptr_a, ptr_b); is practically the same
    std::cout << "After a = " << a << std::endl << "After b = " << b << std::endl;

    int c = 4;
    int d = -10;

    // Swap that really works v.2
    std::cout << "Swap that really works. v.2" << std::endl;
    std::cout << "Before c = " << c << std::endl << "Before d = " << d << std::endl;
    swap_that_works_2(c, d);
    std::cout << "After c = " << c << std::endl << "After d = " << d << std::endl;
    

    // All variables are destroyed (a, b, ptr_a, ptr_b, c, d).
    return 0;
}
