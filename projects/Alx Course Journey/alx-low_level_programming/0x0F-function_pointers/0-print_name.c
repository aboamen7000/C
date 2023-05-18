#include <stdlib.h>
#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name - function that prints a name
 * @name: name to print,
 * @f: function to print
 * Return: 0 successfully
 */
void print_name(char *name, void (*f)(char *))
{
((f != NULL && name != NULL) ? f(name) : (void) 0);
}

