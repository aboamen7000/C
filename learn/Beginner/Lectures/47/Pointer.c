#include <stdio.h>
#include <stdlib.h>

// Pointers:
// - Declare a pointer variable
// - Assign the address of a variable to a pointer
// - Dereference a pointer
// - Allocate memory dynamically using malloc()
// - Pass a pointer to a function

int plus(int *ptr){
    return (*ptr)++;
}

int main() {

        int *ptr0;
        // printf("The memory address of the ptr is %p\n", &ptr0);
        // This declares a pointer variable named ptr that points to an integer
        // ==========================
        // This assigns the address of the x variable to the pointer variable ptr. 
        // Now, ptr points to the memory location of x.
        int x1 = 8;
        int *ptr1 = &x1;
        // ==========================
        // This changes the value of the variable x to 30 
        // by dereferencing the pointer variable ptr and assigning it a new value.
        int x2 = 8;
        int *ptr2 = &x2;
        *ptr2 = 30;
        // ==========================
        // This dynamically allocates memory for an integer variable, 
        // assigns the address of the allocated memory to ptr, 
        // and then assigns the value 15 to the memory location pointed to by ptr.
        int *ptr3 = malloc(sizeof(int));
        *ptr3 = 15;
        // ==========================

        // This passes a pointer to the increment() function and increments
        // the value at the memory location pointed to by the pointer.
        // This changes the value of x to 12.

        int x3 = 11;
        plus(&x3);
        printf("the value of x3 is %d\n", x3);
        return 0;
}
