#include "main.h"

/**
 * _strncat - concatenates two strings
 * @src: string to be appended
 * @dest: string to be appended to
 * @n: bytes used from src
 * Return: pointer to restulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	while (dest[i++] != '\0')
		;

	for (j = 0; j < n; j++)
	{
		dest[i++] = src[j];
	}

	dest[i] = '\0';
	return (dest);
}
