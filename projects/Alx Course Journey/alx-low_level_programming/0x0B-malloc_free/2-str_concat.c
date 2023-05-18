#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * str_concat - function that concatenates two strings
 * @s1: string
 * @s2: string
 * Return: 0 successfully
 */

char *str_concat(char *s1, char *s2)
{
	int index_1, index_2, words_1, words_2, words;
	char *result;

	words_1 = words_2 = 0;

	if (s1 != NULL)
	{
		index_1 = 0;
		while (s1[index_1++] != '\0')
			words_1++;
	}

	if (s2 != NULL)
	{
		index_1 = 0;
		while (s2[index_1++] != '\0')
			words_2++;
	}

	words = words_1 + words_2;
	result = (char *)malloc(sizeof(char) * (words + 1));
	if (result == NULL)
		return (NULL);

	for (index_1 = 0; index_1 < words_1; index_1++)
		result[index_1] = s1[index_1];
	for (index_2 = 0; index_2 < words_2; index_2++, index_1++)
		result[index_1] = s2[index_2];
	result[words] = '\0';

	return (result);
}
