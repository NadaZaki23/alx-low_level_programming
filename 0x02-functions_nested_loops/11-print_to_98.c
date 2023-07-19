#include "main.h"

/**
 * print_to_98 - prints all natural numbers from n to 98
 */

void print_to_98(int n)
{
	for (; n < 99; n++)
	{
		_putchar('0' + n);
		_putchar(',');
		_putchar(' ');
	}
	_putchar('\n');
}
