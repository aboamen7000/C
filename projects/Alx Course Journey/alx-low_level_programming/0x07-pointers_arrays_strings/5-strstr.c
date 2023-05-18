#include "main.h"

/**
 * _strstr - locate and return pointer to first occurence of substring
 *
 * @haystack: string to search
 *
 * @needle: target substring to search for
 *
 * Return: pointer to index of string at first occurence of whole substring.
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int vr1 = 0, vr2 = 0;

	while (haystack[vr1])
	{
		while (needle[vr2] && (haystack[vr1] == needle[0]))
		{
			if (haystack[vr1 + vr2] == needle[vr2])
				vr2++;
			else
				break;
		}
		if (needle[vr2])
		{
			vr1++;
			vr2 = 0;
		}
		else
			return (haystack + vr1);
	}
	return (0);
}
