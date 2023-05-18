#include <stdlib.h>
#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - function that searches for an integer
 * @array: ptr array
 * @size: size of @array
 * @cmp: ptr to function call to check index in array
 * Return: return -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
int index;
if (cmp == NULL || size <= 0 || array == NULL)
{
return (-1);
}
for (index = 0; index < size; index++)
{
if (cmp(array[index]) != 0)
{
return (index);
}
}
return (-1);
}

