#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: starting value (included)
 * @max: ending value (included)
 * Return: pointer to newly created array
 *       : NULL if min > max or malloc fails
 */

int *array_range(int min, int max)
{
	int *array;
	int i, n;

	if (min > max)
		return (NULL);
	n = max - min + 1;
	array = malloc(sizeof(int) * n);
	if (array == NULL)
		return (NULL);
	for (i = 0; i < n; i++)
		array[i] = min++;
	return (array);
}
