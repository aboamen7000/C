#include "main.h"
/**
 * _strpbrk - a function that searches a string for any of a set of byte .
 *
 * @s : pointer to input string .
 *
 * @accept: pointer to string we searching for in @s .
 *
 * Return: pointer to the bytes in @s or NULL if no such byte is found .
 */

char *_strpbrk(char *s, char *accept)
{
	int var_1, var_2;

	var_1 = 0;
	while (s[var_1] != '\0')
	{
		var_2 = 0;
		while (accept[var_2] != '\0')
		{
			if (s[var_1] == accept[var_2])
			{
				return (s + var_1);
			}
			else
			{
				var_2++;
			}
		}
		var_1++;
	}
	return ('\0');
}
