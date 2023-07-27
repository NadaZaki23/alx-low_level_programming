#include "main.h"

/**
 * cap_string - capitalizes all word of a string
 * @s: pointer to string
 * Return: a pointer to the resulting string s
 */

char *cap_string(char *s)
{
	int i, sep = 0;

	if (s[0] >= 65 && s[0] <= 90)
		s[0] = s[0] + 32;

	for (i = 1; s[i] != '\0'; i++)
	{
		if (s[i] == ' ' || s[i] == '\t' || s[i] == '\n' ||
		    s[i] == ',' || s[i] == ';' || s[i] == '.' ||
		    s[i] == '!' || s[i] == '?' || s[i] == '"' ||
		    s[i] == '(' || s[i] == ')' || s[i] == '{' || s[i] == '}')
		{
			sep = 1;
		}

		if (sep == 1 && s[i] >= 65 && s[i] <= 90)
		{
			s[i] = s[i] + 32;
			sep = 0;
		}
	}
	return (s);
}
