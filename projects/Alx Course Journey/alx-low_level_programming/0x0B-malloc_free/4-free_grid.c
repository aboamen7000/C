#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * free_grid - function that frees a 2 dimensional grid previously
 * created by your alloc_grid function
 * @grid: grid input
 * @height: height input
 * Return: 0 successfully
 */

void free_grid(int **grid, int height)
{
int index = 0;
if (height != 0 || grid != NULL)
{
for (; index < height; index++)
{
free(grid[index]);
}
free(grid);
}
}
