#include <stdlib.h>
#include <stddef.h>

/**
 * create_array - creates array of chars + initializes it with a specific char
 * @size: size of array
 * @c: character used for initialization
 * Return: pointer to the array
 *       : NULL (fails) if size = 0
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	int i;

	if (size = 0)
	{
		return (NULL);
	}

	array = malloc(sizeof(*array) * size);
	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}
	return (array);
}
