#include "main.h"

/**
 * get_bit - returns value of a bit at a given index
 * @n: bit
 * @index: index to get the value at
 * Return: valueo f bit at index or -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	if ((n & (1 << index)) == 0)
		return (0);

	return (1);
}
