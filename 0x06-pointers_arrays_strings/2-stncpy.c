#include "main.h"

/**
 * _strncpy - cppies a string
 * @src: string to be copied
 * @dest: destination to be copied to
 * @n: number of bytes to be copied
 * Return: a pointer to the reslting string dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i, j;

	dest = malloc(n + 1);
	i = 0;
	j = 0;
	while (src[j] != src[n])
	{
		dest[i++] = src[j++];
	}
	dest[i] = '\0';
	return (dest);
}
