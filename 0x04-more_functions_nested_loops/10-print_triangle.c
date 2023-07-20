#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: size of the triangle
 */

void print_triangle(int size)
{
	int row, space, spaces, symbol;

	spaces = size - 1;
	for (row = 1; row <= size; row++)
	{
		for (space = spaces; space >= 1; space--)
		{
			_putchar(' ');
		}
		spaces -= 1;
		for (symbol = 1; symbol <= row; symbol++)
		{
			_putchar('#');
		}
		if (row == size)
			break;
		_putchar('\n');
	}
	_putchar('\n');
}
