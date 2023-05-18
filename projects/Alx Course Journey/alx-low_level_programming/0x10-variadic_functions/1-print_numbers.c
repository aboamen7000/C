#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_numbers - function that prints numbers, followed by a new line
 * @separator: the string to be printed between numbers,
 * @n: the number of integers passed to the function,
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int index = 0;
va_list line;

va_start(line, n);
for (; index < n; index++)
{
printf("%i%s", va_arg(line, int),
		 (index != n - 1 && separator) ? separator : "");
}
va_end(line);
printf("\n");
}

