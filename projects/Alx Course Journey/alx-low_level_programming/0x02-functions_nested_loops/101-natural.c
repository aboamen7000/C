#include"main.h"

/**
 * main - Entry point
 *
 * Description: computes the sum of all
 *		the multiples of 3 or 5
 *		below 1024 (excluded)
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int sum, number;

	for (number = 0; number < 1024; ++number)
	{
		if ((number % 3 == 0) || (number % 5 == 0))
			sum += number;
	}
	printf("%d\n", sum);

	return (0);
}

