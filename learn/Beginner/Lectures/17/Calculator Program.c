#include <stdio.h>
// Calculator Program
int main(){

   char Operator; // Operator Syntax [ * / - +]

   double Num_1;
   double Num_2;

   double Result;

   printf("\nFirst Number : ");
   scanf("%lf", &Num_1); 

   printf("\nPlease Enter Operator Syntax [+ - / *] : ");
   scanf("%s", &Operator);

   printf("\nSecond Number : ");
   scanf("%lf", &Num_2); 


   switch (Operator)
   {
   case '+':
    Result = Num_1 + Num_2;
    printf("\nThe Result is : %.1lf", Result);
    break;

    case '-':
    Result = Num_1 - Num_2;
    printf("\nThe Result is : %.1lf", Result);
    break;

   case '*':
    Result = Num_1 * Num_2;
    printf("\nThe Result is : %.1lf", Result);
    break;

   case '/':
    Result = Num_1 / Num_2;
    printf("\nThe Result is : %.1lf", Result);
    break;

   default:
    printf("%c Invalid Syntax Operator ...!", Operator);
    break;
   }

   return 0;
}