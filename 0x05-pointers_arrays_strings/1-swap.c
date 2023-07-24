#include "main.h"

/**
 * swap_int - swap values of two integers
 * @a: frist integer
 * @b: second integer
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
