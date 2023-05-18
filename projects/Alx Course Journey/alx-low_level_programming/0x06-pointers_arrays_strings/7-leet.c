#include "main.h"

/**
 * leet - encodes a string into 1337
 * @c: string to encode
 *
 * Return: address of c
 */
char *leet(char *c)
{
	int i, j;
	char one[] = "aAeEoOtTlL";
	char two[] = "4433007711";

	for (i = 0; *(c + i); i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (one[j] == c[i])
				c[i] = two[j];
		}
	}
	return (c);
}

