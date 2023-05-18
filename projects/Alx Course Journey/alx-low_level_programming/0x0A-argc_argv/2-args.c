#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints all arguments it receives.
 * @argc: argc counter numb line
 * @argv: args arrays line
 * @(void): compile functions with unused variables
 * Return: 0
 */

int main(int argc, char *argv[])
{
/** for loop to loop through the data */
int index = 0;
for (; index < argc; index++)
{
printf("%s\n", argv[index]);
}
return (0);
}
