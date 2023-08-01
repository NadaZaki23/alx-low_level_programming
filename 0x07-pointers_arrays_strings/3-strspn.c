#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: string to be searched
 * @accept: matching target
 * Return: number of bytes in s consist bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j;
	unsigned int found = 0;

	i = 0;
	for (; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				found++;
				break;
			}
			if (accept[j + 1] == '\0' && s[i] != accept[j])
				return (found);
		}
	}
	return (found);
}
