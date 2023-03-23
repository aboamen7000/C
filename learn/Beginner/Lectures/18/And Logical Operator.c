#include <stdio.h>
#include <stdbool.h>
// logical operators = 
//                      && And [it mean all conditions are true :::> as boolean as addiotion for more advance]
int main(){

   int age = 26;
   bool check = false;

   //==== AND
   if (age > 25 && age < 27 && check)
   {
        printf("let me guess you are 26 years.");
   }
   else
   {
        printf("you are %i", age);
   }
   return 0;
}