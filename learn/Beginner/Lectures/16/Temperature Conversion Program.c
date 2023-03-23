#include <stdio.h>
#include <ctype.h>
int main(){

   char key; // f / c
   double temp;
   
   printf("\nPlease choose your temp operator (F/C): ");
   scanf("%c", &key);

   key = toupper(key);

   if (key == 'F')
   {
      // printf("%c temp using Fahrenheit",key);
      printf("Please enter the temp in Fahrenheit : ");
      scanf("%lf", &temp);
      // printf("%lf", temp);
      temp = ( (temp - 32) * 5 ) / 9; // converted the f to c
      printf("the temp in Celsius is : %.1lf", temp);
   }
   else if (key == 'C')
   {
      /* code */
      printf("Please enter the temp in Celsius : ");
      scanf("%lf", &temp);
      temp = ( temp * 9 / 5 ) + 32;// converted the c to f
      printf("the temp in Fahrenheit is : %.1lf", temp);
   }
   else{
      printf("%c Invalid operator",key);
   }
   
   

   return 0;
}