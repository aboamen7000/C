#include "main.h"

/**
 * _strcat - concat 2 string
 * @path:char
 * @source:char
 * Return:char
 */
char *_strcat(char *path, char *source)
{
	char *c = path;

	while (*path != '\0')
	{
		path++;
	}

	while (*source != '\0')
	{
		*path = *source;
		path++;
		source++;
	}
	*path = '\0';
	return (c);
}

