#include "main.h"

/**
 * cap_string - capitalizes all words in a string
 * @c: string
 * Return: address of c
 */
char *cap_string(char *c)
{
	int i = 0, j;
	char ch[] = " \t\n,;.!?\"(){}";

	while (*(c + i))
	{
		if (*(c + i) >= 'a' && *(c + i) <= 'z')
		{
			if (i == 0)
				*(c + i) -= 'a' - 'A';
			else
			{
				for (j = 0; j <= 12; j++)
				{
					if (ch[j] == *(c + i - 1))
						*(c + i) -= 'a' - 'A';
				}
			}
		}
		i++;
	}
	return (c);
}

