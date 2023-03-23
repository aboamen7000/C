#include <stdio.h>
// array   : a data structure that can store many values of same data type.
int main(){
    
    // int levels[] = {1,2,3,4,5,6,7,8,9,10,11};
    // printf("%i", levels[10]);

    int levels[10];
    levels[0] = 1;
    levels[1] = 2;
    //....
    //....
    levels[10] = 11;

    printf("%i", levels[10]);

    return 0;
}