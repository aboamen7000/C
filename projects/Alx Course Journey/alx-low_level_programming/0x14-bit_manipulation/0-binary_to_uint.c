#include "main.h"

/**
 * binary_to_uint - a function that converts a binary number to an unsigned int
 *
 * @b: is pointing to a string of 0 and 1 chars
 *
 * Return: the converted number, or 0 if
 */

unsigned int binary_to_uint(const char *b)
{
unsigned int number;

for (number = 0; b && *b; b++)
{

if (*b != '0' && *b != '1')
{ return (0); }

number <<= 1;
number += *b - '0';
}
return (number);
}
