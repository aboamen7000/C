#include "main.h"

/**
 * _memset - Returns a pointer to the memory area @s
 * with the constant byte @b .
 *
 * @s : about pointer using char data type [constant byte @b] .
 *
 * @b : input of char to fill s pointer [memory area pointer] .
 *
 * @n : unsigned int var [bytes of the memory area] by a @n var .
 *
 * Return: a pointer to the memory area @s .
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int positive = 0;

	while (positive < n)
	{
	s[positive] = b;
	positive++;
	}

	return (s);
}
