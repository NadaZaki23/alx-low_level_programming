#define "main.h"

/**
 * _isupper - checks for uppercase character
 * 
 * @c: input character to be checked
 * 
 * Return: 1 (True) | 0 (False)
 */

int _isupper(int c)
{
	if (c > 64 && c < 91)
		return (1);
	
	return (0);
}
