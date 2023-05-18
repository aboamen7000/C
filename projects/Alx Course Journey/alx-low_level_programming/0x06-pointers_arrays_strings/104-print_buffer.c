#include "main.h"
#include <stdio.h>
/**
 * isPrintableASCII - determines if integerr is a printable ASCII char
 * @integerr: integer
 * Return: 1 if true, 0 if false
 */
int isPrintableASCII(int integerr)
{
	return (integerr >= 32 && integerr <= 126);
}

/**
 * printHexes - print hex values for string b in formatted form
 * @p: string to print
 * @begining: starting position
 * @finish: ending position
 */
void printHexes(char *p, int begining, int finish)
{
	int i = 0;

	while (i < 10)
	{
		if (i < finish)
			printf("%02x", *(p + begining + i));
		else
			printf("  ");
		if (i % 2)
			printf(" ");
		i++;
	}
}

/**
 * printASCII - print ascii values for string b,
 * formatted to replace nonprintable chars with '.'
 * @b: string to print
 * @begining: starting position
 * @finish: ending position
 */
void printASCII(char *b, int begining, int finish)
{
	int ch, i = 0;

	while (i < finish)
	{
		ch = *(b + i + begining);
		if (!isPrintableASCII(ch))
			ch = 46;
		printf("%c", ch);
		i++;
	}
}

/**
 * print_buffer - prints a buffer
 * @b: string
 * @size: size of buffer
 */
void print_buffer(char *b, int size)
{
	int begining, finish;

	if (size > 0)
	{
		for (begining = 0; begining < size; begining += 10)
		{
			finish = (size - begining < 10) ? size - begining : 10;
			printf("%08x: ", begining);
			printHexes(b, begining, finish);
			printASCII(b, begining, finish);
			printf("\n");
		}
	} else
		printf("\n");
}
