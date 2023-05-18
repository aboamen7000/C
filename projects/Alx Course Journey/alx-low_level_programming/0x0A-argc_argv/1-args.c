#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints the number of arguments passed into it.
 * @argc: argc counter numb
 * @argv: args arrays
 * @(void): compile functions with unused variables
 * Return: 0
 */

int main(int argc, char **argv)
{
/*ignore argv*/
(void)argv;
printf("%d\n", argc - 1);

return (0);
}
