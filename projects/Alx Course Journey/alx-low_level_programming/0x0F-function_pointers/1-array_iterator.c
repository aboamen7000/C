#include <stdlib.h>
#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - function that executes a function given as
 * a parameter on each element of an array
 * @array: array
 * @size: size
 * @action: ptr to function
 * Return: 0 successfully
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t size_tt;

if (action && array)
{
size_tt = 0;
while (size_tt < size)
{
action(array[size_tt]);
size_tt++;
}
}
}

