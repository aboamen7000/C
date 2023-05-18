#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n element of an array of integers
 * Owned by Bwave
 * @one: int to check
 * @two: int to check
 * Return: 0 is success
 */
void print_array(int *one, int two)
{
	int x;

	for (x = 0; x < two; x++)
		if (x != two - 1)
		printf("%d, ", one[x]);
		else
			printf("%d", one[x]);
printf("\n");
}
