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

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (&dest);
}
