#include "main.h"

/**
 * flip_bits - a function that returns the number of bits you would
 * need to flip to get from one number to another.
 * @n: numb
 * @m: numb
 * Return: flip Number Counter
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{

unsigned int counter = 0;
unsigned long int values = n ^ m;

while (values)
{
values &= values - 1;
counter++;
}

return (counter);
}
