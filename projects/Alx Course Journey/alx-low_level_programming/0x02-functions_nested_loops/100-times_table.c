#include"main.h"

/**
 * print_times_table - prints time table of n
 *
 * @n: takes number input
*/

void print_times_table(int n)
{
	int pro, mul, numb;

	if (n <= 15 && n >= 0)
	{
		for (numb = 0; numb <= n; ++numb)
		{
			_putchar(48);
			for (mul = 1; mul <= n; ++mul)
			{
				_putchar(',');
				_putchar(' ');

				pro = numb * mul;

				if (pro <= 9)
					_putchar(' ');
				if (pro <= 99)
					_putchar(' ');

				if (pro >= 100)
				{
					_putchar((pro / 100) + 48);
					_putchar((pro / 10) % 10 + 48);
				} else if (pro <= 99 && pro >= 10)
					_putchar((pro / 10) + 48);
				_putchar((pro % 10) + 48);
			}
			_putchar('\n');
		}
	}
}

