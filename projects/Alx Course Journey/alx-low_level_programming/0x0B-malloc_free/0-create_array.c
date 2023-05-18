#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * create_array - creates an array of chars
 * @size: size of array,
 * @c: char array with
 * Return: 0 successfully array
 */
char *create_array(unsigned int size, char c)
{
char *type;
unsigned int index;
if (size == 0)
{return (NULL); }
type = malloc(sizeof(char) * size);
if (type == NULL)
{return (NULL); }
for (index = 0; index < size; index++)
{type[index] = c; }
return (type);
}

