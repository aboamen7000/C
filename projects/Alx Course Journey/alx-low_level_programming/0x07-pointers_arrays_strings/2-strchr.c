#include "main.h"

/**
 * _strchr - locates a character in a string .
 *
 * @c : occurrence of the character .
 *
 * @s: in the string .
 *
 * Return: first occurence of charatcer or null if not found .
 */
char *_strchr(char *s, char c)
{
	/** while looping into ptr */
	while (*s)
	{
		if (*s != c)
		{
			s++;
		}
		else
		{
			return (s);
		}
	}
	/** if c is '\0', you should return */
	/** the pointer to the '\0' of the string s */
	if (c == '\0')
	{
		return (s);
	}
	/** Return null if not found */
	return ('\0');
}
