#include <stdio.h>
#include <string.h>
// Swape Values of two Variables
int main(){

        // char X = 'X';
        // char Y = 'Y';

        // char Swap;

        // Swap = X;
        // X = Y;
        // Y = Swap;

        // printf("X = %c, Y = %c\n", X, Y);


        char X[15] = "Ahmad";
        char Y[15] = "Ali";
        char Swap[15];

        strcpy(Swap, X);
        strcpy(X, Y);
        strcpy(Y, Swap);

        printf("X = %s, Y = %s\n", X, Y);

        return 0;
}