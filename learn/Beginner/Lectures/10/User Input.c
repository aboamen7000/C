#include <stdio.h>
#include <string.h>
int main(){

    char name[25]; //bytes
    
    int age;

    printf("\nwhat is your name : ");
    // scanf("%s", &name);
    fgets(name, 25, stdin); 
    name[strlen(name)-1] = '\0';

    printf("how old are u : ");
    scanf("%d",&age);
    
    printf("\nyour name is : %s, how are you", name);
    printf("\nYou are now : %d Years old", age);

    return 0;
}