#include "main.h"
#include <stddef.h>

/**
 * _strchr - locates a character in a string
 * @s: pointer to string
 * @c: character to be located
 * Return: pointer to first occurrence of the character c in string s
 *       : or NULL if the character is not found
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0' && s[i] != c; i++)
	{
		;
	}

	if (s[i] == c)
		return (&s[i]);
	else
		return (NULL);
}
