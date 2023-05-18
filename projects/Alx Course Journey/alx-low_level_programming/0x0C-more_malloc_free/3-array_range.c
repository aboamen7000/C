#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * array_range - allocates memory for an array, using malloc
 * @min: min number
 * @max: max number
 * Return: 0 successfully array
 */
int *array_range(int min, int max)
{
int index = 0;
int *type;
if (max < min)
{ return (NULL); }
type = malloc((max - min + 1) * sizeof(int));
if (type == NULL)
{ return (NULL); }
for (; max >= min ; index++)
{type[index] = min;
min++; }
return (type);
}
