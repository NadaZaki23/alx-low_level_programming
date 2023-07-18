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
	if (c > 96 && c < 123)
		return (1);
	else
		return (0);
}
