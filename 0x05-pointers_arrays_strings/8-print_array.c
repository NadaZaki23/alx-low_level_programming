#include "main.h"
#include <string.h>

/**
 * print_array - prints n elements of an array of integers
 * @a: array of integers
 * @n: number of elements of the array to be printed
 */

void print_array(int *a, int n)
{
	int i, j;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < strlen(a[i]); j++)
		{
			_putchar(a[i][j] + '0');
		}
		if (i == n - 1)
			break;
		_putchar(',');
		_putchar(' ');
	}
	_putchar('\n');
}
