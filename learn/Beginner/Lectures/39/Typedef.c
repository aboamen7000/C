#include <stdio.h>


// Typedef : keyword is used to define a new type based on an existing data type, "nickname" 

// define a new type base as int
// typedef int total_result;

// int main(){

//         total_result x = 5;
//         total_result y = 6;

//         printf("%d\n", x);
//         printf("%d", y);

//         return 0;
// }
//================ ====================

// Define a new type based on a struct
// using the typedef, "nickname" 

typedef struct 
{
       char name[20];
       int age;
       double height;
       double weight;
}Person;

int main() {

       Person person1 =  {
        "IA",
        25,
        180.0,
        65
       };


        printf("My name is : %s\n", person1.name);
        printf("My age is : %d\n", person1.age);
        printf("My height is : %.1lf\n", person1.height);
        printf("My weight is : %.1lf", person1.weight);

        return 0;
}
