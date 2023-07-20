#include "main.h"

/**
 * more_numbers - prints 10 times the numbers from 0 to 14
 */

void more_numbers(void)
{
	int i, j, k;

	for (i = 0; i < 10; i++)
	{
		for (j = 48; j < 58; j++)
			_putchar(j);
		for (k = '0'; k < '5'; k++)
		{
			_putchar(49);
			_putchar(k);
		}
		_putchar('\n');
	}
}
