#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * alloc_grid - function that returns a pointer
 * to a 2 dimensional array of integers
 * @width: width of array
 * @height: height of array
 * Return: 0 successfully
 */

int **alloc_grid(int width, int height)
{
int **type;
int index_1, index_2;
int words = width * height;
if (words <= 0)
{
return (NULL);
}
type = (int **)malloc(height * sizeof(int *));
if (type == NULL)
{
return (NULL);
}
for (index_1 = 0; index_1 < height; index_1++)
{
type[index_1] = (int *)malloc(sizeof(int) * width);
if (type[index_1] == NULL)
{
for (index_1--; index_1 >= 0; index_1--)
free(type[index_1]);
free(type);
return (NULL);
}
}
for (index_1 = 0; index_1 < height; index_1++)
{
for (index_2 = 0; index_2 < width; index_2++)
{
type[index_1][index_2] = 0;
}
}
return (type);
}

