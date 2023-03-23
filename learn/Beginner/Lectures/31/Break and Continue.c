#include <stdio.h>
// nested loop : a loop inside of another loop
int main(){
    int rows;
    int cols;
    char symbol;

    printf("how many rows : ");
    scanf("%d", &rows);

    printf("how many columns : ");
    scanf("%d", &cols);

    fflush(stdin); // clean for the new lines. and trash symbols... etc

    printf("write the symbol : ");
    scanf("%c", &symbol);


    for(int row = 1; row <= rows; ++row){

        for(int column = 1; column <= cols; ++column){
            printf("%c", symbol);
        }

        printf("\n");
    }

    return 0;
}