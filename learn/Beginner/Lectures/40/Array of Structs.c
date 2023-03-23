#include <stdio.h>


// Typedef : keyword is used to define a new type based on an existing data type, "nickname" 

// Array of Structs


typedef struct
{       
        char name[30];
        int age;
        double height;
        double weight;
        /* data */
}Person;


int main(){

       Person person[3] = {
                {"IA",25,180.0,66},
                {"Ahmad",20,170.0,55},
                {"Omar",19,177.0,65}
        };

        int size_of_the_list = sizeof(person) / sizeof(Person);


        for (int i = 0; i < size_of_the_list; i++)
        {
                /* code */
                printf("Person : %i\n", i + 1);
                printf("Name : %s\n",person[i].name);
                printf("Age : %d\n",person[i].age);
                printf("Hieght : %.1lf\n",person[i].height);
                printf("weight : %.1lf\n",person[i].weight);
                printf("\n");
        }
        



        return 0;
}