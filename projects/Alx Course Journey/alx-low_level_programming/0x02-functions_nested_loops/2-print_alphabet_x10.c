#include"main.h"

/**
 * print_alphabet_x10 : function that will print the alphabet 10 times
 *
 * Return: Always 0.
*/

void print_alphabet_x10(void)
{
	int line, chr;

	for (line = 0; line <= 9; ++line)
	{
		for (chr = 'a'; chr <= 'z'; ++chr)
			_putchar(chr);
		_putchar('\n');
	}
}
