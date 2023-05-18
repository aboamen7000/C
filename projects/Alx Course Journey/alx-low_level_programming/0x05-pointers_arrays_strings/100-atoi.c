#include "main.h"

/**
 * _atoi - Convert a string to an integer.
 * @s: The pointer to convert
 *
 * Return: A integer
 */
int _atoi(char *s)
{
	int chr = 0;
	unsigned int nm = 0;
	int mini = 1;
	int integer = 0;

	while (s[chr])
	{
		if (s[chr] == 45)
		{
			mini *= -1;
		}

		while (s[chr] >= 48 && s[chr] <= 57)
		{
			integer = 1;
			nm = (nm * 10) + (s[chr] - '0');
			chr++;
		}

		if (integer == 1)
		{
			break;
		}

		chr++;
	}

	nm *= mini;
	return (nm);
}
