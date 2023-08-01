#include "main.h"
#include <stddef.h>

/**
 * _strstr - locates a substring
 * @haystack: string to search in
 * @needle: string to search for
 * Return: pointer to beginning of located substring
 *       : or NULL if substring is not found
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j, k;

	i = 0;
	for (; haystack[i] != '\0'; i++)
	{
		if (haystack[i] == needle[0])
		{
			k = i;
			for (j = 0; needle[j] != '\0'; j++)
			{
				if (haystack[k] == needle[j])
					k++;
				else
					break;
			}
			if (needle[j] == '\0')
			{
				return (haystack + 1);
			}
		}
	}
	return (NULL);
}
