#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * _calloc - allocates memory for an array, using malloc
 * @nmemb: alloc array
 * @size: alloc of size
 * Return: 0 successfully array
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
char *type;
unsigned int first;
if (size == 0 || nmemb == 0)
{ return (NULL); }
type = malloc(size * nmemb);
if (type == NULL)
{ return (NULL); }
for (first = 0; first < (size * nmemb); first++)
{ type[first] = 0; }
return (type);
}
