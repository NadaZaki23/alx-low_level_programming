#include "main.h"
/* #include <stdlib.h> */

/**
 * _strncpy - cppies a string
 * writes additionl null bytes to dest to ensure total n
 * @src: string to be copied
 * @dest: destination to be copied to
 * @n: number of bytes to be copied
 * Return: a pointer to the reslting string dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i, j;

	/* dest = malloc(n + 1); */
	i = 0;
	j = 0;
	while (src[j] != '\0' && j < n)
	{
		dest[i++] = src[j++];
	}
	for (; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
