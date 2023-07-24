#include "main.h"

/**
 * _strcpy - copies string pointed to by src to buffer pointed to by dest
 * @dest: pointer to destination
 * @src: pointer to source
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i;
	char *p = dest;

	while (*src != '\0')
	{
		*dest = *src;
		*dest++;
		src++;
	}
	*dest = '\0';
	return (p);
}
