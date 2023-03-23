#include <stdio.h>
// switch : using many if statments (else if) 
int main(){

    int age;

    printf("\nEnter age: ");
    scanf("%d", &age);

    switch(age){
        case 1:
         printf("You are now into legal age!!");
         break;
        case 2:
         printf("You are now into legal age!!");
         break;
        case 3:
         printf("You are now into legal age!!");
         break;

        default:
         printf("enter valid numbers [1,2,3]!!");
         break;    

    }
  

    return 0;
}