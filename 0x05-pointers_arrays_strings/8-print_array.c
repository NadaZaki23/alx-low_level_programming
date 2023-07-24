#include "main.h"
#include <string.h>

/**
 * print_array - prints n elements of an array of integers
 * @a: array of integers
 * @n: number of elements of the array to be printed
 */

void print_array(int *a, int n)
{
	int i, temp;

	for (i = 0; i < n; i++)
	{
		temp = a[i];
		while (temp / 10)
		{
			_putchar(temp % 10 + '0');
			temp = temp / 10;
		}
		if (i == n - 1)
			break;
		_putchar(',');
		_putchar(' ');
	}
	_putchar('\n');
}
