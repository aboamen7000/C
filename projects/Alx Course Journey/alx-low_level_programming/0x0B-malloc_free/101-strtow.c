#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * grabing - Entry returns
 * @input_1: inputs
 * @input_2: inputs
 */
void grabing(char **input_1, unsigned int input_2)
{
if (input_2 != 0 && input_1 != NULL)
{
for (; input_2 > 0; input_2--)
{
free(input_1[input_2]);
}
free(input_1[input_2]);
free(input_1);
}
}
/**
 * strtow - function that splits a string into words
 * @str: inputs
 * Return: 0
 */
char **strtow(char *str)
{
char **type;
unsigned int ex1, ex2, ex3;
unsigned int index_1, index_2;
if (str == NULL || *str == '\0')
{ return (NULL); }
for (ex1 = ex2 = 0; str[ex1] != '\0'; ex1++)
{
if (str[ex1] != ' ' && (str[ex1 + 1] == ' ' || str[ex1 + 1] == '\0'))
{ ex2++; }}
type = malloc((ex2 + 1) * sizeof(char *));
if (ex2 == 0 || type == NULL)
{ free(type);
return (NULL); }
for (index_1 = ex3 = 0; index_1 < ex2; index_1++)
{
for (ex1 = ex3; str[ex1] != '\0'; ex1++)
{
if (str[ex1] == ' ')
{ ex3++; }
if (str[ex1] != ' ' && (str[ex1 + 1] == ' ' || str[ex1 + 1] == '\0'))
{ type[index_1] = malloc((ex1 - ex3 + 2) * sizeof(char));
if (type[index_1] == NULL)
{ grabing(type, index_1);
return (NULL); }
break; }}
for (index_2 = 0; ex3 <= ex1; ex3++, index_2++)
{ type[index_1][index_2] = str[ex3]; }
type[index_1][index_2] = '\0'; }
type[index_1] = NULL;
return (type); }
