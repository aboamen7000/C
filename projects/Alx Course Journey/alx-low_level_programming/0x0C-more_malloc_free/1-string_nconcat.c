#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * string_nconcat - concatenates two strings
 * @s1: 1st char
 * @s2: 2nd char
 * @n: unsigned integer
 * Return: 0 successfully array
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int first, second, third, fourth;
char *type;
if (s1 == NULL)
{ s1 = ""; }
if (s2 == NULL)
{ s2 = ""; }
first = second = 0;
while (s1[first] != '\0')
{ first++; }
while (s2[second] != '\0')
{ second++; }
((n >= second) ? (n = second) :  0);
type = (char *) malloc((n + first + 1) * sizeof(char));
if (type == NULL)
{ return (NULL); }
for (third = 0; s1[third] != '\0' ; third++)
{ type[third] = s1[third]; }
for (fourth = 0; fourth < n && s2[fourth] != '\0'; fourth++)
{
type[third] = s2[fourth];
third++;
}
type[third] = '\0';
return (type);
}
