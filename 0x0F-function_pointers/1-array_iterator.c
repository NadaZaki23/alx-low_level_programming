#include "function_pointers.h"

/**
 * array_iterator - executes a function
 *                - given as a prameter on each array element
 * @array: input array
 * @size: array size
 * @action: pointer to function to be executed
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array == NULL || action == NULL)
		return;
	for (; size > 0; size--)
	{
		action(*array);
		array++;
	}
}
