#include "main.h"

/**
 * _islower - checks for lowercase character
 *
 * Return: 1 (True)
 *
 * Return: 0 (False)
 */

int _islower(int c)
{
	int i;

	if (c > 96 && c < 123)
		i = 1;
	else
		i = 0;
	return (i);
}
