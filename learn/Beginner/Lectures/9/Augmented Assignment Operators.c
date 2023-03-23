    // Augmented Assignment Operators : used to replace a statment where an operator
    //                                  takes a var as one of its arguments, then assign the result back
    //                                  to the same variable.
    //                                  a = a + 1 or using (Augmented Assignment Operators) by a+=1 
    //  
#include <stdio.h>
int main(){


    int a = 5;

    a %= 1;
    // a = a * 1;

    printf("The result is : %d", a);

    return 0;
}