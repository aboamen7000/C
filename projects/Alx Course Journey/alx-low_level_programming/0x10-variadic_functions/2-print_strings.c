#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_strings - function that prints strings, followed by a new line
 * @separator: is the string to be printed between the strings
 * @n: is the number of strings passed to the function
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int index = 0;
va_list line;
char *chrs;
va_start(line, n);
if (separator != NULL)
{ }
else
{ separator = ""; }
for (; index < n; index++)
{ chrs = va_arg(line, char*);
if (chrs != NULL)
{ }
else
{ chrs = "(nil)"; }
printf("%s", chrs);
if (n - 1 > index)
{ printf("%s", separator); }
}
printf("\n");
va_end(line);
}

