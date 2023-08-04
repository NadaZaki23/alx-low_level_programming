#include "main.h"

/**
 * _isdigit - checks for digit (0 through 9)
 * @c: input to be checked
 * Return: 1 (True) | 0 (False)
 */

int _isdigit(int c)
{
	if (c > 47 && c < 58)
		return (1);
	return (0);
}
