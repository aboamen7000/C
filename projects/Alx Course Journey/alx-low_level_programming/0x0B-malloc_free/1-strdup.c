#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * _strdup - returns a pointer to a newly allocated space in memory
 *            which contains a copy of the string given as a parameter
 * @str: input string
 * Return: 0 successfully
 */

char *_strdup(char *str)
{
char *type;
unsigned int index;
unsigned int words = 0;
if (str == NULL)
{
return (NULL);
}
while (str[words] != '\0')
{
words++;
}
type = (char *)malloc(sizeof(char) * (words + 1));
if (type == NULL)
{
return (NULL);
}
for (index = 0; index < words; index++)
{
type[index] = str[index];
}
type[words] = '\0';
return (type);
}
