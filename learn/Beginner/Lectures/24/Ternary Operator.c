#include <stdio.h>
// Ternary operator : testCondition ? expression1 : expression 2;


int Max_Value(int x, int y)
{
    // if (x > y)
    // {
    //     /* code */
    //     return x;
    // }
    
    //     if (y > x)
    // {
    //     /* code */
    //     return y;
    // }

    return (x > y) ? x : y;
}

int main(){

   int result =  Max_Value(15,8);
  
   printf("The Result is : %i", result);
   return 0;
}