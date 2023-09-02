#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsinged int
 * @b: pointer to binary number string
 * Return: converted number or 0
 * if a character in b string in not 0 or 1
 * or b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int res;
	unsigned int mult;
	int size;

	if (b == NULL)
		return (0);
	for (size = 0; b[size];)
		size++;
	res = 0;
	mult = 1;
	for (size -= 1; size >= 0; size--)
	{
		if (b[size] != '0' && b[size] != '1')
			return (0);
		res += (b[size] - '0') * mult;
		mult *= 2;
	}
	return (res);
}
