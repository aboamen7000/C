#include "main.h"

/**
 * print_binary - a function that converts a binary number to an unsigned int
 *
 * @n: numer to print in binary
 *
 * Return: nothing
 */

void print_binary(unsigned long int n)
{

if (n > 1)
{
print_binary(n >> 1);
}

_putchar((n & 1) + '0');
}
