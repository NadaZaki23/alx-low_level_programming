#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: the memory area to copy to
 * @src: the memory area to copy from
 * @n: bytes to be copied
 * Return: pointer to (dest)
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;
	int num = n;

	for (i = 0; i < num; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
