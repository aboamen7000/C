#include <stdio.h>
#include <stdlib.h>
// memory addresses:

int main() {

        int x = 15;
        // This creates an integer variable x and assigns the memory address where the value 15 is stored.
        // You can print the memory address using the %p format specifier:
        printf("The memory address of the x is %p\n", &x);
        // ==========================
        int *ptr;
        // create pointers, which are variables that store memory addresses
        printf("The memory address of the ptr is %p\n", &ptr);

        // This assigns the memory address of x to the pointer ptr. 

        ptr = &x;
        printf("The memory address stored in ptr is : %p\n", ptr);
        // ==========================

        // int test[5] = {1,2,3,4,5};
        // we can allocate memory dynamically using the malloc() function
        // This allocates memory for an integer array of size 3 and assigns the memory address of the first element
        int *string_array = malloc(3 * 4);
        printf("the moemory address of the first 3 element of string_array is %p\n", string_array);

        return 0;
}
