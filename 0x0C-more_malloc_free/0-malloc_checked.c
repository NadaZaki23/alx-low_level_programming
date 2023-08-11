#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc
 *                - if fails cause normal process termination
 * @b: bytes in memory to be preserved
 * Return: pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
	{
		exit(98);
	}
}
