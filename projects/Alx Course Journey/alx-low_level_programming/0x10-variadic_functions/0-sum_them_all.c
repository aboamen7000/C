#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - function that returns the sum of all its parameters
 * @n: int adder,
 * Return: the sum result
 */
int sum_them_all(const unsigned int n, ...)
{
unsigned int res = 0;
unsigned int index = 0;
va_list poiter;

if (n == 0)
{ return (0); }
else
{ }

va_start(poiter, n);
for (; index < n; index++)
{
res += va_arg(poiter, int);
}
va_end(poiter);
return (res);
}

