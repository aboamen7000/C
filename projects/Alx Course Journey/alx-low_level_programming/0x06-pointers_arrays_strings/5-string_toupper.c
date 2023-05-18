#include "main.h"
/**
 * string_toupper - change lowercase to uppercase
 * @c:string
 * Return:char
 */
char *string_toupper(char *c)
{

	int i;

i = 0;
	while (*(c + i))
	{
		if (*(c + i) >= 'a' && *(c + i) <= 'z')
			*(c + i) -= 'a' - 'A';
		i++;
	}
	return (c);
}
