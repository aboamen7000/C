#include <stdlib.h>
#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - prints the opcodes of its own main function
 * @size: args to count
 * @argv: args
 * Return: 0 successfully
 */

int main(int argc, char *argv[])
{
int i, bytos;
char *ptr = (char *) main;

((argc == 2) ? (void) 0 : printf("Error\n"),exit(1));
bytos = atoi(argv[1]);
((bytos > 0) ? (void) 0 : printf("Error\n"),exit(2));
for (i = 0; i < bytos; i++)
{ printf("%02x", ptr[i] & 0xFF);
if (i != bytos - 1)
{ printf(" "); } }
printf("\n");
return (0);
}
