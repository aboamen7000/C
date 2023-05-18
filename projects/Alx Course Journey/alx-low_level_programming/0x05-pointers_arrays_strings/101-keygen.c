#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Generates random valid passwords for the
 *        program 101-crackme.
 *
 * Return: Always 0.
 */
int main(void)
{
	char pass[100];
	int i ,res = 0;
	int diff_1, diff_2;

	srand(time(0));

	while (res < 2772)
	{
		pass[i] = 33 + rand() % 94;
		res += pass[i++];
	}

	pass[i] = '\0';

	if (res != 2772)
	{
		diff_1 = (res - 2772) / 2;
		diff_2 = (res - 2772) / 2;
		if ((res - 2772) % 2 != 0)
			diff_1++;

		for (i = 0; pass[i]; i++)
		{
			if (pass[i] >= (33 + diff_1))
			{
				pass[i] -= diff_1;
				break;
			}
		}
		for (i = 0; pass[i]; i++)
		{
			if (pass[i] >= (33 + diff_2))
			{
				pass[i] -= diff_2;
				break;
			}
		}
	}

	printf("%s", pass);

	return (0);
}

