#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 *
 * @c: chacter to check
 *
 * Return: 1 (True) | 0 (False)
 */

int _isalpha(int c)
{
	if (c > 96 && c < 123)
		return (1);
	else if (c > 64 && c < 91)
		return (1);
	else
		return (0);
}
