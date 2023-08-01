#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints sum of 2 diagonals of square(nxn) integers matrix
 * @a: pointer to square matris
 * @size: size of matrix
 */

void print_diagsums(int *a, int size)
{

	int diag1 = 0;
	int diag2 = 0;
	int i;

	for (i = 0; i < size; i++)
	{
		diag1 += a[(i * size) + i];
	}

	for (i = 1; i <= size; i++)
	{
		diag2 += a[(i * size) - i];
	}
	printf("%d, %d\n", diag1, diag2);

}
