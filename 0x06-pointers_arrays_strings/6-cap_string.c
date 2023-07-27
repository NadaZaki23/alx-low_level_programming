#include "main.h"

/**
 * cap_string - capitalizes all word of a string
 * @s: pointer to string
 * Return: a pointer to the resulting string s
 */

char *cap_string(char *s)
{
	int i, j;

	if (s[0] >= 97 && s[0] <= 122)
		s[0] = s[0] - 32;

	for (i = 1; s[i] != '\0'; i++)
	{
		j = i -1;
		if (s[j] == ' ' || s[j] == '\t' || s[j] == '\n' ||
		    s[j] == ',' || s[j] == ';' || s[j] == '.' ||
		    s[j] == '!' || s[j] == '?' || s[j] == '"' ||
		    s[j] == '(' || s[j] == ')' || s[j] == '{' || s[j] == '}')
		{
			if (s[i] >= 97 && s[i] <= 122)
				s[i] = s[i] - 32;
		}
	}
	return (s);
}
