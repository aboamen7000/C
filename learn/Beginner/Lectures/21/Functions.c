#include <stdio.h>


void Calling()
{
   printf("my name is ia");
   printf("\nim 10 years.");
   printf("\nheight : 150 cm");
}

int main(){

   Calling();
   printf("\n======1\n");
   Calling();
   printf("\n======2\n");
   Calling();
   printf("\n======3\n");
   return 0;
}