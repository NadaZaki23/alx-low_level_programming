#include "main.h"

/**
 * _strlen - returns the lenght of a string
 * @s: pointer to a string
 * Return: length
 */

int _strlen(char *s)
{
	int length = 0;

	while (1)
	{
		if (*s == '\0')
			break;
		length += 1;
		s += 1;
	}
	return (length);
}
