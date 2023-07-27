#include "main.h"

/**
 * _strncat - concatenates two strings
 * @src: the string to be appended
 * @dest: the string to be appended to
 * @n: most n bytes used form src
 * Return: a pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}

	j = 0;
	while (src[j] != src[n])
	{
		dest[i++] = src[j++];
	}
	dest[i] = '\0';
	return (dest);
}
