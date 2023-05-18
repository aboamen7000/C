#include "main.h"

/**
 * _strncat - concatenates two strings
 *
 * @source: The source of strings
 * @path: The destination of the string
 * @l: The length of int
 *
 * Return: pointer to the resulting string destination
 */
char *_strncat(char *path, char *source, int l)
{
	int i, j;

	for (i = 0; path[i] != '\0'; i++)
	{
		continue;
	}
	for (j = 0; source[j] != '\0' && j < l; j++)
	{
		path[i + j] = source[j];
	}
	path[i + j] = '\0';
	return (path);
}
