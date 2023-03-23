#include <stdio.h>
#include <string.h>
    // while : repeat a section of code unlimit amount of times

    // \n new line , \0 remove the line
int main(){

    char name[30];

    printf("what is yourr name : ");

    fgets(name, 30, stdin);

    name[strlen(name)-1] = '\0';
    // printf("%s", name);
    // printf("%i", strlen(name));

    while(strlen(name) == 0)
    {
        printf("\nYou didnt enter the name .!!!");
        printf("\nwhat is your name : ");
        fgets(name, 30, stdin);
        name[strlen(name)-1] = '\0'; // delete last len which is the new line
    }
    printf("Hello, %s", name);
    

    return 0;
}