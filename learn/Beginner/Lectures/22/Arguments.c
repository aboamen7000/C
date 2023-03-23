#include <stdio.h>


void Calling(char name, int age, float height)
{
   printf("my name is %s", name);
   printf("\nim %i years.");
   printf("\nheight : %f cm");
}

int main(){
   char name[] = "IA";
   int age = 21;
   float height = 180.0;
   Calling(name, age, height);
   return 0;
}