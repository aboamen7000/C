#include <stdio.h>
// 2D Array   : an array, each element is an entire array, can use grid, table of data.
int main(){
   
        int matrix_numbers[3][4] = { 
                {1,2,3,4},
                {5,6,7,8},
                {9,10,11,12}
        };

//    int matrix_numbers[2][3];

//    matrix_numbers[0][0] = 1;
//    matrix_numbers[0][1] = 2;
//    matrix_numbers[0][2] = 3;
//    matrix_numbers[1][0] = 4;
//    matrix_numbers[1][1] = 5;
//    matrix_numbers[1][2] = 6;

//    printf("Result : %d",matrix_numbers[1][2]);


        int rows = sizeof(matrix_numbers) / sizeof(matrix_numbers[0]);
        int columns = sizeof(matrix_numbers[0]) / sizeof(matrix_numbers[0][0]);

        printf("Rows : %d\n", rows);
        printf("Columns : %d\n", columns);


        for(int row = 0; row < rows; ++row){

                for(int column = 0; column < columns; ++column){
                        printf("%d\t", matrix_numbers[row][column]);
                } 
                printf("\n");
        }
        return 0;
}