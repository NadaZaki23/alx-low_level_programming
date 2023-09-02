#include "main.h"

/**
 * get_endianness - Checks the endianness
 * Return: 0 if big endian
 * or 1 if little endian
 */

int get_endianness(void)
{
	int n = 1;
	char *e = (char *)&n;

	if (*e == 1)
		return (1);

	return (e[0]);
}
