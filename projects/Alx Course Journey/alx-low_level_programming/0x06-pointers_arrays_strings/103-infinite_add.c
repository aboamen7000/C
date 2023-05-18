#include "main.h"

/**
 * reverse - reverse the array
 * @arg: integer argument
 * Return: 0
 */

void reverse(char *arg)
{
	int one = 0;
	int two = 0;
	char tran;

	while (*(arg + one) != '\0')
	{
		one++;
	}
	one--;

	for (two = 0; two < one; two++, one--)
	{
		tran = *(arg + two);
		*(arg + two) = *(arg + one);
		*(arg + one) = tran;
	}
}

/**
 * infinite_add - add 2 numbers together
 * @n1: text representation of 1st number to add
 * @n2: text representation of 2nd number to add
 * @r: pointer to buffer
 * @size_r: buffer size
 * Return: pointer to calling function
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int overflowing = 0, index = 0, next = 0, digitals = 0;
	int value_1 = 0, value_2 = 0, tempo = 0;

	while (*(n1 + index) != '\0')
		index++;
	while (*(n2 + next) != '\0')
		next++;
	index--;
	next--;
	if (next >= size_r || index >= size_r)
		return (0);
	while (next >= 0 || index >= 0 || overflowing == 1)
	{
		if (index < 0)
			value_1 = 0;
		else
			value_1 = *(n1 + index) - '0';
		if (next < 0)
			value_2 = 0;
		else
			value_2 = *(n2 + next) - '0';
		tempo = value_1 + value_2 + overflowing;
		if (tempo >= 10)
			overflowing = 1;
		else
			overflowing = 0;
		if (digitals >= (size_r - 1))
			return (0);
		*(r + digitals) = (tempo % 10) + '0';
		digitals++;
		next--;
		index--;
	}
	if (digitals == size_r)
		return (0);
	*(r + digitals) = '\0';
	reverse(r);
	return (r);
}
