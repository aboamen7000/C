#include <stdio.h>
// Function Prototype : a function that flag an error if argument are missing

void my_info (char name[], int age);

int main(){

   char name[] = "IA";
   int age = 18;
   my_info(name, age);
   return 0;
}


void my_info(char name[], int age){
    int my_age = age;
    printf("my name is : %s", name);
    printf("\nmy age is : %i", age);
}