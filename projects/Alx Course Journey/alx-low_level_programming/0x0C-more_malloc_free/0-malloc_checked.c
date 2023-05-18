#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * malloc_checked - allocates memory using malloc
 * @b: alloc memory,
 * Return: 0 successfully array
 */
void *malloc_checked(unsigned int b)
{
void *memory_return;
memory_return = malloc(b);
((memory_return == NULL) ? exit(98) : (void) 0);
return (memory_return);
}

