#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: frist string
 * @s2: second string
 * Return: difference(diff): -ve (s1 < s2) | 0 (s1 == s2) | +ve (s1 > s2)
 */

int _strcmp(char *s1, char *s2)
{
	int i, j, diff;

	i = 0;
	j = 0;
	while (s1[i] == s2[j] && s1[i] != '\0' && s2[j] != '\0')
	{
		i++;
		j++;
	}

	if (s1[i] == '\0' && s2[j] == '\0')
	{
		diff = 0;
	}
	else
	{
		diff = s1[i] - s2[j];
	}
	return (diff);
}
