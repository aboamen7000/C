#include <stdio.h>
int main(){
    
   int my_age;

   printf("\nPlease enter your age : ");
   scanf("%d", &my_age);


   if (my_age >= 18)
   {
    /* code */
    printf("You are now into the legal age !!");
   }
   else if (my_age == 0)
   {
    printf("you were just born !!");
   }
   else if (my_age < 0)
   {
    /* code */
    printf("you haven't been born yet !! !!");
   }
   
   
   else
   {
    printf("You are too young to being into the legal age?");
   }
   

   return 0;
}