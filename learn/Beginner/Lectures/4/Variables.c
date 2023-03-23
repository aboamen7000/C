// Variables : allocated space in memory to store a value.
//             we refer to a variable's name to access the stored value.
//             that variable now behaves as if it was the value it contains.
//             but we need to declare what type of data we are storing.
#include <stdio.h>

int main(){
    
    int x; //declaration
    x = 150; //initializtion
    int y = 200; // declaration + initializtion

    //Example
    int my_age = 22; //Integer> %d (Decimal number)
    float my_height = 180.0; // Float Decimal partition number %f (Float number)
    // C not object-oriented language : no string data type, we need series of characters
    char name[] = "Ibrahim"; // now this consider as array of characters %s (String  Values)
    char gender[] = "M"; // now this consider as array of characters %c (char number number)


    printf("my age is : %d\n",my_age);
    printf("my height is : %f\n",my_height);

    printf("my name is : %s\n",name);
    printf("my gender is : %c",gender[0]);
    return 0;
}