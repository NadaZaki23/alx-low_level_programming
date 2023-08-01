#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: pointer to bytes of memory area
 * @b: constant byte
 * @n: bytes of memory area pointed to
 * Return: pointer to the memory area (s)
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i;
	int num = n;

	for (i = 0; i < num; i++)
	{
		s[i] = b;
	}
	return (s);
}
