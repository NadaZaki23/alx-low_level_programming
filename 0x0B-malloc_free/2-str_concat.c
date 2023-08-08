#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * str_concat - concatenates two strings
 * @s1: frist string
 * @s2: second string
 * Return: pointer to newly allocated space in memory containing both strings
 *       : NULL (failer)
 */

char *str_concat(char *s1, char *s2)
{
	int i, j;
	int size1 = 0, size2 = 0;
	char *str;

	if (s1 != NULL)
	{
		i = 0;
		while (s1[i] != '\0')
			i++;
		size1 = i;
	}
	if (s2 != NULL)
	{
		i = 0;
		while (s2[i] != '\0')
			i++;
		size2 = i;
	}
	str = malloc((size1 + size2 + 1) * sizeof(char));
	if (str != NULL)
	{
		i = 0;
		if (s1 == NULL && s2 == NULL)
			;
		else
		{
			for (; i < size1; i++)
				str[i] = s1[i];
			for (j = 0; j < size2; j++)
				str[i++] = s2[j];
		}
		str[i] = '\0';
		return (str);
	}
	else
		return (NULL);
}
