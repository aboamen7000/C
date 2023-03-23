#include <stdio.h>
#include <string.h>

// Structs : collection of member variables, 
// also can be different data types, under one name in a block of memory

struct Informations
{       
        char name[20];
        int age;
};


int main(){

        struct Informations person1;
        struct Informations person2;

        //person1
        strcpy(person1.name, "IA");
        person1.age = 15;

        //person2
        strcpy(person2.name, "Ahmad");
        person1.age = 25;


        printf("%s\n", person1.name);
        printf("%d\n", person1.age);

        printf("%s\n", person1.name);
        printf("%d\n", person1.age); 

        return 0;
}