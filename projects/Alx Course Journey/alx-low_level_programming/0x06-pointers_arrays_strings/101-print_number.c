#include "main.h"
/**
 *print_number - prints an integer.
 *only using the putchar function.
 *@n: integer to be printed.
 *
 *Return: void.
 */
void print_number(int n)
{
	unsigned int number;

	number = n;
	if (n < 0)
	{
		_putchar(45);
		number = -n;
	}

	if (number / 10)
	{
		print_number(number / 10);
	}
	_putchar((number % 10) + '0');
}
