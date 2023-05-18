#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_all - function that prints anything
 * @format: is a list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
unsigned int index_1 = 0;
unsigned int index_2;
unsigned int index_3 = 0;
char *typos;
const char t_arg[] = "cifs";
va_list valist;
	va_start(valist, format);
	while (format && format[index_1])
	{
		index_2 = 0;
		while (t_arg[index_2])
		{
			if (format[index_1] == t_arg[index_2] && index_3)
			{
				printf(", ");
				break;
			} index_2++; }
		switch (format[index_1])
		{
			case 'c':
				printf("%c", va_arg(valist, int)), index_3 = 1;
				break;
			case 'i':
				printf("%d", va_arg(valist, int)), index_3 = 1;
				break;
			case 'f':
				printf("%f", va_arg(valist, double)), index_3 = 1;
				break;
			case 's':
				typos = va_arg(valist, char *), index_3 = 1;
				if (!typos)
				{ printf("(nil)");
					break; }
				printf("%s", typos);
				break;
		} index_1++; }
	printf("\n"), va_end(valist);
}
