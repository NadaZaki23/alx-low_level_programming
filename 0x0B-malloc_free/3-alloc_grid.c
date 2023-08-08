#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * alloc_grid - create 2D array of integers
 *            - array of arrays of integers
 * @width: number of elements in array
 * @height: number of arrays
 * Return: pointer to 2D array
 *       : NULL (failure) or (width/height = 0 or -ve)
 */

int **alloc_grid(int width, int height)
{
	int **array;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);
	array = (int **)malloc(height * sizeof(int *));
	if (array != NULL)
	{
		for (i = 0; i < height; i++)
			array[i] = (int *)malloc(width * sizeof(int));
	}
	else
		return (NULL);
	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			array[i][j] = 0;
	return (array);
}
