#include "main.h"
#include <stdio.h>

/**
* print_diagsums - print sums of diagonals in matrix.
*
* @a: pointer to start of matrix .
*
* @size: size of matrix .
*
* Return: null [nothing]
*/
void print_diagsums(int *a, int size)
{

int row, index;
int var1 = 0;
int var2 = 0;

/** for loop for first sum */
for (row = 0; row < size; row++)
{
index = (row * size) + row;
var1 += a[index];
}

/** for loop for second sum */
for (row = 1; row <= size; row++)
{
index = (row * size) - row;
var2 += a[index];
}
printf("%d, %d\n", var1, var2);
}
