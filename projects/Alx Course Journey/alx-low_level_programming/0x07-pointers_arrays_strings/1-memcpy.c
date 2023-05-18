#include "main.h"

/**
 * _memcpy - function copies @n bytes from memory area @src
 * to memory area @dest .
 *
 * @n : function copies .
 *
 * @src : bytes from memory area .
 *
 * @dest : to memory area .
 *
 * Return: a pointer to @dest .
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	/** declare a unsigned [same signedness] int type as positive number */
	unsigned int positive = 0;
	/** while looping into var array */
	while (positive < n)
	{
	dest[positive] = src[positive];
	positive++;
	}
	/** Returns a pointer to the memory area dest */
	return (dest);
}
