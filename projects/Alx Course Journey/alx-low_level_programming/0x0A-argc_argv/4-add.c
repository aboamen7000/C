#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

/**
 * main - adds positive numbers.
 * @argc: argc counter numb line
 * @argv: args arrays line
 * Return: 0 done, 1 error
 */

int main(int argc, char *argv[])
{
	int one = 1;
	int two = 0;
	int res = 0;

	for (; one < argc; one++)
	{
		for (; argv[one][two] != '\0'; two++)
		{
			if (!isdigit(argv[one][two]))
			{
				printf("Error\n");
				return (1);
			}
		}
		res += atoi(argv[one]);
	}
	printf("%d\n", res);
	return (0);
}

