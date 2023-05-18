#include"main.h"

/**
 * print_alphabet : utilizes on the _putchar function to print : the alphabet a - z
*/

void print_alphabet(void)
{
	int cha;
	for (cha = 'a'; cha <= 'z'; ++cha)
		_putchar(cha);
	_putchar('\n');
}
