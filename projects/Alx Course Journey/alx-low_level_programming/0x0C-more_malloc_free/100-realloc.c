#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to the memory
 * @old_size: the old size
 * @new_size: the new size
 * Return: 0 successfully array
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
int index = 0;
char *type;
int fetcher = new_size;
char *type_prev = ptr;

if (ptr == NULL)
{ type = malloc(new_size);
return (type); }
else if (new_size == 0)
{ free(ptr);
return (NULL); }
else if (new_size == old_size)
{ return (ptr); }
type = malloc(new_size);
if (type == NULL)
{ return (NULL); }
if (old_size < new_size)
{ fetcher = old_size; }
for (; fetcher > index ; index++)
{ type[index] = type_prev[index]; }
free(ptr);
return (type);
}
