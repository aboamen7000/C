
// constant : fixed value that cannot be altered by the program during its excution, for security purpose.

#include <stdio.h>
int main(){

    const int unchangeable = 10;

    // unchangeable = 100;
    
    printf("Static value : %i", unchangeable);
    return 0;
}