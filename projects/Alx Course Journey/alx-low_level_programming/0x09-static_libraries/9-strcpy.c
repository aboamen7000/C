#include "main.h"

/**
 * _strcpy - copy the string pointed to by pathi to fore
 * @fore: char to check
 * @pathi: char to check
 * Return: 0 is success
 */
char *_strcpy(char *fore, char *pathi)
{
	int a;

	for (a = 0; pathi[a] != '\0'; a++)
		fore[a] = pathi[a];
	fore[a] = '\0';
	return (fore);
}
