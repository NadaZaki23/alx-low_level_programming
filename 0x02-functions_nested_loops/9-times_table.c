#include "main.h"

/**
 * times_table - prints the 9 times table starting with 0
 */

void times_table(void)
{
	int row;
	int column;
	int product;

	for (row = 0; row < 10; row++)
	{
		for (column = 0; column < 10; column++)
		{
			product = (row * column);

			if (column == 0)
			{
				_putchar('0' + product);
			}
			else if (product < 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar('0' + product);
			}
			else if (product > 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar('0' + (product / 10));
				_putchar('0' + (product % 10));
			}
		}
		_putchar('\n');
	}
}
