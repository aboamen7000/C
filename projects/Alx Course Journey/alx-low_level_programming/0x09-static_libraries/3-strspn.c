#include "main.h"
/**
 * _strspn - a function that gets the length of a prexif substring .
 *
 * @s : pointer to string input .
 *
 * @accept: substring prefix to look for .
 *
 * Return: the number of bytes in the initial segment .
 */
unsigned int _strspn(char *s, char *accept)
{
	int var_1, var_2, var_3;

	var_1 = 0;
	while (s[var_1] != '\0')
	{
		var_2 = 0;
		var_3 = 1;
		while (accept[var_2] != '\0')
		{
			if (s[var_1] == accept[var_2])
			{
				var_3 = 0;
				break;
			}
			var_2++;
		}
		if (var_3 == 1)
			break;
		var_1++;
	}
	return (var_1);
}
