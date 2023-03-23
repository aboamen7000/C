#include <stdio.h>

double Calculating(double x)
{
//    double result = x + x;
//    return result;
   return x + x;
}


int main(){

   double resu =  Calculating(3.9);
   printf("The result come from function Calculating : %.1lf", resu);

   return 0;
}