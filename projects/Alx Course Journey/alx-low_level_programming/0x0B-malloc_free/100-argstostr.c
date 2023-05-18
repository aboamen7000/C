#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * argstostr - function that concatenates all the arguments of your program
 * @ac: counter as args
 * @av: holding args
 * Return: 0 successfully
 */
char *argstostr(int ac, char **av)
{
int index_1, index_2;
int extra;
int words;
char *type;
if (av == NULL || ac == 0)
{
return (NULL);
}
/*geting len*/
words = 0;
for (index_1 = 0; index_1 < ac; index_1++)
{
for (index_2 = 0; av[index_1][index_2] != '\0'; index_2++)
{
words++;
}
words++;
}
type = malloc(sizeof(char) * (words + 1));
if (type == NULL)
{
return (NULL);
}
extra = 0;
for (index_1 = 0; index_1 < ac; index_1++)
{
for (index_2 = 0; av[index_1][index_2] != '\0'; index_2++)
{
type[extra] = av[index_1][index_2];
extra++;
}
type[extra] = '\n';
extra++;
}
type[extra] = '\0';
return (type);
}
