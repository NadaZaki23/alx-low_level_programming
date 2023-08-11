#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array using malloc
 * @nmemb: number of array elements
 * @size: the size of each element
 * Return: pointer to allocated memory
 *       : NULL if nmemb or size is zero or malloc fails
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	int size_int, i;

	if (nmemb <= 0 || size <= 0)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);
	size_int = size;
	for (i = 0; i < nmemb * size_int; i++)
		ptr[i] = 0;
	return (ptr);
}
