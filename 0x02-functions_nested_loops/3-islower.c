#include "main.h"

/**
 * _islower - checks for lowercase character
 *
 * @c: the character to check
 *
 * Return: 1 (True) | 0 (False)
 */

int _islower(int c)
{
	if (c > 96 && c < 123)
		return (1);
	else
		return (0);
}
