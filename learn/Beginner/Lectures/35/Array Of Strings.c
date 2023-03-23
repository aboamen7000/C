#include <stdio.h>
#include <string.h>
// array of string
int main(){

        char names[][15] = {
                "Ahmad",
                "Ali",
                "Mostafa",
                "Madoman",
                "Amr",
                "Mohamed"
        };

        strcpy(names[0], "IA");

        for(int i = 0; i <  (sizeof(names) / sizeof(names[0])) ; i++)
        {
                printf("%s\n", names[i]);
        }

        return 0;
}